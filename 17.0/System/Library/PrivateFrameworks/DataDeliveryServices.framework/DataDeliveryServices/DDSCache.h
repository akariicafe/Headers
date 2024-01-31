@class NSObject, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue, DDSCacheDelegate;

@interface DDSCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cache;
@property (readonly, nonatomic) NSMutableOrderedSet *order;
@property (readonly, nonatomic) unsigned long long maxCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<DDSCacheDelegate> delegate;

- (void)clearCache;
- (id)initWithMaxCount:(unsigned long long)a0;
- (void)removeEntriesWithPrefixKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)cacheObject:(id)a0 forKey:(id)a1;

@end
