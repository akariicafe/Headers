@interface _HDSPSleepModeTurnedOffState : HDSPSleepModeOffState

- (void)stateDidExpire;
- (void)updateState;
- (id)expirationDate;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (BOOL)_shouldUpdateSleepModeStateForState:(unsigned long long)a0 changeReason:(unsigned long long)a1 previousState:(unsigned long long)a2;

@end
