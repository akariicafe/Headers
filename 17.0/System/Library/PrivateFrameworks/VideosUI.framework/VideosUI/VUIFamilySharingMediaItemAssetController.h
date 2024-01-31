@class NSTimer, NSString, SSDownload, VUIContentRating, VUIMediaEntityAssetControllerState, VUIFamilySharingMediaItem, NSObject, SSDownloadManager;
@protocol OS_dispatch_queue;

@interface VUIFamilySharingMediaItemAssetController : NSObject <SSPurchaseManagerDelegate, SSDownloadManagerObserver, VUIMediaEntityAssetController>

@property (retain, nonatomic) VUIFamilySharingMediaItem *mediaItemInternal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal;
@property (retain, nonatomic) SSDownloadManager *ssDownloadManager;
@property (retain, nonatomic) SSDownload *downloadInternal;
@property (nonatomic) BOOL observingDownload;
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

- (void)resumeDownload;
- (id)init;
- (void)pauseDownload;
- (void)downloadManager:(id)a0 downloadStatesDidChange:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithFamilySharingMediaItem:(id)a0;
- (void)_cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (void)_updateDownloadStateAndNotifyListeners;
- (void)_updateObservedDownload;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithVideosPlayable:(id)a0;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 preferEnhancedDownload:(BOOL)a3 completion:(id /* block */)a4;

@end
