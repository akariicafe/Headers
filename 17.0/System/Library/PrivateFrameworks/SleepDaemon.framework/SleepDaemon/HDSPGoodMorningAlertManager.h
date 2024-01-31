@class HKSPObserverSet, NSString, HDSPGoodMorningAlertStateMachine, NSDate, HKSPSleepScheduleModel, HDSPEnvironment;
@protocol HKSPMutexProvider, NAScheduler, HDSPSleepEventDelegate;

@interface HDSPGoodMorningAlertManager : NSObject <HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineDelegate, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver, HDSPSleepActionObserver>

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) HDSPGoodMorningAlertStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *goodMorningAlertObservers;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL goodMorningAlertEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL isOnCharger;
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
- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticDescription;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)updateState;
- (void)environmentDidBecomeReady:(id)a0;
- (void)goodMorningWasDismissed;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)unscheduleStateExpiration;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;

@end
