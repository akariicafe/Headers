@interface RTUserSessionMonitorNotificationConsoleUserDidChange : RTNotification

@property (readonly, nonatomic, getter=activeUser) BOOL activeUser;

- (id)init;
- (id)initWithactiveUser:(BOOL)a0;

@end
