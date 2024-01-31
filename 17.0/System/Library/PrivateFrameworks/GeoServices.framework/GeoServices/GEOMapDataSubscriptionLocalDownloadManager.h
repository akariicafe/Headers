@class GEOOfflineDataConfiguration, NSMutableDictionary, GEOMapDataSubscriptionDownloader, GEOTileDB, GEOOfflineDataSizeEstimationServiceRequester, NSObject, GEOMapDataSubscriptionUpdateSession, GEOMapDataSubscriptionDownloadGroup, NSMutableArray, NSString, GEOResourceManifestManager, geo_isolater, GEOXPCActivity;
@protocol OS_dispatch_queue, GEOMapDataSubscriptionDownloadManagerDelegate;

@interface GEOMapDataSubscriptionLocalDownloadManager : NSObject <GEOOfflineDataConfigurationObserver, GEOMapDataSubscriptionDownloaderDelegate, GEOMapDataSubscriptionDownloadGroupDelegate, GEOPListStateCapturing, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOMapDataSubscriptionDownloadManager> {
    NSObject<OS_dispatch_queue> *_workQueue;
    GEOResourceManifestManager *_manifestManager;
    GEOOfflineDataConfiguration *_dataConfiguration;
    GEOXPCActivity *_offlineUpdateActivity;
    GEOXPCActivity *_offlineInexpensiveDownloadActivity;
    GEOMapDataSubscriptionDownloadGroup *_offlineInexpensiveDownloadGroup;
    GEOXPCActivity *_offlineRetryFailedActivity;
    GEOMapDataSubscriptionDownloadGroup *_offlineRetryFailedDownloadGroup;
    GEOOfflineDataSizeEstimationServiceRequester *_offlineDataSizeEstimationRequester;
    GEOTileDB *_tileDB;
    GEOMapDataSubscriptionUpdateSession *_currentUpdateSession;
    NSMutableArray *_pendingSubscriptionsToLoad;
    GEOMapDataSubscriptionDownloader *_currentDownloader;
    geo_isolater *_isolation;
    unsigned long long _stateCaptureHandle;
    NSMutableDictionary *_subscriptionStates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOMapDataSubscriptionDownloadManagerDelegate> delegate;

+ (Class)_xpcActivityClass;

- (void)dealloc;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_createDownloaderForSubscription:(id)a0 mode:(unsigned long long)a1;
- (void)cancelDownloadForSubscriptionIdentifiers:(id)a0;
- (id)determineEstimatedSizeForSubscriptionWithRegion:(id)a0 dataTypes:(unsigned long long)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)didAddSubscription:(id)a0;
- (void)didAddSubscription:(id)a0 completionHandler:(id /* block */)a1;
- (void)didRemoveSubscriptionWithIdentifier:(id)a0;
- (void)externallyManagedDownloaderDidFinish:(id)a0 withError:(id)a1;
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchStateForSubscriptionWithIdentifier:(id)a0 callbackQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)forceUpdateForUserInitiatedSubscriptionsForDataType:(unsigned long long)a0 mode:(unsigned long long)a1;
- (id)initWithTileDB:(id)a0 dataConfiguration:(id)a1;
- (void)offlineDataConfiguration:(id)a0 didChangeUpdateAvailability:(BOOL)a1;
- (void)registerExternallyManagedDownloader:(id)a0;
- (void)runAutomaticOfflineDataXPCActivity;
- (void)runRetryOfflineDownloadXPCActivity:(BOOL)a0;
- (void)startDownloadForSubscriptionIdentifiers:(id)a0 mode:(unsigned long long)a1;
- (void)subscriptionDownloadGroupDidDefer:(id)a0;
- (void)subscriptionDownloader:(id)a0 didFinishWithError:(id)a1;
- (void)subscriptionDownloader:(id)a0 willUseOfflineDataVersions:(id)a1 completionHandler:(id /* block */)a2;

@end
