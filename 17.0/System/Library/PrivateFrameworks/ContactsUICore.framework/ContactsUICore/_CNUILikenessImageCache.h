@class CNQueue, CNUnfairLock, CNCache, NSObject;
@protocol OS_dispatch_source;

@interface _CNUILikenessImageCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (retain, nonatomic) CNCache *cache;
@property (retain, nonatomic) CNQueue *evictionQueue;
@property (retain, nonatomic) CNUnfairLock *lock;

- (void).cxx_destruct;
- (void)emptyCache:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0 hasContactStore:(BOOL)a1;
- (void)invalidateCacheEntriesContainingIdentifiers:(id)a0;
- (void)refreshCacheKey:(id)a0;

@end
