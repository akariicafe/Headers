@class UNUserNotificationCenter, NSString;

@interface MTUserNotificationAppDelegate : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
