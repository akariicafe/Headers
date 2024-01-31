@class NSMutableDictionary, NSMapTable, NSOperationQueue, GKResourceCache;

@interface GKResourceLoader : NSObject {
    long long _requestCountMap[3];
}

@property (readonly, nonatomic) NSMutableDictionary *pendingOperations;
@property (readonly, nonatomic) NSMapTable *requestsByCacheKey;
@property (readonly, nonatomic) GKResourceCache *cachedResources;
@property (readonly, nonatomic) NSOperationQueue *accessQueue;
@property (readonly, nonatomic) NSOperationQueue *notificationQueue;
@property (readonly, nonatomic) NSOperationQueue *requestQueue;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isInBackground;

- (id)init;
- (void)addResource:(id)a0 forCacheKey:(id)a1;
- (void)dealloc;
- (void)postDidLoadAllForReason:(long long)a0;
- (void)reprioritizeOperations;
- (BOOL)isIdleForReason:(long long)a0;
- (id)cachedResourcesForCacheKey:(id)a0;
- (BOOL)setReason:(long long)a0 forRequestWithKey:(id)a1;
- (void)postDidBeginLoadingIfIdle;
- (void)enterBackground;
- (long long)currentQualityOfService;
- (void)finishLoadForRequest:(id)a0 withResource:(id)a1 error:(id)a2;
- (void)cancelRequestForCacheKey:(id)a0;
- (id)requestKeyForCacheKey:(id)a0;
- (id)description;
- (void)removeAllCachedResources;
- (void).cxx_destruct;
- (id)initWithParentResourceLoader:(id)a0;
- (void)enterForeground;
- (id)initWithRequestQueue:(id)a0 accessQueue:(id)a1 notificationQueue:(id)a2 cacheLimit:(long long)a3;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;
- (void)postDidIdleIfIdle;
- (void)_commonInit;
- (void)cancelAllRequests;
- (void)removeResourcesForCacheKey:(id)a0;
- (void)updateLoadReason:(long long)a0 forOperation:(id)a1;

@end
