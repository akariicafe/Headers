@interface HDSPWakeUpResultsNotificationNeedsProtectedDataState : HDSPWakeUpResultsNotificationStateMachineState

- (void)didExit;
- (void)didEnter;
- (void)protectedHealthDataDidBecomeAvailable;
- (id)expirationDate;
- (void)_transitionToQueryingState;
- (id)stateName;

@end
