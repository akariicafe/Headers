@class NSHashTable, NSString, NSDate, HDSPSleepEventList, HKSPLimitingScheduler, HDSPEnvironment, HKSPSleepEvent, HKSPObserverSet;
@protocol HKSPMutexProvider, HDSPEventScheduler;

@interface HDSPSleepEventScheduler : NSObject <HDSPSleepScheduleModelObserver, HDSPTimeChangeObserver, HDSPSleepEventDelegate, HDSPEventScheduleDelegate, HDSPDiagnosticsProvider, HDSPEnvironmentAware>

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) HDSPSleepEventList *sleepEvents;
@property (readonly, nonatomic) HKSPObserverSet *eventHandlers;
@property (readonly, nonatomic) NSHashTable *eventProviders;
@property (readonly, nonatomic) NSHashTable *pendingEventProviders;
@property (readonly, nonatomic) id<HDSPEventScheduler> scheduler;
@property (readonly, nonatomic) HKSPLimitingScheduler *limitingScheduler;
@property (retain, nonatomic) HKSPSleepEvent *lastStandardSleepEvent;
@property (retain, nonatomic) NSDate *lastEventTriggerDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)removeEventHandler:(id)a0;
- (void)significantTimeChangeDetected:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticDescription;
- (BOOL)_lock_shouldScheduleEvents;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sleepScheduleModelManager:(id)a0 didUpdateSleepScheduleModel:(id)a1;
- (id)_allSleepEvents;
- (void)eventProviderHasUpcomingEvents:(id)a0;
- (id)initWithEnvironment:(id)a0 schedulerProvider:(id /* block */)a1 limitingScheduler:(id)a2;
- (void)removeEventProvider:(id)a0;
- (void)_schedulePendingEvents;
- (void)_enqueueHandleOverdueEventsTask;
- (void)_loadLastStandardSleepEvent;
- (void)scheduledEventIsDue;
- (void)eventProviderCancelledEvents:(id)a0;
- (void).cxx_destruct;
- (void)addEventProvider:(id)a0;
- (void)rescheduleEvents;
- (void)_lock_updateLastStandardSleepEvent:(id)a0;
- (void)_lock_rescheduleEvents;
- (BOOL)_shouldNotifyHandler:(id)a0 forEvent:(id)a1;
- (id)diagnosticInfo;
- (void)_enqueueSchedulePendingEventsTask;
- (void)_withLock:(id /* block */)a0;
- (void)_handleOverdueEvents;
- (void)addEventHandler:(id)a0;

@end
