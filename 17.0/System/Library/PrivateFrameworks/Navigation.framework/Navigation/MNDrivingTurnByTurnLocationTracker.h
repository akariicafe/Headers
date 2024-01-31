@class NSMutableArray, NSString, MNTunnelLocationProjector, MNAlternateRoutesUpdater, MNTrafficIncidentAlertUpdater, MNWalkingRouteBackgroundLoader;

@interface MNDrivingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker <MNTrafficIncidentAlertUpdaterDelegate, MNTunnelLocationProjectorDelegate, MNWalkingRouteBackgroundLoaderDelegate> {
    MNTunnelLocationProjector *_tunnelLocationProjector;
    MNAlternateRoutesUpdater *_alternateRoutesUpdater;
    MNTrafficIncidentAlertUpdater *_trafficIncidentAlertUpdater;
    MNWalkingRouteBackgroundLoader *_walkingRouteBackgroundLoader;
    int _detectedTransportType;
    BOOL _exitedVehicle;
    unsigned long long _vehicleExitConfidence;
    struct { double latitude; double longitude; } _vehicleExitCoordinate;
    NSMutableArray *_etauPositions;
    double _lastKnownCourse;
    double _consecutiveValidCourseCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)transportType;
- (void)stopTracking;
- (BOOL)_allowSwitchToTransportType:(int)a0 forLocation:(id)a1;
- (id)_currentVehicleParkingInfoForParkingType:(long long)a0;
- (int)_detectedMotionForLocation:(id)a0;
- (id)_matchedLocationForLocation:(id)a0;
- (id)_newMapMatcherForRoute:(id)a0;
- (id)_overrideLocationForLocation:(id)a0;
- (void)_overrideRerouteDirectionsRequest:(id)a0;
- (void)_updateForAlternateRoutes:(id)a0;
- (void)_updateForArrivalAtLegIndex:(unsigned long long)a0;
- (void)_updateForLocation:(id)a0;
- (void)_updateForReroute:(id)a0 rerouteReason:(unsigned long long)a1 request:(id)a2 response:(id)a3;
- (void)_updateNewTrafficIncidentAlerts:(id)a0;
- (void)arrivalUpdater:(id)a0 didUpdateArrivalInfo:(id)a1;
- (void)arrivalUpdater:(id)a0 didUpdateVehicleParkingType:(long long)a1;
- (void)arrivalUpdaterDidEnterParkingDetectionRegion:(id)a0;
- (void)arrivalUpdaterDidLeaveParkingDetectionRegion:(id)a0;
- (id)initWithNavigationSession:(id)a0;
- (void)setNavigationSessionState:(id)a0;
- (BOOL)shouldProjectAlongRoute;
- (void)startTrackingWithInitialLocation:(id)a0 targetLegIndex:(unsigned long long)a1;
- (void)tracePaused;
- (void)trafficIncidentAlertUpdater:(id)a0 didDismissAlert:(id)a1 withReroute:(BOOL)a2;
- (void)trafficIncidentAlertUpdater:(id)a0 didSwitchToNewRoute:(id)a1 forAlert:(id)a2;
- (void)trafficIncidentAlertUpdater:(id)a0 invalidatedAlert:(id)a1;
- (void)trafficIncidentAlertUpdater:(id)a0 receivedAlert:(id)a1 responseCallback:(id /* block */)a2;
- (void)trafficIncidentAlertUpdater:(id)a0 updatedAlert:(id)a1;
- (void)tunnelLocationProjector:(id)a0 didUpdateLocation:(id)a1;
- (void)updateForETAUResponse:(id)a0;
- (void)updateRequestForETAUpdate:(id)a0;
- (void)walkingRouteBackgroundLoader:(id)a0 didUpdateWalkingRoute:(id)a1;

@end
