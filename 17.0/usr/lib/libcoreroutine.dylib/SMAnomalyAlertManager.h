@class SMSessionManagerState, RTDefaultsManager, RTXPCTimerAlarm, TLAlert, NSObject, SMCarPlayAlertManager;
@protocol OS_dispatch_queue;

@interface SMAnomalyAlertManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) SMSessionManagerState *anomalyState;
@property (retain, nonatomic) RTXPCTimerAlarm *secondAlertAlarm;
@property (retain, nonatomic) RTXPCTimerAlarm *thirdAlertAlarm;
@property (retain, nonatomic) TLAlert *tlAlert;
@property (readonly, nonatomic) double toneDelay;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) SMCarPlayAlertManager *carPlayAlertManager;

+ (unsigned long long)carPlayNotificationTypeForAnomalyManagerAlertOrdinal:(long long)a0;

- (void)_start;
- (void)start;
- (void)_resume;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (void)_stop;
- (id)initWithQueue:(id)a0 anomalyState:(id)a1 defaultsManager:(id)a2 carPlayAlertManager:(id)a3;
- (id)_alarmForAlertOrdinal:(long long)a0;
- (id)_alarmIdentifierForAlertOrdinal:(long long)a0;
- (void)_executeAlertForAlertOrdinal:(long long)a0;
- (void)_invalidateTimer:(id)a0;
- (void)_playTLAlertForAlertOrdinal:(long long)a0;
- (id)_scheduleAlertForAlertOrdinal:(long long)a0;
- (void)_scheduleSecondAlert;
- (void)_scheduleThirdAlert;
- (void)_stopTLAlert;
- (id)_targetAlertDateForAlertOrdinal:(long long)a0;
- (id)_tlAlertConfigurationForAlertOrdinal:(long long)a0;
- (id)initWithQueue:(id)a0 anomalyState:(id)a1 defaultsManager:(id)a2 carPlayAlertManager:(id)a3 toneDelay:(double)a4;

@end
