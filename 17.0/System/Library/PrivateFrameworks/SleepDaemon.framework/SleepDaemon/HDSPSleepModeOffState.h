@interface HDSPSleepModeOffState : HDSPSleepModeStateMachineState

- (void)sleepModeTurnedOffForUnknownReason;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (id)stateName;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;

@end
