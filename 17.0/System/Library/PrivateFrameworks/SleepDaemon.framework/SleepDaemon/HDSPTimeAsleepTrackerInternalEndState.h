@interface HDSPTimeAsleepTrackerInternalEndState : HDSPTimeAsleepTrackerStateMachineState

- (double)expirationDuration;
- (id)stateName;
- (void)sleepSessionFinished;

@end
