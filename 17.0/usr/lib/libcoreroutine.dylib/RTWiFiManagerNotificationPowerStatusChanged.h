@interface RTWiFiManagerNotificationPowerStatusChanged : RTNotification

@property (readonly, nonatomic) unsigned long long powerStatus;

- (id)initWithPowerStatus:(unsigned long long)a0;

@end
