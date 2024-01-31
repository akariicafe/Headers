@class _TtC18MobileTimerSupport23MTTimerSessionsProvider, ACActivityCenter, _TtC18MobileTimerSupport23MTAlarmSessionsProvider;

@interface MTSessionsManager : NSObject

@property (retain, nonatomic) _TtC18MobileTimerSupport23MTTimerSessionsProvider *timerProvider;
@property (retain, nonatomic) _TtC18MobileTimerSupport23MTAlarmSessionsProvider *alarmProvider;
@property (retain, nonatomic) ACActivityCenter *activityCenter;

+ (BOOL)supportsSessions;

- (void)createSessionWithAlarm:(id)a0 forAlert:(BOOL)a1 completion:(id /* block */)a2;
- (id)init;
- (void)finishSessionWithAlarmId:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)numberOfAvailableSessions;
- (unsigned long long)numberOfActiveSessions;
- (void)createSessionWithAlarm:(id)a0;
- (void)restoreAlarmSessionsWithCompletion:(id /* block */)a0;
- (void)updateSessionWithAlarm:(id)a0;
- (void)updateSessionWithTimer:(id)a0;
- (void)finishSessionWithTimerId:(id)a0 completion:(id /* block */)a1;
- (long long)sessionStateForTimer:(id)a0;
- (void)localSetup;
- (void)finishSessionWithTimerId:(id)a0;
- (id)activityIdForAlarmId:(id)a0;
- (void)restoreTimerSessionsWithCompletion:(id /* block */)a0;
- (void)finishSessionWithAlarm:(id)a0 completion:(id /* block */)a1;
- (void)createSessionWithTimer:(id)a0;
- (BOOL)hasActiveAlarmSession;
- (void)createSessionWithTimer:(id)a0 completion:(id /* block */)a1;
- (id)currentAlertingSession;
- (void)createSessionWithAlarm:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)hasTimerSessionWithId:(id)a0;
- (BOOL)hasActiveTimerSession;
- (BOOL)hasAlarmSessionWithId:(id)a0;
- (id)activeAlarmSessions;
- (id)activityIdForTimerId:(id)a0;
- (void)createSessionWithTimer:(id)a0 forAlert:(BOOL)a1 completion:(id /* block */)a2;
- (void)finishSessionWithTimer:(id)a0;
- (id)contextWithTimer:(id)a0;
- (id)contextWithAlarm:(id)a0;

@end
