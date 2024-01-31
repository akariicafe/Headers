@interface HDSPChargingReminderNotifiedState : HDSPChargingReminderStateMachineState

- (void)stateDidExpire;
- (void)didEnter;
- (void)updateState;
- (id)expirationDate;
- (id)stateName;

@end
