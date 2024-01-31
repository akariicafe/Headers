@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
    NSMutableDictionary *_bagChangeNotificationReceivedForRequestContext;
}

@property (class, readonly, nonatomic) ICURLBagProvider *sharedBagProvider;

@property (nonatomic) BOOL useAMSBag;
@property (nonatomic) BOOL useRawPayload;

- (void)invalidateCache;
- (id)init;
- (id)_amsProcessInfoFromRequestContext:(id)a0;
- (void)dealloc;
- (id)_knownMissingBagValuesDictionary;
- (id)_cacheFilePath;
- (id)_getCacheKeyForRequestContext:(id)a0;
- (void)_handleAMSBagChangedNotification:(id)a0;
- (id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)a0 forProfileName:(id)a1;
- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_loadCache;
- (void).cxx_destruct;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)getBagAndURLMetricsForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_saveCache;
- (id)_legacyCacheFilePath;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;

@end
