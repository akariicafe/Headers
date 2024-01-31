@class MPMediaItemCollection, NSArray, VUIContentRating, NSString, NSObject, VUIMediaEntityAssetControllerState;
@protocol OS_dispatch_queue;

@interface VUIMPMediaItemCollectionAssetController : NSObject <VUIMediaEntityAssetController>

@property (copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSArray *assetControllers;
@property (nonatomic) unsigned long long fullyDownloadedAssetBytes;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) BOOL contentAllowsCellularDownload;
@property (readonly, nonatomic) VUIContentRating *contentRating;
@property (readonly, nonatomic) NSString *brandID;
@property (readonly, nonatomic) NSString *brandName;
@property (readonly, nonatomic) BOOL allowsManualDownloadRenewal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_downloadingAssetControllersWithAssetControllers:(id)a0;
+ (id)_stateFromDownloadingAssetControllers:(id)a0 fullyDownloadedAssetBytes:(unsigned long long)a1;

- (void)resumeDownload;
- (id)init;
- (void)pauseDownload;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_assetControllerStateDidChange:(id)a0;
- (BOOL)_allAssetsDownloaded;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)a0;
- (void)_enqueueCompletionQueueBlock:(id /* block */)a0;
- (void)_notifyDelegateStateDidChange:(id)a0;
- (void)_onProcessingQueue_cancelAndRemoveDownload;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_setState:(id)a0 andNotifyDelegate:(BOOL)a1;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)_onProcessingQueue_updateStateAndNotifyListeners:(BOOL)a0;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMediaItemCollection:(id)a0 serialProcessingDispatchQueue:(id)a1;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 preferEnhancedDownload:(BOOL)a3 completion:(id /* block */)a4;

@end
