@class NSString, HDSPEnvironment, NSDate, HKSPSleepScheduleModel, HDSPChargingReminderStateMachine;
@protocol HKSPMutexProvider, NAScheduler, HDSPActivityScheduler, HDSPSleepEventDelegate;

@interface HDSPChargingReminderManager : NSObject <HDSPChargingReminderStateMachineDelegate, HDSPChargingReminderStateMachineInfoProvider, HDSPDiagnosticsProvider, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepEventHandler, HDSPTimeChangeObserver, HDSPDevicePowerObserver, HDSPSleepEventProvider, HDSPSleepScheduleStateObserver>

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) HDSPChargingReminderStateMachine *stateMachine;
@property (readonly, nonatomic) id<HDSPActivityScheduler> monitoringScheduler;
@property (readonly, nonatomic) id<NAScheduler> callbackScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) unsigned long long sleepScheduleState;
@property (readonly, nonatomic) BOOL isCharging;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

+ (id)monitorCriteria;
+ (id)monitorActivity;

- (id)_currentState;
- (id)eventIdentifiers;
- (void)scheduleStateExpiration;
- (id)upcomingEventsDueAfterDate:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sleepEventIsDue:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticDescription;
- (void)sleepScheduleStateDidChange:(unsigned long long)a0 previousState:(unsigned long long)a1 reason:(unsigned long long)a2;
- (void)updateState;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (void)unscheduleStateExpiration;
- (void).cxx_destruct;
- (id)diagnosticInfo;
- (void)_withLock:(id /* block */)a0;
- (id)devicePowerMonitor;
- (void)checkBatteryLevel;
- (void)deviceChangedChargingState:(BOOL)a0;
- (id)initWithEnvironment:(id)a0 monitoringScheduler:(id)a1;
- (id)monitoringWindowAfterDate:(id)a0;
- (void)postChargingReminderNotification;
- (void)startBatteryMonitoring;
- (void)stopBatteryMonitoring;

@end
