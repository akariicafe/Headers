@interface HDSPSleepWidgetNotOnboardedState : HDSPSleepWidgetStateMachineState

- (void)sleepScheduleModelDidChange:(id)a0;
- (void)sleepModeDidChange:(long long)a0 isUserRequested:(BOOL)a1;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0;
- (long long)widgetState;
- (BOOL)widgetStateHasTimeComponent;
- (BOOL)reloadsWidgetOnTimeChange;
- (id)stateName;
- (BOOL)reloadsWidgetOnModelChange;

@end
