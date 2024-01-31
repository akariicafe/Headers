@class NSTimer, NSString, GEODataRequestThrottlerToken, NSDate, MNSoundEffectResourceController, NSMutableDictionary, GEOApplicationAuditToken, GEOTransitRouteUpdater, GEOLatLng, GEOETATrafficUpdateRequest, GEOComposedETARoute;
@protocol MNSessionUpdateManagerDelegate;

@interface MNSessionUpdateManager : NSObject <GEOTransitRouteUpdaterDelegate> {
    GEOTransitRouteUpdater *_transitUpdater;
    NSMutableDictionary *_subscribers;
    NSTimer *_etaTimer;
    double _etaRequestInterval;
    double _initialRequestDelay;
    double _opportunisticRequestTimeWindow;
    NSDate *_dateOfLastUpdate;
    BOOL _lastRequestWasServerDriven;
    BOOL _isPaused;
    GEOETATrafficUpdateRequest *_pendingETARequest;
    GEOComposedETARoute *_pendingETARoute;
    MNSoundEffectResourceController *_sfxController;
}

@property (weak, nonatomic) id<MNSessionUpdateManagerDelegate> delegate;
@property (copy, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (retain, nonatomic) GEOLatLng *tripOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopUpdateRequests;
- (void)transitRouteUpdater:(id)a0 didFailUpdateForRouteIDs:(id)a1 withError:(id)a2;
- (void)transitRouteUpdater:(id)a0 didReceiveResponse:(id)a1;
- (void)transitRouteUpdater:(id)a0 didUpdateTransitRoutes:(id)a1;
- (void)transitRouteUpdater:(id)a0 willSendRequests:(id)a1;
- (void)transitRouteUpdater:(id)a0 willUpdateTransitForRouteIDs:(id)a1;
- (id)_baseETARequest;
- (void)_sendETARequest;
- (void)_cancelPendingETARequest;
- (void)_continueETARequests;
- (void)_handleETAResponse:(id)a0 forRouteInfo:(id)a1 etaRoute:(id)a2;
- (BOOL)_hasAtLeastOneActiveSubscriber;
- (void)_scheduleETATimerWithInterval:(double)a0;
- (void)_sendETARequestWithParameters:(id)a0;
- (void)_terminateETARequests;
- (id)_updateETARequest:(id)a0 withRouteInfo:(id)a1 andUserLocation:(id)a2;
- (void)_updateForETARoute:(id)a0;
- (void)_updateRouteAttributesFor:(id)a0 route:(id)a1 updatedLocation:(id)a2 completion:(id /* block */)a3;
- (id)_updateWaypointsForRequest:(id)a0 routeInfo:(id)a1 userLocation:(id)a2 etaRoute:(id)a3;
- (void)pauseUpdateRequestsForSubscriber:(id)a0;
- (void)requestImmediateUpdate;
- (void)requestUpdateForETAUPosition:(id)a0;
- (void)restartUpdateTimer;
- (void)resumeUpdateRequestsForSubscriber:(id)a0;
- (void)sendFinalETAURequest;
- (void)startUpdateRequestsForRoutes:(id)a0 andNavigationType:(long long)a1;

@end
