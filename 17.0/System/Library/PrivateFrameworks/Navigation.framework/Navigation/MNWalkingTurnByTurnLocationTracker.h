@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {
    int _detectedTransportType;
    struct { double latitude; double longitude; } _detectedTransportTypeOrigin;
}

- (int)transportType;
- (BOOL)_allowSwitchToTransportType:(int)a0 forLocation:(id)a1;
- (int)_detectedMotionForLocation:(id)a0;
- (id)_newMapMatcherForRoute:(id)a0;
- (id)initWithNavigationSession:(id)a0;

@end
