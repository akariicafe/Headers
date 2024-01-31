@class NSString, MNObserverHashTable, MNNavigationSession, GEOApplicationAuditToken, MNArrivalInfo, MNNavigationSessionState, MNLocation;

@interface MNLocationTracker : NSObject <MNNavigationSessionObserver, MNNavigationSessionStateListener> {
    BOOL _localizeRoadNames;
}

@property (readonly, nonatomic) MNObserverHashTable *safeDelegate;
@property (readonly, weak, nonatomic) MNNavigationSession *navigationSession;
@property (nonatomic, setter=_setState:) int state;
@property (retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken;
@property (nonatomic, setter=_setTargetLegIndex:) unsigned long long targetLegIndex;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic) MNLocation *lastMatchedLocation;
@property (readonly, nonatomic) MNArrivalInfo *arrivalInfo;
@property (readonly, nonatomic) BOOL isRerouting;
@property (readonly, nonatomic) BOOL hasArrived;
@property (readonly, nonatomic) BOOL hasArrivedAtFinalDestination;
@property (readonly, nonatomic) BOOL hasVisitedFirstStop;
@property (readonly, nonatomic) BOOL shouldProjectAlongRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)changeOfflineState:(unsigned long long)a0;
- (void)advanceToNextLeg;
- (void)changeTransportType:(int)a0 route:(id)a1;
- (void)pause;
- (id)init;
- (void)dealloc;
- (void)_defaultsDidChange;
- (BOOL)paused;
- (void)updateLocation:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)updateDestination:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopTracking;
- (void)reroute:(id)a0 reason:(unsigned long long)a1;
- (void)updateVehicleHeading:(double)a0 timestamp:(id)a1;
- (id)_matchedLocationForLocation:(id)a0;
- (void)_roadFeaturesForFeature:(id)a0 outRoadName:(out id *)a1 outShieldText:(out id *)a2 outShieldType:(out long long *)a3;
- (void)_setIsNavigatingInLowGuidance:(BOOL)a0;
- (void)_updateArrivalInfo:(id)a0;
- (void)_updateMatchedLocation:(id)a0;
- (void)_updateShouldLocalizeRoadNames;
- (void)changeOfflineState:(unsigned long long)a0 waypoints:(id)a1;
- (void)enterRegionWithId:(id)a0;
- (void)exitRegionWithId:(id)a0;
- (void)forceOnRoute:(id)a0 atLocation:(id)a1;
- (void)forceRerouteWithReason:(unsigned long long)a0;
- (id)initWithNavigationSession:(id)a0;
- (void)insertWaypoint:(id)a0 completionHandler:(id /* block */)a1;
- (id)matchedLocationForLocation:(id)a0;
- (void)monitoringDidFailForRegionWithId:(id)a0 withError:(id)a1;
- (void)removeWaypointAtIndex:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)rerouteWithWaypoints:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetForTracePlayerAtLocation:(id)a0;
- (BOOL)shouldAllowPause;
- (void)startTrackingWithInitialLocation:(id)a0 targetLegIndex:(unsigned long long)a1;
- (void)traceForcedActiveTransportTypeChange:(int)a0;
- (void)traceForcedRerouteWithResponse:(id)a0 request:(id)a1;
- (void)traceJumpedInTime;
- (void)tracePaused;
- (void)updateForETAUResponse:(id)a0;
- (void)updateRequestForETAUpdate:(id)a0;
- (void)updateVehicleSpeed:(double)a0 timestamp:(id)a1;

@end
