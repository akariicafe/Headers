@class NSString, HDSPSleepLockScreenStateMachine;

@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState <HDSPSleepLockScreenStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly, nonatomic) long long sleepLockScreenState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;
- (void)didEnter;
- (void)updateState;
- (void)sleepModeDidChange:(long long)a0 reason:(unsigned long long)a1;
- (BOOL)_isSleepLockScreenDisabled;
- (void)_updateStateForSleepMode:(long long)a0 reason:(unsigned long long)a1;

@end
