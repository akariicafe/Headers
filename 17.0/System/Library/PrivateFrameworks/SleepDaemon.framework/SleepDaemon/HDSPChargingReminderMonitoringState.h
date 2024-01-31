@interface HDSPChargingReminderMonitoringState : HDSPChargingReminderStateMachineState

- (void)didExit;
- (void)didEnter;
- (id)expirationDate;
- (id)stateName;
- (BOOL)schedulesExpiration;
- (void)batteryLevelChanged:(float)a0;

@end
