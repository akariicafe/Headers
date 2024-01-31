@class MSVXPCTransaction, NSString, NSMapTable, NSMutableOrderedSet, NSMutableDictionary, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface ATAssetLinkController : NSObject <ATAssetLinkDelegate, ICEnvironmentMonitorObserver> {
    NSMutableOrderedSet *_assetLinks;
    NSMutableOrderedSet *_assetQueue;
    NSMapTable *_assetsToLinks;
    NSMapTable *_assetsToFailedLinks;
    NSMutableDictionary *_activeTrackAssetsByAssetType;
    NSMutableDictionary *_trackAssetsPendingInstallByAssetType;
    NSMutableDictionary *_nonTrackAssetsPendingInstallByAssetType;
    NSMutableDictionary *_progressBlocksForAssetsInFlight;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _cachedThermalLevel;
    BOOL _isNetworkConstrained;
    BOOL _currentNetworkIsCellularType;
    MSVXPCTransaction *_activeDownLoadsKeepAliveTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)environmentMonitorDidChangeThermalLevel:(id)a0;
- (id)allAssets;
- (void)prioritizeAsset:(id)a0;
- (void)assetLink:(id)a0 didCloseWithOutstandingAssets:(id)a1;
- (void)assetLink:(id)a0 didPauseAsseDownload:(id)a1 error:(id)a2;
- (id)init;
- (void)cancelAllAssetsMatchingPredicate:(id)a0 excludeActiveDownloads:(BOOL)a1 withError:(id)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)enqueueAssets:(id)a0;
- (void)assetLink:(id)a0 didOpenWithPendingAssets:(id)a1;
- (id)filteredAssetsToDownloadForAssets:(id)a0;
- (BOOL)_canEnqueueAsset:(id)a0;
- (void)enqueueAssetForStoreDownload:(long long)a0 withCompletion:(id /* block */)a1;
- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void)installCompleteForAssets:(id)a0;
- (void)_addFailedLink:(id)a0 forAsset:(id)a1;
- (unsigned long long)_getMaxThermalPressureThreshold;
- (void)_prioritizeAsset:(id)a0 onLinkClass:(Class)a1;
- (void)addAssetLink:(id)a0;
- (void)setPendingAssets:(id)a0;
- (void)assetLink:(id)a0 didUpdateDownloadPauseReasonForAssets:(id)a1;
- (void)enqueueAssets:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)prioritizeAssetWithStoreForLibraryIdentifier:(long long)a0 withCompletion:(id /* block */)a1;
- (void)_handleEnqueue:(id)a0 onLink:(id)a1 withPriority:(BOOL)a2;
- (BOOL)_canEnqueueAsset:(id)a0 onLink:(id)a1;
- (BOOL)_assetIsEnqueued:(id)a0;
- (void)_assetsDidChange;
- (void)dispatchBlockOnControllerQueue:(id /* block */)a0;
- (void)_cancelAssets:(id)a0 withError:(id)a1 completion:(id /* block */)a2;
- (void)removeAssetLink:(id)a0;
- (void).cxx_destruct;
- (void)assetLink:(id)a0 didTransitionAssetStates:(id)a1;
- (void)cancelAssets:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelAssets:(id)a0 withError:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldReleaseKeepAliveTransaction;
- (void)assetLink:(id)a0 didFinishAsset:(id)a1 error:(id)a2 retryable:(BOOL)a3 cancelPendingAssetsInBatch:(BOOL)a4;
- (id)allAssetLinks;
- (BOOL)assetIsEnqueued:(id)a0;
- (void)_performSelectorOnObservers:(SEL)a0 object:(id)a1 object:(id)a2;
- (void)addObserver:(id)a0;
- (void)assetLink:(id)a0 didUpdateAsset:(id)a1 progress:(double)a2;
- (void)assetLink:(id)a0 didFinishAsset:(id)a1 error:(id)a2 retryable:(BOOL)a3;
- (void)_finishAsset:(id)a0 withError:(id)a1;
- (void)_updateCountsForFinishedTrackAssetTypes:(id)a0;
- (void)assetLinkDidChange:(id)a0;

@end
