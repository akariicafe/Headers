@class HKSPThrottler, NSString, HDSPEnvironment, HKSPSleepScheduleModel, NSDate, HDSPSleepWidgetStateMachine;
@protocol HKSPMutexProvider, NAScheduler, HDSPWidgetReloader, HDSPSleepEventDelegate, HDSPWidgetRelevanceDonor;

@interface HDSPSleepWidgetManager : NSObject <HDSPSleepWidgetStateMachineInfoProvider, HDSPSleepWidgetStateMachineDelegate, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPSleepModeObserver, HDSPTimeChangeObserver, HDSPDiagnosticsProvider, HDSPEnvironmentAware> {
    id<HKSPMutexProvider> _mutexProvider;
    HDSPSleepWidgetStateMachine *_stateMachine;
    id<HDSPWidgetReloader> _widgetReloader;
    HKSPThrottler *_reloadThrottler;
    id<HDSPWidgetRelevanceDonor> _relevanceDonor;
    BOOL _isOverridingWidgetState;
    long long _overrideState;
}

@property (readonly, nonatomic) long long currentSleepWidgetState;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL inUnscheduledSleepMode;
@property (readonly, nonatomic) BOOL isOnboarded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)eventIdentifiers;
- (void)scheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)timeZoneChangeDetected:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepWidgetStateDidChange:(long long)a0 previousState:(long long)a1;
- (void)sleepEventIsDue:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticDescription;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)clearWidgetOverrideState;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)updateState;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)unscheduleStateExpiration;
- (id)initWithEnvironment:(id)a0 widgetReloader:(id)a1 reloadThrottler:(id)a2 relevanceDonor:(id)a3;
- (long long)_lock_currentSleepWidgetState;
- (void)sleepWidgetShouldReload;
- (void).cxx_destruct;
- (void)overrideWidgetState:(long long)a0;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;

@end
