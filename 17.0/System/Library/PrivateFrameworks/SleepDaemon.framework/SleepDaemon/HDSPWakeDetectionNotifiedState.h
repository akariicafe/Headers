@interface HDSPWakeDetectionNotifiedState : HDSPWakeDetectionStateMachineState

- (void)stateDidExpire;
- (void)didEnter;
- (void)updateState;
- (id)expirationDate;
- (id)stateName;

@end
