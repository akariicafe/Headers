@interface HDSPWakeUpResultsNotificationQueryingState : HDSPWakeUpResultsNotificationStateMachineState {
    BOOL _shouldRetryImmediatelyOnFailure;
}

- (void)didExit;
- (void)queryDidComplete;
- (void)didEnter;
- (void)protectedHealthDataDidBecomeAvailable;
- (void)queryDidFailWithError:(id)a0;
- (id)expirationDate;
- (void)_transitionToNotifiedState;
- (void)_transitionToRetryState;
- (void)_executeQuery;
- (void)_retryQueryIfNeededOrTransitionToNeedsProtectedDataState;
- (id)stateName;
- (void)_transitionToWaitingForWakeUpState;
- (id)initWithCoder:(id)a0;
- (BOOL)schedulesExpiration;

@end
