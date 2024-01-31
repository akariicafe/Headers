@interface HDSPWakeUpResultsNotificationWaitingForWakeUpState : HDSPWakeUpResultsNotificationStateMachineState

- (void)wakeUpDidOccur;
- (void)_transitionToDelayingForTrackingState;
- (id)stateName;

@end
