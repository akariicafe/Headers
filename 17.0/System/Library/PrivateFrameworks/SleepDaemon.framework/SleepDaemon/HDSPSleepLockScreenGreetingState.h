@interface HDSPSleepLockScreenGreetingState : HDSPSleepLockScreenStateMachineState

- (void)dismissAlertForGoodMorning;
- (long long)sleepLockScreenState;
- (void)updateState;
- (id)stateName;

@end
