@interface _MNLocationSimulationState_WaitingAtWaypoint : _MNLocationSimulationState {
    double _startTime;
    double _waitDuration;
}

- (long long)type;
- (id)initWithStartTime:(double)a0 waitDuration:(double)a1;
- (id)nextSimulatedLocationWithElapsedTime:(double)a0;

@end
