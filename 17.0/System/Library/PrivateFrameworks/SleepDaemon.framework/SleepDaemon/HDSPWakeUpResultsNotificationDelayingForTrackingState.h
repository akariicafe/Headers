@interface HDSPWakeUpResultsNotificationDelayingForTrackingState : HDSPWakeUpResultsNotificationStateMachineState

- (void)stateDidExpire;
- (id)expirationDate;
- (id)stateName;
- (BOOL)schedulesExpiration;

@end
