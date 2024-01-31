@class NSString, GEOResourceManifestManager, GEOMapDataSubscription, GEOMapDataSubscriptionTileDownloader, NSObject, NSProgress, GEOPowerAssertion, GEOTileDB, NSMutableArray;
@protocol OS_os_log, GEOMapDataSubscriptionDataDownloader, OS_dispatch_queue, GEOMapDataSubscriptionDownloaderDelegate;

@interface GEOMapDataSubscriptionDownloader : NSObject <GEOMapDataSubscriptionOfflineDownloaderDelegate, GEOMapDataSubscriptionDataDownloaderDelegate, NSProgressReporting> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSProgress *_progress;
    GEOPowerAssertion *_powerAssertion;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    GEOMapDataSubscriptionTileDownloader *_tileDownloader;
    id<GEOMapDataSubscriptionDataDownloader> _currentDownloader;
    NSMutableArray *_remainingDownloaders;
    long long _updateType;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
    BOOL _paused;
    BOOL _canceled;
}

@property (readonly, nonatomic) GEOMapDataSubscription *subscription;
@property (readonly, weak, nonatomic) id<GEOMapDataSubscriptionDownloaderDelegate> delegate;
@property (readonly, nonatomic) unsigned long long numberOfTilesConsidered;
@property (readonly, nonatomic) unsigned long long numberOfTilesAttempted;
@property (readonly, nonatomic) unsigned long long successfulTiles;
@property (readonly, nonatomic) unsigned long long failedTiles;
@property (readonly, nonatomic) unsigned long long bytesDownloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (void)_finishWithError:(id)a0;
- (void)downloader:(id)a0 didFinishWithError:(id)a1;
- (id)initWithSubscription:(id)a0 diskCache:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 reason:(unsigned char)a4 requestOptions:(unsigned long long)a5 manifestManager:(id)a6 log:(id)a7 logPrefix:(id)a8 tileRequesterCreationBlock:(id /* block */)a9 tileDownloader:(id)a10 offlineDownloader:(id)a11 updateType:(long long)a12;
- (id)initWithSubscription:(id)a0 diskCache:(id)a1 delegate:(id)a2 delegateQueue:(id)a3 reason:(unsigned char)a4 requestOptions:(unsigned long long)a5 manifestManager:(id)a6 log:(id)a7 logPrefix:(id)a8 tileRequesterCreationBlock:(id /* block */)a9 tileDownloader:(id)a10 offlineDownloader:(id)a11 updateType:(long long)a12 dataTypeMask:(unsigned long long)a13;
- (void)offlineDownloader:(id)a0 willUseDataVersions:(id)a1 completionHandler:(id /* block */)a2;

@end
