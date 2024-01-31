@interface HDSPSleepWidgetDisabledState : HDSPSleepWidgetStateMachineState

- (long long)widgetState;
- (BOOL)widgetStateHasTimeComponent;
- (BOOL)reloadsWidgetOnTimeChange;
- (id)stateName;
- (BOOL)reloadsWidgetOnModelChange;

@end
