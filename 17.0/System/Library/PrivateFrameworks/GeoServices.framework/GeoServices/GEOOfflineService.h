@class NSString, GEOXPCConnection, NSDictionary, geo_isolater, NSObject, NSMapTable, GEOMapDataSubscriptionManager;
@protocol GEOOfflineServiceViewportReporter, OS_dispatch_source, OS_dispatch_queue, GEOOfflineServiceDelegate;

@interface GEOOfflineService : NSObject <GEOPListStateCapturing> {
    unsigned long long _stateCaptureHandle;
    id /* block */ _stateUpdateBlock;
    int _daemonLaunchNotifyToken;
    int _subscriptionsChangedNotifyToken;
    id _offlineAvailabilityObserver;
    unsigned long long _savedState;
    unsigned long long _state;
    GEOXPCConnection *_connection;
    GEOMapDataSubscriptionManager *_subscriptionManager;
    NSDictionary *_subscriptionInfos;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_updateCoalescingTimer;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    NSObject<OS_dispatch_source> *_connectivityCheckTimer;
    geo_isolater *_applicationStateIsolater;
    id<GEOOfflineServiceDelegate> _delegate;
    unsigned long long _delegateInformedState;
    id<GEOOfflineServiceViewportReporter> _latestMapView;
    NSMapTable *_registeredMapViews;
    unsigned long long _suggestedState;
}

@property (class, readonly, nonatomic) GEOOfflineService *shared;
@property (class, readonly, nonatomic) GEOOfflineService *sharedNoCreate;

@property (weak, nonatomic) id<GEOOfflineServiceDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL isUsingOffline;
@property (readonly, nonatomic) unsigned long long offlineRegionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)activeStateForCohortId:(id)a0;

- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)delegate:(id)a0 prefersState:(unsigned long long)a1;
- (void)delegatePrefersState:(unsigned long long)a0;
- (void)mapView:(id)a0 viewPortUpdated:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1;
- (void)mapView:(id)a0 viewPortUpdated:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1 showingGrid:(BOOL)a2;
- (void)registerMapView:(id)a0 withPriority:(double)a1;
- (void)setStateAuto;
- (void)setStateForcedOffline;
- (void)startServiceIfEnabled;
- (void)unregisterMapView:(id)a0;

@end
