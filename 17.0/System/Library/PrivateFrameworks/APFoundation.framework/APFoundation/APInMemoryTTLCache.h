@class APUnfairLock, NSHashTable, NSObject, NSCache;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface APInMemoryTTLCache : NSObject <APPurgeableCacheNotifierP>

@property (retain, nonatomic) NSCache *storage;
@property (retain, nonatomic) NSHashTable *weakEntryRefs;
@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushCacheTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue;
@property (readonly, nonatomic) double timeout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setObject:(id)a0;
- (void)_flushCacheStorage;
- (void)_startFlushCacheTimer;
- (void)_stopFlushCacheTimer;
- (BOOL)_updateMostRecentAccessForIdentifier:(id)a0;
- (id)getObjectForIdentifier:(id)a0;
- (id)initWithExpirationInterval:(double)a0 flushQueue:(id)a1;
- (void)recentlyAccessedObject:(id)a0;

@end
