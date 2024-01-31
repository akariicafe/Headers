@class NSString, ATStoreDownloadService, NSMutableSet, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue, ATAssetLinkDelegate;

@interface ATStoreMediaAssetLink : NSObject <ATStoreDownloadObserver, ICEnvironmentMonitorObserver, ATAssetLink> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_resumeQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableSet *_enqueuedDownloadAssets;
    NSMutableSet *_enqueuedRestoreAssets;
    NSMutableSet *_cancelledAssets;
    NSMutableSet *_resumableAssets;
    NSMutableOrderedSet *_downloadsPendingEnqueue;
    ATStoreDownloadService *_downloadService;
    BOOL _resumeAssetDownloadsActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (weak, nonatomic) id<ATAssetLinkDelegate> delegate;

- (void)close;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)ATStoreDownloadService:(id)a0 didFinishAsset:(id)a1 withError:(id)a2 cancelPendingAssetsInBatch:(BOOL)a3;
- (void)ATStoreDownloadService:(id)a0 didChangeStateForAsset:(id)a1 oldState:(long long)a2 newState:(long long)a3;
- (void)prioritizeAsset:(id)a0;
- (id)init;
- (unsigned long long)maximumBatchSize;
- (void)ATStoreDownloadService:(id)a0 didUpdateProgressForAsset:(id)a1 progress:(float)a2;
- (BOOL)open;
- (long long)_ATAssetStateForStoreDownloadState:(long long)a0;
- (BOOL)linkIsReady;
- (unsigned long long)priority;
- (void)_setupActivityToResumeDownloads;
- (BOOL)_canEnqueueAssetUnderCurrentEnvironmentConditions:(id)a0 didUpdatePauseReason:(BOOL *)a1;
- (void)_finishAsset:(id)a0 error:(id)a1 cancelPendingAssetsInBatch:(BOOL)a2;
- (void)ATStoreDownloadService:(id)a0 didEnqueueAsset:(id)a1;
- (void).cxx_destruct;
- (BOOL)canEnqueueAsset:(id)a0;
- (void)cancelAssets:(id)a0;
- (void)ATStoreDownloadService:(id)a0 didResumeAsset:(id)a1;
- (id)enqueueAssets:(id)a0 force:(BOOL)a1;

@end
