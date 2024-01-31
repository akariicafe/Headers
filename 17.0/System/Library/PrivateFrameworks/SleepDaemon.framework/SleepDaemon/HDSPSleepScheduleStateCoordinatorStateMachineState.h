@class HDSPSleepScheduleStateCoordinatorStateMachine, NSString;

@interface HDSPSleepScheduleStateCoordinatorStateMachineState : HKSPPersistentStateMachineState <HDSPSleepScheduleStateCoordinatorStateMachineEventHandler>

@property (readonly, weak, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) unsigned long long scheduleState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stateDidExpire;
- (void)didEnter;
- (void)timeZoneChange;
- (void)updateState;
- (void)wakeUpConfirmed;
- (void)wakeTimeReached;
- (void)windDownReached;
- (void)significantTimeChange;
- (void)updateStateForcibly:(BOOL)a0;
- (void)scheduleModelChanged:(id)a0;
- (void)bedtimeReached;
- (void)significantScheduleChangeOccurred:(unsigned long long)a0;
- (BOOL)isAlarmEnabled;
- (id)_determineNextStateFromTimeline;
- (void)_forceUpdateStateWithChangeReason:(unsigned long long)a0;
- (id)_timelineForDate:(id)a0;
- (BOOL)isSleepScheduleDisabled;

@end
