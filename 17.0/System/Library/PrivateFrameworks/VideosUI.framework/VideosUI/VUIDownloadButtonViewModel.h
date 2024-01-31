@class NSString, VUIVideosPlayable, NSArray, NSDate, NSObject, VUIMediaEntity;
@protocol VUIMediaEntityAssetController;

@interface VUIDownloadButtonViewModel : NSObject

@property (nonatomic) unsigned long long downloadState;
@property (retain, nonatomic) NSString *downloadStateStringValue;
@property (nonatomic) double downloadProgress;
@property (nonatomic) BOOL downloadFailedDueToError;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) NSArray *downloadStateToString;
@property (nonatomic) BOOL renewsOfflineKeysAutomatically;
@property (retain, nonatomic) NSDate *downloadExpirationDate;
@property (retain, nonatomic) NSDate *availabilityEndDate;
@property (retain, nonatomic) VUIMediaEntity *mediaEntity;
@property (readonly, nonatomic) NSString *brandID;
@property (readonly, nonatomic) NSString *brandName;
@property (readonly, nonatomic) BOOL allowsManualDownloadRenewal;
@property (readonly, nonatomic) BOOL isExpired;
@property (readonly, nonatomic) BOOL isExpiringSoon;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;
@property (retain, nonatomic) NSString *accessibilityIdentifier;

+ (BOOL)shouldShowExpiredImageWithDownloadState:(unsigned long long)a0 isExpired:(BOOL)a1 isExpiringSoon:(BOOL)a2 hasFailed:(BOOL)a3;
+ (id)viewModelWithAssetController:(id)a0;
+ (id)viewModelWithMPMediaItem:(id)a0;
+ (id)viewModelWithMPMediaItemCollection:(id)a0;
+ (id)viewModelWithVideoManagedObject:(id)a0;
+ (id)viewModelWithVideosPlayable:(id)a0;

- (void)resumeDownload;
- (void)pauseDownload;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_assetControllerStateDidChange:(id)a0;
- (id)_createDownloadStateToStringArrayMap;
- (unsigned long long)_downloadStateFromAssetsControllerStatus:(unsigned long long)a0;
- (void)_getAssetControllerCreatingMediaItem:(BOOL)a0 completion:(id /* block */)a1;
- (void)_updateDownloadStateFromAssetControllerState:(id)a0;
- (void)deleteDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithAssetController:(id)a0;
- (id)initWithMPMediaItem:(id)a0;
- (id)initWithMPMediaItemCollection:(id)a0;
- (id)initWithVideoManagedObject:(id)a0;
- (id)initWithVideosPlayable:(id)a0;
- (void)preflightPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadAllowingCellular:(BOOL)a0 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a1 quality:(long long)a2 preferEnhancedDownload:(BOOL)a3;
- (void)stopDownload;

@end
