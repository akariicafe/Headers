@interface HDSPSleepWidgetBedtimeInProgressState : HDSPSleepWidgetStateMachineState

- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (long long)widgetState;
- (id)stateName;

@end
