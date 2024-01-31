@class NSString, RadiosPreferences, NSMutableDictionary, NSDictionary, NSObject, geo_isolater, GEODataURLSessionTask;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface GEOOfflineStateManager : NSObject <GEOConfigChangeListenerDelegate, GEOPListStateCapturing, GEOKeyBagProtectedDataDidBecomeAvailableObserver, RadiosPreferencesDelegate, GEODataURLSessionTaskDelegate> {
    geo_isolater *_isolator;
    NSDictionary *_acceptableDurations;
    unsigned long long _stateCaptureHandle;
    struct vector<(anonymous namespace)::Result, std::allocator<(anonymous namespace)::Result>> { struct Result *__begin_; struct Result *__end_; struct __compressed_pair<(anonymous namespace)::Result *, std::allocator<(anonymous namespace)::Result>> { struct Result *__value_; } __end_cap_; } _trackedRequests;
    unsigned int _currentIndex;
    RadiosPreferences *_radiosPrefs;
    NSObject<OS_dispatch_queue> *_radioPrefsQueue;
    struct Result { double timestamp; struct { int type; union { int raw; int tile; int placeRequest; } subtype; } request; unsigned long long status; unsigned long long usedInterfaces; int requestMode; } _lastNetworkState;
    double _updateInterval;
    BOOL _needsStateUpdate;
    double _lastStateUpdate;
    NSObject<OS_dispatch_source> *_updateStateTimer;
    double _lastUpdateWriteTime;
    NSMutableDictionary *_statesByCohortId;
    int _subscriptionsChangedNotifyToken;
    NSObject<OS_dispatch_queue> *_connectivityCheckQueue;
    GEODataURLSessionTask *_connectivityCheckTask;
}

@property (class, readonly, nonatomic) GEOOfflineStateManager *shared;
@property (class, readonly, nonatomic, getter=isOfflineAvailable) BOOL offlineAvailable;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)activeStateForCohortId:(id)a0;
+ (BOOL)isCohortAllowed:(id)a0;

- (void)dataURLSession:(id)a0 didCompleteTask:(id)a1;
- (void)airplaneModeChanged;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)dealloc;
- (id).cxx_construct;
- (void)protectedDataDidBecomeAvailable:(id)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void).cxx_destruct;
- (void)_networkStateChanged;
- (void)_offlineAvailabilityUpdated;
- (void)_receivedHeartbeat:(id)a0;
- (unsigned long long)activeStateForCohortId:(id)a0;
- (void)checkConnectivityForPeer:(id)a0;
- (BOOL)cohortId:(id)a0 shouldAttemptFailoverForRequest:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1;
- (unsigned long long)currentStateForCohortId:(id)a0;
- (unsigned long long)currentSuggestedStateForCohortId:(id)a0;
- (void)reportResponse:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 usedInterfaces:(unsigned long long)a1 requestMode:(int)a2 forCohortId:(id)a3 duration:(double)a4 error:(id)a5;
- (void)reportTileResponse:(const struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned char x3 : 4; union { struct { unsigned short x0 : 10; unsigned short x1 : 10; unsigned short x2 : 12; } x0; unsigned int x1; } x4; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEORoadSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x7; struct _GEOContourLinesKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 4; unsigned char x4 : 8; unsigned long x5 : 50; } x8; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned short x5 : 16; unsigned char x6 : 6; } x9; struct _GEOIdentifiedResourceKey { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned long x4 : 39; } x10; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x11; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x12; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x13; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x14; struct _GEOS2TileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 3; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 37; } x15; struct _GEOLiveTileKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned short x3 : 14; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 4; unsigned long x7 : 36; } x16; } x2; } *)a0 usedInterfaces:(unsigned long long)a1 forCohortId:(id)a2 duration:(double)a3 error:(id)a4;
- (unsigned long long)savedStateForCohortId:(id)a0;
- (void)setSavedState:(unsigned long long)a0 forCohortId:(id)a1;
- (void)setState:(unsigned long long)a0 savedState:(unsigned long long)a1 forCohortId:(id)a2;
- (unsigned long long)subscriptionCount;
- (void)waitForTransitionToActiveState:(id /* block */)a0 forCohortId:(id)a1 timeout:(double)a2 callbackQueue:(id)a3 callback:(id /* block */)a4;

@end
