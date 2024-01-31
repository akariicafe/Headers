@class NSError, NSString, NSArray, GEOResourceManifestManager, GEOMapDataSubscription, GEOMapDataSubscriptionOfflineDataKeySelector, NSObject, NSProgress, GEOTileDB, NSMutableArray;
@protocol OS_dispatch_group, OS_os_log, GEOMapDataSubscriptionOfflineDownloaderDelegate, OS_dispatch_queue;

@interface GEOMapDataSubscriptionOfflineDownloader : NSObject <GEOOfflineDataRequesterDelegate, GEOMapDataSubscriptionDataDownloader> {
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    NSArray *_keySelectors;
    GEOMapDataSubscriptionOfflineDataKeySelector *_offlineKeySelector;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _prepared;
    NSObject<OS_dispatch_group> *_preparationGroup;
    NSError *_preparationError;
    NSProgress *_progress;
    long long _progressMode;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
    BOOL _paused;
    BOOL _canceled;
    BOOL _calculatingBatches;
    NSMutableArray *_remainingCurrentBatchRequests;
    NSMutableArray *_inProgressRequesters;
    unsigned long long _currentKeySelectorIndex;
    unsigned long long _requestOptions;
    unsigned long long _numberOfParallelRequests;
}

@property (class, readonly, nonatomic) NSString *loggingDescription;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEOMapDataSubscription *subscription;
@property (readonly, weak, nonatomic) id<GEOMapDataSubscriptionOfflineDownloaderDelegate> delegate;
@property (readonly) NSProgress *progress;

- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (void)offlineRequester:(id)a0 didFinishWithData:(id)a1 withETag:(id)a2 containingDataKeys:(id)a3;
- (id)initWithSubscription:(id)a0 diskCache:(id)a1 manifestManager:(id)a2 requestOptions:(unsigned long long)a3 keySelectors:(id)a4 delegate:(id)a5 delegateQueue:(id)a6 log:(id)a7 logPrefix:(id)a8;
- (void)offlineRequester:(id)a0 didFailWithError:(id)a1;

@end
