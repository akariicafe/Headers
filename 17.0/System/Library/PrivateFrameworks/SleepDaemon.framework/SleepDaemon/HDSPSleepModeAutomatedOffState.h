@interface HDSPSleepModeAutomatedOffState : _HDSPSleepModeTurnedOffState

- (void)_automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (unsigned long long)defaultChangeReason;
- (void)sleepModeTurnedOnForUnknownReason;
- (id)stateName;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;

@end
