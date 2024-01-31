@class NSString, PETDistributionEventTracker;

@interface SBSwitcherToAppTransitionMetric : NSObject <SBFAnalyticsBackendEventHandling> {
    PETDistributionEventTracker *_tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)handleEvent:(unsigned long long)a0 withContext:(id)a1;
- (void).cxx_destruct;

@end
