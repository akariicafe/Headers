@class BSServiceConnection, NSObject, MTTimerStorage, NSString, MTAlarmStorage, MTSessionsManager;
@protocol BSServiceConnectionClient, NAScheduler, OS_dispatch_queue;

@interface MTSessionsCoordinator : NSObject <MTTimerObserver, MTAlarmObserver, ClockAngelClient, MTSource>

@property (readonly, nonatomic) MTTimerStorage *timerStorage;
@property (readonly, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTSessionsManager *sessionsManager;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serializerQueue;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (nonatomic) BOOL systemReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSessions;

- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (id)currentTimer;
- (void)dealloc;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (id)server;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (BOOL)_isSystemReady;
- (void)handleSystemReady;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)nextTimerDidChange:(id)a0;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (void).cxx_destruct;
- (void)repeatTimerWithIdentifier:(id)a0;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void)dismissTimerWithIdentifier:(id)a0;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (id)setupInterface;
- (id)sourceIdentifier;
- (BOOL)hasActiveSession;
- (void)restoreSessions;
- (void)buildConnection;
- (void)_endAlertWithId:(id)a0 activityId:(id)a1;
- (void)didEndAlertWithId:(id)a0 activityId:(id)a1;
- (void)didRestoreAlarmSessions:(id)a0;
- (void)didRestoreTimerSessions:(id)a0;
- (void)dismissAlarmWithId:(id)a0;
- (void)dismissTimerAndEndSessionWithId:(id)a0 completion:(id /* block */)a1;
- (void)endAlertingSession;
- (void)endSessionForTimerId:(id)a0;
- (id)getMTSessionsManager;
- (id)initWithStorage:(id)a0 alarmStorage:(id)a1;
- (void)initializeSessionWithTimer:(id)a0;
- (id)normalizedTimeString:(double)a0 state:(unsigned long long)a1;
- (void)pauseTimerWithId:(id)a0;
- (void)processAlarmUpdate:(id)a0 fromAlarm:(id)a1;
- (void)processTimerStateUpdate:(id)a0 fromTimer:(id)a1;
- (void)processTimerUpdate:(id)a0 fromTimer:(id)a1 changeSet:(id)a2;
- (void)removeSessionForAlarm:(id)a0;
- (void)removeSessionForAlarm:(id)a0 removeFromServer:(BOOL)a1;
- (void)resendAlarmDataEntryWithId:(id)a0;
- (void)resendTimerDataEntryWithId:(id)a0;
- (void)resumeTimerWithId:(id)a0;
- (void)snoozeAlarmWithId:(id)a0;
- (void)source:(id)a0 didUpdateAlarms:(id)a1 previousAlarms:(id)a2;
- (void)source:(id)a0 didUpdateTimers:(id)a1 fromTimers:(id)a2;
- (void)stopSnoozeAlarmWithId:(id)a0;
- (void)stopTimerWithId:(id)a0;
- (id)timerWithIdentifier:(id)a0;
- (void)updateTimerWithId:(id)a0 state:(unsigned long long)a1;

@end
