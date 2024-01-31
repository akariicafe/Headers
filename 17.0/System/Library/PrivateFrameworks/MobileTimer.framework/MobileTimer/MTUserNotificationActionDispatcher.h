@class NSString, MTTimerStorage, MTMetrics, MTAlarmStorage;

@interface MTUserNotificationActionDispatcher : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTTimerStorage *timerStorage;
@property (retain, nonatomic) MTMetrics *metrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_alarmNotificationActionForUserNotificationAction:(id)a0 category:(id)a1;
+ (unsigned long long)_timerNotificationActionForUserNotificationAction:(id)a0;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_handleTimerNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithAlarmStorage:(id)a0 timerStorage:(id)a1;
- (void).cxx_destruct;
- (void)_handleAlarmNotificationResponse:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)handleAlarmNotificationIdentifier:(id)a0 action:(unsigned long long)a1 category:(id)a2 completionHandler:(id /* block */)a3;

@end
