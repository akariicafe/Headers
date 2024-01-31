@interface _MNLocationSimulationState_ProceedingToStartOfLeg : _MNLocationSimulationState

- (long long)type;
- (struct { unsigned int x0; float x1; })_simulationStartRouteCoordinate;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)onEnterState;

@end
