@interface HDSPSleepScheduleStateCoordinatorWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (unsigned long long)scheduleState;
- (void)windDownReached;
- (id)expirationDate;
- (void)bedtimeReached;
- (id)stateName;

@end
