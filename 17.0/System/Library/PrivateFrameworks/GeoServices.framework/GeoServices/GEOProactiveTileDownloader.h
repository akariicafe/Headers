@class geo_isolater, NSString, GEOResourceManifestManager, GEORequestCounter, NSDictionary, GEOXPCActivity, NSObject, NSMutableArray, GEOTileDB, GEOPowerAssertion, NSMapTable;
@protocol GEOOpportunisticDataSource, GEOProactiveTileDownloaderDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface GEOProactiveTileDownloader : NSObject <GEOOpportunisticDataSourceDelegate> {
    NSString *_uniqueIdentifier;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    id<GEOProactiveTileDownloaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    GEOTileDB *_diskCache;
    GEOResourceManifestManager *_manifestManager;
    GEORequestCounter *_requestCounter;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _didStart;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _didFinish;
    NSDictionary *_testDownloaders;
    NSMutableArray *_remainingPolicies;
    unsigned long long _currentPolicy;
    id<GEOOpportunisticDataSource> _currentDownloader;
    BOOL _policyEnabled[3];
    GEOPowerAssertion *_powerAssertion;
    GEOXPCActivity *_activity;
    NSMapTable *_tileRequesterClasses;
    NSObject<OS_dispatch_source> *_deferCheckinTimer;
    NSDictionary *_testPolicyEnabledOverrides;
    geo_isolater *_activityIsolation;
}

@property (class, readonly, nonatomic) unsigned long long maximumDownloadBatchSize;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canUseXPCActivity;
+ (BOOL)shouldDownloadTileType:(int)a0;

- (void)_start;
- (id)init;
- (void)start;
- (void)_finish;
- (void).cxx_destruct;
- (void)cancel;
- (void)_registerXPCActivity;
- (void)_clearPowerAssertion;
- (void)_clearXPCDeferralTimer;
- (void)_pauseIfNecessary;
- (void)_registerXPCDeferralTimer;
- (void)_startNextDownloader;
- (void)_takePowerAssertionIfNecessary;
- (void)_xpcActivityFired;
- (void)dataSourceDidFinish:(id)a0;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 diskCache:(id)a2 tileRequesterClasses:(id)a3;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1 diskCache:(id)a2 tileRequesterClasses:(id)a3 manifestManager:(id)a4 requestCounter:(id)a5 downloaders:(id)a6 policyEnabledOverrides:(id)a7;

@end
