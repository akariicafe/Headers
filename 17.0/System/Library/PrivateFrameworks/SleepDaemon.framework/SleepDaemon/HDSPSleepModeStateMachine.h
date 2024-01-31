@class HDSPSleepModeAutomatedOnState, HDSPSleepModeManualOnState, NSString, HDSPSleepModeAutomatedOffState, HDSPSleepModeOffState, HDSPSleepModeWindDownState, NSDate, HKSPSleepScheduleModel, HDSPSleepModeBedtimeState, HDSPSleepModeManualOffState;
@protocol NAScheduler, HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider;

@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepModeStateMachineEventHandler>

@property (readonly, weak, nonatomic) id<HDSPSleepModeStateMachineDelegate> delegate;
@property (readonly, weak, nonatomic) id<HDSPSleepModeStateMachineInfoProvider> infoProvider;
@property (readonly, nonatomic) HDSPSleepModeOffState *offState;
@property (readonly, nonatomic) HDSPSleepModeWindDownState *windDownState;
@property (readonly, nonatomic) HDSPSleepModeManualOffState *manualOffState;
@property (readonly, nonatomic) HDSPSleepModeBedtimeState *bedtimeState;
@property (readonly, nonatomic) HDSPSleepModeManualOnState *manualOnState;
@property (readonly, nonatomic) HDSPSleepModeAutomatedOnState *automatedOnState;
@property (readonly, nonatomic) HDSPSleepModeAutomatedOffState *automatedOffState;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;

- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (BOOL)shouldGoIntoSleepModeDuringState:(unsigned long long)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 persistence:(id)a1 delegate:(id)a2 infoProvider:(id)a3 currentDateProvider:(id /* block */)a4;
- (void)sleepModeTurnedOffForUnknownReason;
- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (unsigned long long)loggingCategory;
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)a0 fromState:(unsigned long long)a1;
- (void)sleepScheduleStateChangedToDisabled;
- (void).cxx_destruct;
- (void)userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)sleepModeTurnedOnForUnknownReason;
- (void)automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)automationTurnedOnSleepModeWithReason:(unsigned long long)a0;

@end
