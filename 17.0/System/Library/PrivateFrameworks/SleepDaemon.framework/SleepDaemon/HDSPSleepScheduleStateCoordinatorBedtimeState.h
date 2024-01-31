@interface HDSPSleepScheduleStateCoordinatorBedtimeState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (unsigned long long)scheduleState;
- (void)wakeUpConfirmed;
- (void)wakeTimeReached;
- (id)expirationDate;
- (id)stateName;

@end
