@class HDSPSleepLockScreenStateMachine, NSString, HDSPEnvironment, NSDictionary, HKSPSleepScheduleModel, NSDate;
@protocol HKSPMutexProvider, NAScheduler, HDSPSleepEventDelegate, HDSPSleepLockScreenAssertionManager;

@interface HDSPSleepLockScreenManager : NSObject <HDSPSleepLockScreenStateMachineInfoProvider, HDSPSleepLockScreenStateMachineDelegate, HDSPSleepLockScreenAssertionManagerDelegate, HKSPSensitiveUIObserver, HDSPTimeChangeObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPDiagnosticsProvider, HDSPSleepModeObserver, HDSPSleepScheduleModelObserver, HDSPGoodMorningAlertObserver, HDSPEnvironmentAware> {
    long long _state;
    long long _overrideState;
    NSDictionary *_overrideUserInfo;
}

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) HDSPSleepLockScreenStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPSleepLockScreenAssertionManager> assertionManager;
@property (nonatomic) long long currentLockScreenState;
@property (copy, nonatomic) id /* block */ didUpdateAlertAssertion;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) long long sleepMode;
@property (readonly, nonatomic) BOOL inUnscheduledSleepMode;
@property (readonly, nonatomic) BOOL isLockScreenActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)_currentState;
- (id)eventIdentifiers;
- (void)dismissAlertForGoodMorning;
- (void)scheduleStateExpiration;
- (void)presentAlertForGoodMorning;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)timeZoneChangeDetected:(id)a0;
- (void)sensitiveUIStateChanged;
- (void)significantTimeChangeDetected:(id)a0;
- (void)_lock_updateLockScreenAssertion;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticDescription;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)environmentDidBecomeReady:(id)a0;
- (void)unscheduleStateExpiration;
- (BOOL)_lock_shouldShowLockScreenForState:(long long)a0;
- (BOOL)_lock_overridingLockScreenState;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepSettings:(id)a1;
- (void)lockScreenDidConnect;
- (id)initWithEnvironment:(id)a0 assertionManager:(id)a1;
- (void).cxx_destruct;
- (void)sleepLockScreenStateDidChange:(long long)a0 previousState:(long long)a1;
- (long long)_lock_resolvedLockScreenState;
- (id)diagnosticInfo;
- (void)overrideLockScreenState:(long long)a0 userInfo:(id)a1;
- (void)_withLock:(id /* block */)a0;

@end
