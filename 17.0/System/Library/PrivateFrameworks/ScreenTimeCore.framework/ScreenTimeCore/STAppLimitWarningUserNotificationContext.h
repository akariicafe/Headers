@interface STAppLimitWarningUserNotificationContext : STUserNotificationContext

+ (BOOL)supportsSecureCoding;

- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setLimitDisplayName:(id)a0 timeLeft:(double)a1;

@end
