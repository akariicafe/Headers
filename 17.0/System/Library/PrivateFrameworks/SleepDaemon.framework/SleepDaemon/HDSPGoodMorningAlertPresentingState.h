@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState

- (void)stateDidExpire;
- (void)didExit;
- (void)didEnter;
- (double)expirationDuration;
- (void)updateState;
- (void)sleepScheduleStateChangedToBedtime;
- (id)stateName;
- (BOOL)schedulesExpiration;

@end
