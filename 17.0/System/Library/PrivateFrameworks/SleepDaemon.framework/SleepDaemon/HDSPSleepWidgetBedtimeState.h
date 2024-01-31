@interface HDSPSleepWidgetBedtimeState : HDSPSleepWidgetStateMachineState

- (void)stateDidExpire;
- (double)expirationDuration;
- (long long)widgetState;
- (id)stateName;
- (BOOL)schedulesExpiration;

@end
