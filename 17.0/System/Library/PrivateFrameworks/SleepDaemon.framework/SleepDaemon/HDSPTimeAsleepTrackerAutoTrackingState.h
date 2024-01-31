@interface HDSPTimeAsleepTrackerAutoTrackingState : HDSPTimeAsleepTrackerSleepTrackingState

- (void)updateState;
- (void)scheduleModelChanged:(id)a0;
- (id)stateName;
- (BOOL)inExpectedAutoTrackingWindow;
- (void)sleepModeExitedWithReason:(unsigned long long)a0;
- (void)startWakeDetectionOccurred;
- (void)wakeUpOccurredWithReason:(unsigned long long)a0;

@end
