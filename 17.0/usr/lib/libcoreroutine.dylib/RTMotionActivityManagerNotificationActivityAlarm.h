@interface RTMotionActivityManagerNotificationActivityAlarm : RTNotification

@property (readonly, nonatomic) long long trigger;

- (id)init;
- (id)description;
- (id)initWithActivityAlarmTrigger:(long long)a0;

@end
