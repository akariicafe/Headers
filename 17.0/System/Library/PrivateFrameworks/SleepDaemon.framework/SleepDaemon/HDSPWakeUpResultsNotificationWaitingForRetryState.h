@interface HDSPWakeUpResultsNotificationWaitingForRetryState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didExit;
- (void)didEnter;
- (id)expirationDate;
- (id)stateName;
- (void)retryAttemptEventDue;

@end
