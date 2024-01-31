@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, HFCacheDelegate;

@interface HFCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (nonatomic) unsigned long long totalCost;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long totalCostLimit;
@property (copy, nonatomic) id /* block */ overrideObjectEvictionComparator;
@property (readonly, copy, nonatomic) id /* block */ defaultObjectEvictionComparator;
@property (readonly, weak, nonatomic) id<HFCacheDelegate> delegate;

- (void)removeAllObjects;
- (void)_removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (unsigned long long)_totalCost;
- (unsigned long long)_totalCostLimit;
- (BOOL)removeObjectsToAccommodateCost:(unsigned long long)a0;
- (BOOL)_canAccommodateCost:(unsigned long long)a0;
- (BOOL)_canAccommodateCostWithoutRemoval:(unsigned long long)a0;
- (void)_didEvictObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (id /* block */)_overrideObjectEvictionComparator;
- (BOOL)_removeObjectsToAccommodateCost:(unsigned long long)a0;
- (void)_setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2 removeObjectsToAccommodateCost:(BOOL)a3;
- (void)_setOverrideObjectEvictionComparator:(id /* block */)a0;
- (void)_setTotalCost:(unsigned long long)a0;
- (void)_setTotalCostLimit:(unsigned long long)a0;
- (BOOL)canAccommodateCost:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2 removeObjectsToAccommodateCost:(BOOL)a3;

@end
