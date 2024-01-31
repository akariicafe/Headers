@class NSString, HDProfile, NSMapTable, NSDate, NSObject, HDXPCAlarm;
@protocol OS_dispatch_queue;

@interface HDRestorableAlarmScheduler : NSObject <HDDiagnosticObject, HDDatabaseProtectedDataObserver, HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    int _significantTimeChangeNotificationToken;
    NSMapTable *_clients;
    BOOL _hasInitializedSystemScheduler;
    BOOL _maintenanceOperationQueued;
    BOOL _needsMaintenanceNotifyAndSchedule;
    BOOL _needsLockStateUpdates;
    BOOL _isDeviceOnWrist;
}

@property (copy, nonatomic) NSDate *_unitTest_currentDate;
@property (readonly, nonatomic) BOOL isRegisteredForOnWristUpdates;
@property (readonly, nonatomic) BOOL isRegisteredForLockStateUpdates;
@property (readonly, nonatomic) HDXPCAlarm *systemScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileDidBecomeReady:(id)a0;
- (void)removeAlarm:(id)a0;
- (void)addAlarm:(id)a0;
- (BOOL)scheduleEvents:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)checkForDueEventsImmediatelyWithCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (id)scheduledEventsForClientIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (BOOL)removeAllEventsWithClientIdentifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)replaceAllScheduledEventsWithClientIdentifier:(id)a0 newEvents:(id)a1 error:(id *)a2;

@end
