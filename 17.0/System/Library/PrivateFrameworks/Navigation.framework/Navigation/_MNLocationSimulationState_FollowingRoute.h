@interface _MNLocationSimulationState_FollowingRoute : _MNLocationSimulationState {
    struct { unsigned int index; float offset; } _startRouteCoordinate;
}

- (long long)type;
- (BOOL)_shouldProceedToWaypointForLeg:(id)a0;
- (BOOL)_isCoordinate:(struct { unsigned int x0; float x1; })a0 atEndOfLeg:(id)a1;
- (struct { unsigned int x0; float x1; })_projectedCoordinateOnRouteFrom:(struct { unsigned int x0; float x1; })a0 overTimeDelta:(double)a1 outSpeed:(out double *)a2;
- (id)_routeToFollow;
- (id)initWithStartRouteCoordinate:(struct { unsigned int x0; float x1; })a0;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)onEnterState;
- (void)updateWithRouteInfo:(id)a0;

@end
