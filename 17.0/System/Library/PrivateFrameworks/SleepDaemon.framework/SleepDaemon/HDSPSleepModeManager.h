@class NSString, HDSPSleepModeStateMachine, HKSPObserverSet, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol HDSPSleepFocusModeBridge, HKSPMutexProvider, NAScheduler, HDSPSleepProactiveBridge;

@interface HDSPSleepModeManager : NSObject <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPDiagnosticsProvider, HKSPSleepFocusModeBridgeDelegate, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepScheduleStateObserver>

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) HDSPSleepModeStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *sleepModeObservers;
@property (readonly, nonatomic) id<HDSPSleepFocusModeBridge> sleepFocusModeBridge;
@property (readonly, nonatomic) id<HDSPSleepProactiveBridge> sleepProactiveBridge;
@property (nonatomic) long long sleepMode;
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
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (unsigned long long)_sleepModeChangeReasonForBiomeReason:(unsigned long long)a0 source:(long long)a1;

- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)_automationTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (BOOL)deleteFocusModeWithError:(id *)a0;
- (void)_powerLogSleepMode:(long long)a0 sleepScreenEnabled:(BOOL)a1;
- (BOOL)sleepScreenEnabled;
- (id)initWithEnvironment:(id)a0;
- (void)sleepFocusModeBridge:(id)a0 didUpdateSleepFocusConfiguration:(id)a1;
- (id)diagnosticDescription;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)_createFocusModeIfNeeded;
- (BOOL)shouldGoIntoSleepModeDuringState:(unsigned long long)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)updateState;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (BOOL)isInDemoMode;
- (void)_userTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (BOOL)createFocusModeWithError:(id *)a0;
- (id)currentState;
- (BOOL)_isScheduledSleepModeEnabled;
- (id)computeUserVisibleEndDate;
- (void)_sleepModeTurnedOffForUnknownReason;
- (void)scheduledEventIsDue;
- (void)_automationTurnedOnSleepModeWithReason:(unsigned long long)a0;
- (id)initWithEnvironment:(id)a0 sleepFocusModeBridge:(id)a1 sleepProactiveBridge:(id)a2;
- (void)_userTurnedOffSleepModeWithReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)createHomeScreenPageWithCompletion:(id /* block */)a0;
- (void)_handleFocusModeEvent:(id)a0;
- (void)_ensureFocusModeCreatedForSleepMode:(long long)a0 reason:(unsigned long long)a1;
- (void)notifyObserversForSleepModeChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)_sleepModeTurnedOnForUnknownReason;
- (void)addObserver:(id)a0;
- (id)diagnosticInfo;
- (BOOL)_isSleepModeDuringWindDownEnabled;
- (BOOL)inUnscheduledSleepMode;
- (void)setSleepMode:(long long)a0 reason:(unsigned long long)a1;
- (void)_withLock:(id /* block */)a0;
- (BOOL)_shouldHandleBiomeEvent:(id)a0;

@end
