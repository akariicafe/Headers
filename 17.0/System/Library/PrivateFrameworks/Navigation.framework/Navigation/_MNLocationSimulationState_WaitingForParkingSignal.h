@interface _MNLocationSimulationState_WaitingForParkingSignal : _MNLocationSimulationState

- (long long)type;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;
- (void)updateWithRouteInfo:(id)a0;

@end
