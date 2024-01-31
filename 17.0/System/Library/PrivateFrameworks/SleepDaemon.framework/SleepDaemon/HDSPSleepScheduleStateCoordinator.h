@class NSDate, NSString, HKSPObserverSet, HDSPEnvironment, HDSPSleepScheduleStateCoordinatorStateMachine, HKSPSleepScheduleModel, HKSPSleepScheduleOccurrence;
@protocol HKSPMutexProvider, NAScheduler;

@interface HDSPSleepScheduleStateCoordinator : NSObject <HDSPSleepScheduleStateCoordinatorStateMachineDelegate, HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider, HDSPSource, HDSPEnvironmentAware, HDSPSleepEventHandler, HDSPSleepScheduleModelObserver, HDSPDiagnosticsProvider, HDSPSleepActionObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) HDSPSleepScheduleStateCoordinatorStateMachine *stateMachine;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (id)eventIdentifiers;
- (void)timeZoneChangeDetected:(id)a0;
- (void)wakeNotificationWasConfirmed;
- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticDescription;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 context:(id)a2;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (id)currentState;
- (unsigned long long)currentSleepScheduleState;
- (void).cxx_destruct;
- (BOOL)_updateEventRecordHelper:(id)a0 sleepScheduleState:(unsigned long long)a1 context:(id)a2;
- (void)wakeUpAlarmWasDismissedFromSource:(unsigned long long)a0;
- (void)_updateSleepScheduleState;
- (void)snoozeFireDateShouldBeReset;
- (void)_updateEventRecordForSleepScheduleState:(unsigned long long)a0 context:(id)a1 notifyBlock:(id /* block */)a2;
- (void)addObserver:(id)a0;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;

@end
