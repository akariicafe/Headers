@interface HDSPTimeAsleepTrackerSleepTrackingState : HDSPTimeAsleepTrackerStateMachineState

+ (unsigned long long)defaultEndReason;
+ (unsigned long long)defaultStartReason;

- (void)didExit;
- (void)didEnter;
- (BOOL)isSleepTrackingState;
- (void)sleepSessionEndRequestedInternally;

@end
