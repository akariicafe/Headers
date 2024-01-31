@class GEOComposedRoute;

@interface _MNLocationSimulationState_SearchingForParkingBeforeArrival : _MNLocationSimulationState_FollowingRoute {
    GEOComposedRoute *_routeToParkingDestination;
}

- (id)init;
- (void).cxx_destruct;
- (long long)type;
- (void)_findParkingLocation:(id /* block */)a0;
- (void)_findRouteToParkingDestination;
- (void)_findRouteToParkingLocation:(id)a0 finishedHandler:(id /* block */)a1;
- (void)_handleReachedParkingLocation;
- (id)_routeToFollow;
- (double)_scoreForRoad:(id)a0 coordinate:(struct { double x0; double x1; })a1;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)onEnterState;
- (void)updateWithRouteInfo:(id)a0;

@end
