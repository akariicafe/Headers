@class AVAssetDownloadURLSession, NSMutableDictionary, NSString;
@protocol TVPDownloadSessionDelegate;

@interface TVPDownloadSession : NSObject <AVAssetDownloadDelegatePrivate>

@property (retain, nonatomic) NSMutableDictionary *taskIDsToDownloads;
@property (retain, nonatomic) AVAssetDownloadURLSession *downloadSession;
@property (weak, nonatomic) id<TVPDownloadSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void).cxx_destruct;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)a0;
- (id)downloadForMediaItem:(id)a0;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 totalTimeRangesLoaded:(id)a3 timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 willDownloadVariants:(id)a2;
- (id)assetDownloadTaskWithConfiguration:(id)a0;
- (void)initializeWithDownloadingMediaItems:(id)a0;
- (void)registerDownloadTask:(id)a0 forDownload:(id)a1;
- (void)unregisterDownloadTaskForDownload:(id)a0;

@end
