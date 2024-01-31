@interface HDSPSleepScheduleStateCoordinatorWindDownState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (unsigned long long)scheduleState;
- (id)expirationDate;
- (void)bedtimeReached;
- (id)stateName;

@end
