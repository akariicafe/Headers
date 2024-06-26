@class GEOActiveTileGroup, NSObject, GEOTileGroupActivationSession, GEOResourceManifestDownloadTask, GEOResourceFiltersManager, NSMutableArray, GEOResourceManifestDownload, NSString, geo_isolater, GEOResourceManifestConfiguration, NSOperationQueue, NSArray, NSError, NSProgress;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface GEOResourceManifestServerLocalProxy : NSObject <GEOResourceFiltersManagerDelegate, GEOPListStateCapturing, GEOKeyBagProtectedDataDidBecomeAvailableObserver, GEOConfigChangeListenerDelegate, GEOTileGroupActivationSessionDelegate, GEOResourceManifestServerProxy> {
    GEOResourceManifestDownloadTask *_manifestDownloadTask;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *_workOperationQueue;
    GEOResourceManifestConfiguration *_configuration;
    BOOL _wantsManifestUpdateOnReachabilityChange;
    NSObject<OS_dispatch_source> *_manifestUpdateTimer;
    BOOL _wantsTileGroupUpdateOnReachabilityChange;
    NSObject<OS_dispatch_source> *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    BOOL _started;
    unsigned long long _manifestRetryCount;
    double _lastManifestRetryTimestamp;
    unsigned long long _tileGroupRetryCount;
    double _lastTileGroupRetryTimestamp;
    NSString *_authToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _authTokenLock;
    NSError *_lastResourceManifestLoadError;
    NSMutableArray *_manifestUpdateCompletionHandlers;
    NSMutableArray *_opportunisticManifestUpdateCompletionHandlers;
    long long _currentManifestUpdateType;
    GEOResourceFiltersManager *_filtersManager;
    NSArray *_tileGroupMigrators;
    unsigned long long _stateCaptureHandle;
    NSProgress *_updateProgress;
    NSProgress *_currentUpdateProgress;
    GEOTileGroupActivationSession *_tileGroupActivationSession;
    BOOL _tileGroupActivationSessionHasFinishedFirstTileGroupChange;
    BOOL _tileGroupActivationShouldFlushTileCache;
    geo_isolater *_activeTileGroupIsolater;
}

@property (retain, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;

- (void)closeConnection;
- (void)openConnection;
- (void)_terminationRequested:(id)a0;
- (id)serverQueue;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (id)authToken;
- (id)_idealTileGroupToUse;
- (BOOL)_writeManifestToDiskWithUpdatedMetadataForURL:(id)a0 eTag:(id)a1 error:(id *)a2;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)a0;
- (void)dealloc;
- (void)filtersManagerDidChangeActiveFilters:(id)a0;
- (void)getResourceManifestWithHandler:(id /* block */)a0;
- (void)deactivateResourceScale:(int)a0;
- (void)_notifyOpportunisticManifestUpdateCompletionHandlers:(id)a0;
- (unsigned int)maximumZoomLevelForStyle:(int)a0 scale:(int)a1 outSize:(int *)a2;
- (void)activateResourceScenario:(int)a0;
- (void)_updateManifest:(id /* block */)a0;
- (void)performOpportunisticResourceLoading;
- (void)_forceChangeActiveTileGroup:(id)a0 flushTileCache:(BOOL)a1;
- (void)_addOpportunisticManifestUpdateCompletionHandler:(id /* block */)a0;
- (void)_addManifestUpdateCompletionHandler:(id /* block */)a0;
- (BOOL)_updateManifestIfNecessary:(id /* block */)a0;
- (void)forceUpdate:(long long)a0 completionHandler:(id /* block */)a1;
- (void)cancelCurrentManifestUpdate;
- (void)setManifestToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createMigrators;
- (BOOL)_writeActiveTileGroupToDisk:(id)a0 error:(id *)a1;
- (void)_startServer;
- (BOOL)_writeManifestToDisk:(id)a0 error:(id *)a1;
- (void)_changeActiveTileGroupIfNeededForManifestURL:(id)a0 oldURL:(id)a1;
- (id)updateProgress;
- (void)_manifestURLDidChange:(id)a0;
- (void)activationSession:(id)a0 didCompleteWithErrors:(id)a1;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (void)_resetCurrentUpdateState;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)_countryProvidersDidChange:(id)a0;
- (void)_notifyManifestUpdateCompletionHandlers:(id)a0;
- (void)_setCurrentUpdateType:(long long)a0 completionBlock:(id /* block */)a1;
- (void)deactivateResourceScenario:(int)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)_manifestURL;
- (void)_updateTimerFired;
- (void)_activeTileGroupOverridesChanged:(id)a0;
- (void).cxx_destruct;
- (void)_tileGroupTimerFired;
- (oneway void)resetActiveTileGroup;
- (void)_cancelManifestUpdate;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)a0;
- (id)configuration;
- (void)activateResourceScale:(int)a0;
- (void)_loadFromDisk;
- (id)serverOperationQueue;
- (void)_notifyImmediateManifestUpdateCompletionHandlers:(id)a0;
- (void)updateIfNecessary:(id /* block */)a0;
- (oneway void)setActiveTileGroupIdentifier:(id)a0;
- (void)activationSession:(id)a0 didChangeActiveTileGroup:(id)a1 completionHandler:(id /* block */)a2;
- (void)_networkDefaultsDidChange:(id)a0;
- (void)_reachabilityChanged:(id)a0;
- (void)_handleManifestUpdateError:(id)a0;
- (void)_cancelMigrationTasks;
- (id)migrationTaskOptions;
- (void)setActiveTileGroupIdentifier:(id)a0 updateType:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_considerChangingActiveTileGroup;

@end
