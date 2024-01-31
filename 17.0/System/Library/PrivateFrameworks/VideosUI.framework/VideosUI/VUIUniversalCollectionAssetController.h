@class NSArray, MPMediaItemCollection, VUIContentRating, NSString, NSObject, VUIMediaEntityAssetControllerState;
@protocol OS_dispatch_queue;

@interface VUIUniversalCollectionAssetController : NSObject <VUIMediaEntityAssetController>

@property (retain, nonatomic) MPMediaItemCollection *mediaItemCollection;
@property (retain, nonatomic) NSArray *assetControllers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (retain, nonatomic) VUIMediaEntityAssetControllerState *stateInternal;
@property (readonly, nonatomic) BOOL supportsStartingDownload;
@property (readonly, nonatomic) BOOL supportsRedownloadingContent;
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
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

- (void)resumeDownload;
- (void)pauseDownload;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_assetControllerDidChange:(id)a0;
- (void)_updateDownloadStateAndNotifyListeners;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithMediaItemCollection:(id)a0;
- (void)startDownloadAllowingCellular:(BOOL)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a2 preferEnhancedDownload:(BOOL)a3 completion:(id /* block */)a4;

@end
