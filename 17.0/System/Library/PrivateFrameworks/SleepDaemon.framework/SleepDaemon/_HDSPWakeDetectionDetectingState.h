@interface _HDSPWakeDetectionDetectingState : HDSPWakeDetectionStateMachineState

@property (readonly, nonatomic) unsigned long long activeTypes;

- (void)didExit;
- (void)didEnter;
- (void)earlyWakeUpWasNotifiedRemotely;
- (void)wakeupEventDetected:(unsigned long long)a0 date:(id)a1;
- (BOOL)_isActivityDateInDetectionWindow:(id)a0 type:(unsigned long long)a1;
- (BOOL)isDetectingState;

@end
