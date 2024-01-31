@interface HDSPWakeDetectionWaitingState : HDSPWakeDetectionStateMachineState

- (id)expirationDate;
- (id)stateName;
- (BOOL)schedulesExpiration;

@end
