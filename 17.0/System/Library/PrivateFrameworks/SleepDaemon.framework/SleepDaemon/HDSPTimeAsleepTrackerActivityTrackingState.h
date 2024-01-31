@interface HDSPTimeAsleepTrackerActivityTrackingState : HDSPTimeAsleepTrackerAutoTrackingState

- (void)didExit;
- (void)didEnter;
- (id)stateName;
- (void)activityDetectedOnDate:(id)a0;
- (BOOL)inExpectedAutoTrackingWindow;
- (BOOL)isActivityTrackingState;

@end
