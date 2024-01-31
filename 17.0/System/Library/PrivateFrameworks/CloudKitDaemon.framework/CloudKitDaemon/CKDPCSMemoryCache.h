@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSMemoryCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property double oldestCacheEntry;
@property unsigned long long memoryCacheRequestCount;
@property unsigned long long memoryCacheHitCount;
@property unsigned long long memoryCacheHighwaterCount;
@property unsigned long long memoryCacheDeleteCount;
@property unsigned long long memoryCacheUpdateCount;
@property unsigned long long memoryCacheEvictCount;
@property (nonatomic) unsigned long long maxEntries;
@property (nonatomic) double minAge;

+ (void)stopEvictionTimer;
+ (void)initialize;
+ (void)startEvictionTimer;
+ (void)setupMemoryNotifications;
+ (void)registerEvictionTimer;
+ (void)runMemoryCacheEvictionInAllCaches;

- (id)CKStatusReportArray;
- (id)init;
- (void)clearCache;
- (void)getPCSDataFromCacheForID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)setPCSData:(id)a0 forItemID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;
- (BOOL)hasStatusToReport;
- (unsigned long long)_cacheCount;
- (void).cxx_destruct;
- (void)_lockedEvictEntriesFromCache;
- (void)runCacheEviction;

@end
