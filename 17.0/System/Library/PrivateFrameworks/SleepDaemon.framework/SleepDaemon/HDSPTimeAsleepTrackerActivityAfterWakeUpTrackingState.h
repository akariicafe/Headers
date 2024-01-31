@interface HDSPTimeAsleepTrackerActivityAfterWakeUpTrackingState : HDSPTimeAsleepTrackerActivityTrackingState

- (void)stateDidExpire;
- (void)didExit;
- (void)didEnter;
- (double)expirationDuration;
- (id)stateName;
- (void)activityDetectedOnDate:(id)a0;
- (void)appLaunchedOnDate:(id)a0;
- (BOOL)inExpectedAutoTrackingWindow;

@end
