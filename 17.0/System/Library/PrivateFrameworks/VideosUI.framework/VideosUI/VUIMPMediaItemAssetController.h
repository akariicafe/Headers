@class VUIMediaEntityAssetControllerState, NSString, MPMediaItem, NSTimer, VUIContentRating, VUIMPMediaItemDownloadController, NSObject;
@protocol OS_dispatch_queue;

@interface VUIMPMediaItemAssetController : NSObject <VUIMPMediaItemDownloadControllerObserver, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController>

@property (retain, nonatomic) VUIMPMediaItemDownloadController *downloadController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, getter=isRequestingPermissionToDownload) BOOL requestingPermissionToDownload;
@property (readonly, nonatomic) MPMediaItem *mediaItem;
@property (retain, nonatomic) NSTimer *waitForDeletionTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;
@property (readonly, nonatomic) VUIContentRating *contentRating;
@property (readonly, nonatomic) NSString *brandID;
@property (readonly, nonatomic) NSString *brandName;
@property (readonly, nonatomic) BOOL allowsManualDownloadRenewal;

+ (void)initialize;
+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)a0;
+ (BOOL)_supportsStartingDownloadWithMediaItem:(id)a0;

- (void)resumeDownload;
- (id)init;
- (void)pauseDownload;
- (void)dealloc;
- (void)invalidate;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void).cxx_destruct;
- (BOOL)_isDownloaded;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)a0;
- (void)_enqueueCompletionQueueBlock:(id /* block */)a0;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)a0;
- (void)_onProcessingQueue_calculateStateAndNotify:(BOOL)a0;
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (id)_onProcessingQueue_downloadController;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_setDownloadController:(id)a0;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 completion:(id /* block */)a2;
- (void)_onProcessingQueue_startMonitoringDownload;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 downloadState:(id)a1 supportsPausing:(BOOL)a2 supportsCancellation:(BOOL)a3 notify:(BOOL)a4;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 notify:(BOOL)a1;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMediaItem:(id)a0 serialProcessingDispatchQueue:(id)a1;
- (void)mediaItemDownloadController:(id)a0 stateDidChange:(id)a1;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 preferEnhancedDownload:(BOOL)a3 completion:(id /* block */)a4;

@end
