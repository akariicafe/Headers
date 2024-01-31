@class NSString, HDSPWakeDetectionStateMachine;

@interface HDSPWakeDetectionStateMachineState : HKSPPersistentStateMachineState <HDSPWakeDetectionStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPWakeDetectionStateMachine *stateMachine;
@property (readonly, nonatomic) BOOL isDetectingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateState;
- (void)earlyWakeUpWasNotifiedRemotely;
- (void)wakeupEventDetected:(unsigned long long)a0 date:(id)a1;
- (BOOL)isWakeDetectionDisabled;
- (void)wakeDetectionEventDue;

@end
