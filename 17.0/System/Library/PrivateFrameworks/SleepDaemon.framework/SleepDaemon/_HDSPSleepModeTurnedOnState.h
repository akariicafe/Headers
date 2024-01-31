@interface _HDSPSleepModeTurnedOnState : _HDSPSleepModeOnState

- (long long)sleepMode;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)updateState;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToDisabled;

@end
