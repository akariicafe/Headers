@class NSString, UNUserNotificationCenter, NSMutableSet;

@interface BCSNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_qrCodeUserNotificationCenter;
    UNUserNotificationCenter *_nfcUserNotificationCenter;
    NSMutableSet *_notifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)didReceiveNotificationResponse:(id)a0;
- (void)_addRequestForNotification:(id)a0 codeType:(long long)a1;
- (void)_configureUserNotificationCenter;
- (id)_notificationWithIdentifier:(id)a0;
- (id)_userNotificationCenterForCodeType:(long long)a0;
- (void)scheduleNotification:(id)a0 codeType:(long long)a1;
- (void)withdrawNotificationsWithProcessID:(int)a0 codeType:(long long)a1;

@end
