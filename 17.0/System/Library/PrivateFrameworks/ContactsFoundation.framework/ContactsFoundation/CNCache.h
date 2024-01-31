@class NSArray, NSMutableDictionary, NSMutableArray;
@protocol CNScheduler;

@interface CNCache : NSObject

@property (class, readonly, copy) id<CNScheduler> atomicCacheScheduler;
@property (class, readonly, copy) id<CNScheduler> nonatomicCacheScheduler;

@property (readonly, copy, nonatomic) NSArray *boundingStrategies;
@property (readonly, nonatomic) id<CNScheduler> resourceScheduler;
@property (readonly, nonatomic) NSMutableDictionary *storage;
@property (readonly, nonatomic) NSMutableArray *didEvictHandlers;
@property (copy, nonatomic) NSArray *evictedKeysAndValues;
@property (readonly) unsigned long long overestimatedCount;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allObjects;

+ (id)cache;
+ (id)boundingStrategyWithCapacity:(unsigned long long)a0;
+ (id)atomicCache;
+ (id)boundingStrategyWithTTL:(double)a0;
+ (id)boundingStrategyWithTTL:(double)a0 renewalOptions:(unsigned long long)a1 timeProvider:(id)a2;

- (id)init;
- (void)removeAllObjects;
- (void)resourceLock_setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)resourceLock_willAccessKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)resourceLock_validateKeys:(id)a0;
- (void)resourceLock_validateAllKeys;
- (id)description;
- (void)addDidEvictHandler:(id /* block */)a0;
- (id)resultWithResourceLock:(id /* block */)a0;
- (id)objectForKey:(id)a0 onCacheMiss:(id /* block */)a1;
- (void).cxx_destruct;
- (void)resourceLock_willSetObject:(id)a0 forKey:(id)a1;
- (void)resourceLock_validateKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)callDidEvictHandlersIfNecessary;
- (void)performWithResourceLock:(id /* block */)a0;
- (id)initWithResourceScheduler:(id)a0;
- (id)objectForKey:(id)a0;
- (void)resourceLock_evictObjectsForKeys:(id)a0;
- (id)initWithBoundingStrategies:(id)a0 resourceScheduler:(id)a1;

@end
