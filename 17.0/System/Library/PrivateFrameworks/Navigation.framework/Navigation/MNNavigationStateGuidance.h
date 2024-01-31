@class MNNavigationSessionManager, MNStartNavigationDetails;

@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager *_navigationSessionManager;
    MNStartNavigationDetails *_startDetails;
}

+ (id)guidanceStateForStartDetails:(id)a0 stateManager:(id)a1 navigationSessionManager:(id)a2;

- (void)changeOfflineState:(unsigned long long)a0;
- (void)setSimulationSpeedOverride:(double)a0;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)a0;
- (void)recordPedestrianTracePath:(id)a0;
- (void)forceReroute;
- (void)rerouteWithWaypoints:(id)a0;
- (void)resumeOriginalDestination;
- (void)removeWaypointAtIndex:(unsigned long long)a0;
- (void)setDisplayedStepIndex:(unsigned long long)a0;
- (void)advanceToNextLeg;
- (void)vibrateForPrompt:(unsigned long long)a0 withReply:(id /* block */)a1;
- (void)switchToRoute:(id)a0;
- (void)stopNavigationWithReason:(unsigned long long)a0;
- (void)insertWaypoint:(id)a0;
- (void)setTraceIsPlaying:(BOOL)a0;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)a0;
- (void)setSimulationSpeedMultiplier:(double)a0;
- (void)pauseRealtimeUpdatesForSubscriber:(id)a0;
- (void)setTracePlaybackSpeed:(double)a0;
- (void)updateDestination:(id)a0;
- (void)setJunctionViewImageWidth:(double)a0 height:(double)a1;
- (void)enableNavigationCapability:(unsigned long long)a0;
- (void)changeTransportType:(int)a0 route:(id)a1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)a0;
- (void)setTracePosition:(double)a0;
- (void)setSimulationPosition:(double)a0;
- (void)resumeRealtimeUpdatesForSubscriber:(id)a0;
- (void)stopCurrentGuidancePrompt;
- (void)enterState;
- (void)setRideIndex:(unsigned long long)a0 forSegmentIndex:(unsigned long long)a1;
- (void)setIsConnectedToCarplay:(BOOL)a0;
- (void)disableNavigationCapability:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)acceptReroute:(BOOL)a0 forTrafficIncidentAlert:(id)a1;
- (unsigned long long)desiredLocationProviderType;
- (id)clParameters;
- (id)currentDestination;
- (id)initWithStateManager:(id)a0 navigationSessionManager:(id)a1 startDetails:(id)a2;
- (void)leaveState;
- (void)postEnterState;
- (void)preEnterState;
- (BOOL)requiresHighMemoryThreshold;
- (BOOL)shouldClearStoredRoutes;
- (id)simulationLocationProvider;
- (id)traceManager;

@end
