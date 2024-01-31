@class NSString, UNUserNotificationCenter, SABundleManager;

@interface SACriticalNotification : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_center;
    SABundleManager *_bundleManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_createNotification;
- (id)initWithBundleManager:(id)a0;
- (void)sendNotificationWithCompletionHandler:(id /* block */)a0;

@end
