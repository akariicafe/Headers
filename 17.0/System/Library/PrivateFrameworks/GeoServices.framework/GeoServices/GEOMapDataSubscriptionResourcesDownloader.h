@class GEOMapDataSubscription, NSString, NSProgress, GEOResourceManifestManager, NSError, NSObject, NSArray;
@protocol OS_dispatch_group, OS_os_log, GEOMapDataSubscriptionDataDownloaderDelegate, OS_dispatch_queue;

@interface GEOMapDataSubscriptionResourcesDownloader : NSObject <GEOMapDataSubscriptionDataDownloader> {
    GEOResourceManifestManager *_manifestManager;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_os_log> *_log;
    NSString *_logPrefix;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _prepared;
    NSObject<OS_dispatch_group> *_preparationGroup;
    NSError *_preparationError;
    NSProgress *_progress;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
    BOOL _paused;
    BOOL _canceled;
    BOOL _calculatingBatches;
    NSArray *_resourcesToFetch;
}

@property (class, readonly, nonatomic) NSString *loggingDescription;

@property (readonly, nonatomic) GEOMapDataSubscription *subscription;
@property (readonly, weak, nonatomic) id<GEOMapDataSubscriptionDataDownloaderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSubscription:(id)a0 manifestManager:(id)a1 requestOptions:(unsigned long long)a2 delegate:(id)a3 delegateQueue:(id)a4 log:(id)a5 logPrefix:(id)a6;

@end
