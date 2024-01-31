@interface HDSPSleepWidgetUpcomingState : HDSPSleepWidgetStateMachineState

- (long long)widgetState;
- (id)stateName;
- (BOOL)schedulesExpiration;

@end
