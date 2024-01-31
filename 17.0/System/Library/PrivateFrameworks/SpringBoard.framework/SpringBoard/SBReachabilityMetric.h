@class PETDistributionEventTracker;

@interface SBReachabilityMetric : SBAnalyticsStateMachineEventHandler {
    double _activateTimestamp;
    PETDistributionEventTracker *_tracker;
    unsigned long long _activateLocation;
    unsigned long long _deactivationReason;
}

- (id)init;
- (void).cxx_destruct;

@end
