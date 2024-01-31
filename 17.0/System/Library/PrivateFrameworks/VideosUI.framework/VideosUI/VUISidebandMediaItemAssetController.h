@class VUIVideoManagedObject, NSString, TVPDownload, VUIContentRating, VUIMediaEntityAssetControllerState, NSObject;
@protocol OS_dispatch_queue;

@interface VUISidebandMediaItemAssetController : NSObject <VUIDownloadManagerDelegate, TVPDownloadDelegate, VUIMediaEntityAssetController>

@property (retain, nonatomic) VUIVideoManagedObject *videoManagedObjectInternal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal;
@property (retain, nonatomic) TVPDownload *downloadInternal;
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
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)downloadManagerDownloadsDidChange:(id)a0;
- (void)_updateDownloadStateAndNotifyListeners;
- (void)_updateObservedDownload;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)download:(id)a0 didChangeStateTo:(long long)a1;
- (void)download:(id)a0 progressDidChange:(double)a1;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithVideoManagedObject:(id)a0;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 preferEnhancedDownload:(BOOL)a3 completion:(id /* block */)a4;

@end
