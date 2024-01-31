@interface HDSPTimeAsleepTrackerWaitingState : HDSPTimeAsleepTrackerStateMachineState

- (void)stateDidExpire;
- (id)expirationDate;
- (id)stateName;
- (BOOL)schedulesExpiration;
- (void)bedtimeOccurred;
- (void)startWakeDetectionOccurred;
- (void)userEngagedSleepMode;

@end
