@interface _HDSPSleepModeOnState : HDSPSleepModeStateMachineState

- (void)userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;

@end
