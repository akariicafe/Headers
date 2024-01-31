@class VUIVideosPlayable, NSString, TVPDownload, VUIContentRating, VUIMediaEntityAssetControllerState, MPStoreDownload, NSObject, VUIVideoManagedObject, MPMediaItem;
@protocol OS_dispatch_queue;

@interface VUIUniversalAssetController : NSObject <VUIDownloadManagerDelegate, TVPDownloadDelegate, MPStoreDownloadManagerObserver, VUIMediaEntityAssetController>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObject;
@property (retain, nonatomic) MPMediaItem *mpMediaItem;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal;
@property (retain, nonatomic) TVPDownload *download;
@property (retain, nonatomic) MPStoreDownload *storeDownload;
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

- (void)resumeDownload;
- (void)pauseDownload;
- (void)dealloc;
- (void)invalidate;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1 removeDownloads:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (void)_createAndSaveVideoManagedObjectForDownloadInitiation;
- (id)_createAndSaveVideoManagedObjectForMPMediaItem:(id)a0;
- (id)_createAndSaveVideoManagedObjectForPlayable:(id)a0;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)a0;
- (BOOL)_isVideoFullyDownloadedCheckingSidebandLibrary:(BOOL)a0;
- (void)_updateDownloadStateAndNotifyListeners;
- (void)_updateObservedDownload;
- (void)_videoManagedObjectWasCreated:(id)a0;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)download:(id)a0 didChangeStateTo:(long long)a1;
- (void)download:(id)a0 progressDidChange:(double)a1;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMPMediaItem:(id)a0;
- (id)initWithVideoManagedObject:(id)a0;
- (id)initWithVideoManagedObject:(id)a0 mpMediaItem:(id)a1 videosPlayable:(id)a2;
- (id)initWithVideosPlayable:(id)a0;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 preferEnhancedDownload:(BOOL)a3 completion:(id /* block */)a4;

@end
