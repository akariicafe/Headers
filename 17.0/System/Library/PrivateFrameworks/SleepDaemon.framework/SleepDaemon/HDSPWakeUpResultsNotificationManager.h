@class HKSHGoalProgressEngine, NAFuture, NSString, HDSPEnvironment, HDSPWakeUpResultsNotificationStateMachine, NSDate;
@protocol HKSPMutexProvider, NAScheduler, HDSPActivityScheduler, HDSPSleepEventDelegate;

@interface HDSPWakeUpResultsNotificationManager : NSObject <HDSPWakeUpResultsNotificationStateMachineInfoProvider, HDSPWakeUpResultsNotificationStateMachineDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPNotificationObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver>

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) HDSPWakeUpResultsNotificationStateMachine *stateMachine;
@property (readonly, nonatomic) NAFuture *queryResultFuture;
@property (readonly, nonatomic) HKSHGoalProgressEngine *goalProgressEngine;
@property (readonly, nonatomic) id<HDSPActivityScheduler> retryAttemptScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL isWakeUpResultsNotificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

+ (id)retryActivity;
+ (id)retryCriteria;

- (id)_currentState;
- (id)eventIdentifiers;
- (void)scheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (id)_sleepScheduleModel;
- (void)significantTimeChangeDetected:(id)a0;
- (void)stopObservingProtectedHealthDataAvailability;
- (void)executeQuery;
- (void)scheduleRetryAttempt;
- (void)environmentWillBecomeReady:(id)a0;
- (void)unscheduleRetryAttempt;
- (void)postResultsNotification;
- (void)sleepEventIsDue:(id)a0;
- (id)notificationAttemptWindowForWakeUpBeforeDate:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticDescription;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)_updateState;
- (void)unscheduleStateExpiration;
- (void)startObservingProtectedHealthDataAvailability;
- (BOOL)_isDelayingForTracking;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (id)performImmediateQueryForNotification;
- (void).cxx_destruct;
- (void)_lock_startQuery;
- (id)initWithEnvironment:(id)a0 retryAttemptScheduler:(id)a1;
- (double)_trackingDelayDuration;
- (id)diagnosticInfo;
- (BOOL)_isWaitingForWakeUp;
- (void)_withLock:(id /* block */)a0;

@end
