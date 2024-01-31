@class NSString, HDSPSleepModeStateMachine;

@interface HDSPSleepModeStateMachineState : HKSPPersistentStateMachineState <HDSPSleepModeStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) unsigned long long defaultChangeReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)didEnter;
- (void)updateState;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToDisabled;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (BOOL)updateStateCommon;
- (void)updateStateFromTimeline;

@end
