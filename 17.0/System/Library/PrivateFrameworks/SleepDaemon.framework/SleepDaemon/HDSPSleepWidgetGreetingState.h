@interface HDSPSleepWidgetGreetingState : HDSPSleepWidgetStateMachineState

- (void)stateDidExpire;
- (double)expirationDuration;
- (long long)widgetState;
- (BOOL)reloadsWidgetOnTimeChange;
- (id)stateName;
- (BOOL)reloadsWidgetOnModelChange;
- (BOOL)schedulesExpiration;

@end
