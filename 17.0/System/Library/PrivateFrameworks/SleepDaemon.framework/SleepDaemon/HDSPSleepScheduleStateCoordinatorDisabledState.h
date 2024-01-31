@interface HDSPSleepScheduleStateCoordinatorDisabledState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (unsigned long long)scheduleState;
- (void)updateStateForcibly:(BOOL)a0;
- (id)stateName;

@end
