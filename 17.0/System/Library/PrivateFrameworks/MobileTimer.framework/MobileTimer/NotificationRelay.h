@interface NotificationRelay : NSObject

@property (nonatomic) BOOL refreshManagers;

+ (id)sharedRelay;

- (id)init;
- (void)refreshManagersForPreferences:(BOOL)a0 localNotifications:(BOOL)a1;
- (void)relayFrameworkNotification:(id)a0;

@end
