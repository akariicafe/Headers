@interface HDSPChargingReminderWaitingState : HDSPChargingReminderStateMachineState

- (void)stateDidExpire;
- (id)expirationDate;
- (id)stateName;
- (BOOL)schedulesExpiration;

@end
