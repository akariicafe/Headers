@interface HDSPSleepWidgetWaitingState : HDSPSleepWidgetStateMachineState

- (void)stateDidExpire;
- (id)expirationDate;
- (long long)widgetState;
- (id)stateName;
- (BOOL)schedulesExpiration;

@end
