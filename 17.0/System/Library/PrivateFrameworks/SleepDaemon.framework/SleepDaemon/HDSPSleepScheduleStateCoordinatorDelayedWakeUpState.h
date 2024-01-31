@interface HDSPSleepScheduleStateCoordinatorDelayedWakeUpState : HDSPSleepScheduleStateCoordinatorStateMachineState

- (void)didExit;
- (unsigned long long)scheduleState;
- (void)wakeUpConfirmed;
- (void)windDownReached;
- (id)expirationDate;
- (void)updateStateForcibly:(BOOL)a0;
- (void)bedtimeReached;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;
- (id)stateName;

@end
