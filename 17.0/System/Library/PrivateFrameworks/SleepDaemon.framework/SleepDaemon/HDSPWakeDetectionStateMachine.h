@class HDSPWakeDetectionNotifiedState, NSString, HDSPWakeDetectionDisabledState, NSDate, HDSPWakeDetectionActivityDetectingState, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence, HDSPWakeDetectionWaitingState, HDSPWakeDetectionExplicitDetectingState;
@protocol HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineDelegate, NAScheduler;

@interface HDSPWakeDetectionStateMachine : HKSPPersistentStateMachine <HDSPWakeDetectionStateMachineDelegate, HDSPWakeDetectionStateMachineInfoProvider, HDSPWakeDetectionStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPWakeDetectionStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPWakeDetectionStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPWakeDetectionDisabledState *disabledState;
@property (readonly, nonatomic) HDSPWakeDetectionWaitingState *waitingState;
@property (readonly, nonatomic) HDSPWakeDetectionExplicitDetectingState *explicitDetectingState;
@property (readonly, nonatomic) HDSPWakeDetectionActivityDetectingState *activityDetectingState;
@property (readonly, nonatomic) HDSPWakeDetectionNotifiedState *notifiedState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *relevantOccurrence;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL sleepModeIsOff;
@property (readonly, nonatomic) BOOL isWatch;
@property (readonly, nonatomic) unsigned long long activeTypes;
@property (readonly, nonatomic) NSDate *nextWakeUp;
@property (readonly, nonatomic) NSDate *upcomingStartDetection;

- (void)stopWakeDetection;
- (void)postWakeDetectionNotification:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (id)allStates;
- (void)earlyWakeUpWasNotifiedRemotely;
- (unsigned long long)loggingCategory;
- (void)wakeupEventDetected:(unsigned long long)a0 date:(id)a1;
- (void)startWakeDetection:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)detectionWindowForType:(unsigned long long)a0;

@end
