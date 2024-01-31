@class NSString, GEOObserverHashTable;
@protocol GEOMapDataSubscriptionPersistence, GEOMapDataSubscriptionDownloadManager;

@interface GEOMapDataSubscriptionManager : NSObject <GEOMapDataSubscriptionDownloadManagerDelegate> {
    id<GEOMapDataSubscriptionPersistence> _persistence;
    id<GEOMapDataSubscriptionDownloadManager> _downloadManager;
    GEOObserverHashTable *_stateObservers;
}

@property (class, readonly, nonatomic) GEOMapDataSubscriptionManager *sharedManager;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setSharedManagerUseLocalPersistence:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_addStateObserver:(id)a0;
- (void)_removeStateObserver:(id)a0;
- (void)_addSubscriptionWithIdentifier:(id)a0 auditToken:(id)a1 dataTypes:(unsigned long long)a2 policy:(long long)a3 region:(id)a4 displayName:(id)a5 expirationDate:(id)a6 callbackQueue:(id)a7 completionHandler:(id /* block */)a8;
- (void)_calculateTotalSizeOfOfflineSubscriptionsWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_externallyManagedDownloaderDidFinish:(id)a0 withError:(id)a1;
- (void)_fetchFullyDownloadedSubscriptionsOfType:(unsigned long long)a0 includeOutOfDate:(BOOL)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (void)_fetchSubscriptionsForSyncToWatchWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_registerExternallyManagedDownloader:(id)a0;
- (void)_runAutomaticOfflineDataXPCActivity;
- (void)_runRetryOfflineDownloadXPCActivity:(BOOL)a0;
- (void)addSubscriptionWithIdentifier:(id)a0 dataTypes:(unsigned long long)a1 policy:(long long)a2 region:(id)a3 displayName:(id)a4 expirationDate:(id)a5 callbackQueue:(id)a6 completionHandler:(id /* block */)a7;
- (void)addSubscriptionWithIdentifier:(id)a0 dataTypes:(unsigned long long)a1 policy:(long long)a2 region:(id)a3 expirationDate:(id)a4 callbackQueue:(id)a5 completionHandler:(id /* block */)a6;
- (void)cancelDownloadForSubscriptionIdentifier:(id)a0;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)a0;
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)a0 dataTypes:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)downloadManager:(id)a0 didUpdateState:(id)a1 forIdentifier:(id)a2;
- (void)fetchAllExpiredSubscriptionsWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchAllSubscriptionsWithCallbackQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStateForSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchSubscriptionsWithIdentifiers:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)a0 mode:(unsigned long long)a1;
- (id)initWithPersistence:(id)a0 downloadManager:(id)a1;
- (void)removeSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)startDownloadForSubscriptionIdentifier:(id)a0 mode:(unsigned long long)a1;
- (void)startDownloadForSubscriptionIdentifiers:(id)a0 mode:(unsigned long long)a1;

@end
