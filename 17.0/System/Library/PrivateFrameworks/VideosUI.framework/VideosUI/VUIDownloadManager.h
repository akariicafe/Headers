@class NSArray, NSPointerArray, NSString, NSMutableArray;

@interface VUIDownloadManager : NSObject <TVPDownloadDelegate, TVPDownloadSessionDelegate>

@property (retain, nonatomic) NSMutableArray *mutableDownloads;
@property (retain, nonatomic) NSMutableArray *failedDownloadsNeedingDialog;
@property (nonatomic) BOOL dialogBeingPresented;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (nonatomic) BOOL performingAddDownloadsBatch;
@property (readonly, nonatomic) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_activeAccountDidChange:(id)a0;
- (id)_alertControllerForFailedDownloads:(id)a0 outIncludeGoToSettingsButton:(BOOL *)a1;
- (BOOL)_anyDownloadsFailedDueToInvalidUserToken:(id)a0;
- (void)_appDidStartRunning:(id)a0;
- (void)_configureDownloadFromUserPrefs:(id)a0 allowCellular:(BOOL)a1 quality:(long long)a2 preferEnhancedDownload:(BOOL)a3;
- (id)_createMediaItemForVideoManagedObject:(id)a0 isForStartingDownload:(BOOL)a1 downloadQuality:(long long)a2;
- (void)_isPlaybackUIBeingShownDidChange:(id)a0;
- (void)_loadImageForImageInfoManagedObject:(id)a0 imageType:(unsigned long long)a1 download:(id)a2 useForStorageSettings:(BOOL)a3;
- (void)_loadImageForSeriesManagedObject:(id)a0 imageType:(unsigned long long)a1 download:(id)a2 useForStorageSettings:(BOOL)a3;
- (void)_loadImageForVideoManagedObject:(id)a0 imageType:(unsigned long long)a1 download:(id)a2 useForStorageSettings:(BOOL)a3;
- (void)_notifyDelegatesThatDownloadsDidChange;
- (void)_preflightDownloadForPresentingViewController:(id)a0 contentAllowsCellularDownload:(BOOL)a1 completion:(id /* block */)a2;
- (void)_showDownloadErrorDialogIfAppropriate;
- (void)_showDownloadErrorDialogIfAppropriateAllowingSignInPrompt:(BOOL)a0;
- (void)addDownloadForVideoManagedObject:(id)a0 allowCellular:(BOOL)a1 quality:(long long)a2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a3 preferEnhancedDownload:(BOOL)a4;
- (void)addDownloadOrRenewKeysForMediaItem:(id)a0 allowCellular:(BOOL)a1 quality:(long long)a2 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a3;
- (void)cancelAndRemoveDownloadForMediaItem:(id)a0;
- (void)cancelDownloadForAdamID:(id)a0;
- (void)download:(id)a0 didChangeStateTo:(long long)a1;
- (void)download:(id)a0 didDetermineMaximumResolution:(long long)a1 maximumVideoRange:(long long)a2;
- (void)download:(id)a0 didReceiveTaskIdentifier:(id)a1;
- (void)download:(id)a0 processFinishedDownloadWithCompletion:(id /* block */)a1;
- (void)download:(id)a0 willDownloadToURL:(id)a1;
- (void)downloadSession:(id)a0 didAddRestoredDownloads:(id)a1;
- (id)existingDownloadForAdamID:(id)a0;
- (void)fetchNewKeysForDownloadedVideoManagedObject:(id)a0;
- (void)initializeDownloadManager;
- (void)performBatchAddDownloadsWithBlock:(id /* block */)a0;
- (void)preflightDownloadForContentRating:(id)a0 presentingViewController:(id)a1 contentAllowsCellularDownload:(BOOL)a2 completion:(id /* block */)a3;
- (void)preflightDownloadForLibraryMediaEntity:(id)a0 presentingViewController:(id)a1 contentAllowsCellularDownload:(BOOL)a2 completion:(id /* block */)a3;
- (void)preflightDownloadForTVPMediaItem:(id)a0 presentingViewController:(id)a1 contentAllowsCellularDownload:(BOOL)a2 completion:(id /* block */)a3;
- (void)preflightDownloadForVideosPlayable:(id)a0 presentingViewController:(id)a1 contentAllowsCellularDownload:(BOOL)a2 completion:(id /* block */)a3;

@end
