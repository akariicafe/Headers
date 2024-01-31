@interface HDSPWakeUpResultsNotificationNotifiedState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didEnter;
- (id)expirationDate;
- (void)didPostResultsNotification;
- (id)stateName;

@end
