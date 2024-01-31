@interface HDSPSleepWidgetWindDownState : HDSPSleepWidgetStateMachineState

- (long long)widgetState;
- (BOOL)widgetStateHasTimeComponent;
- (id)stateName;

@end
