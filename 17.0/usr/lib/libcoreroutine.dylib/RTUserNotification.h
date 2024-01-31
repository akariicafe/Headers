@class UNUserNotificationCenter, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RTUserNotification : NSObject <UNUserNotificationCenterDelegate>

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *notificationUUIDString;
@property (retain, nonatomic) NSMutableDictionary *actionIdentifierToActionMapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)UNNotificationInterruptionLevelFromRTNotificationInterruptionLevel:(unsigned long long)a0;
+ (id)_getUNNotificationActionFromRTUserNotificationAction:(id)a0;
+ (id)destinationToString:(unsigned long long)a0;
+ (id)interruptionLevelToString:(unsigned long long)a0;

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (BOOL)deleteNotificationWithError:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 notificationUUIDString:(id)a1;
- (void)postNotificationWithTitle:(id)a0 subtitle:(id)a1 body:(id)a2 footer:(id)a3 defaultActionUrl:(id)a4 categoryIdentifier:(id)a5 interruptionLevel:(unsigned long long)a6 destination:(unsigned long long)a7 actions:(id)a8 suppressDismissActionInCarPlay:(BOOL)a9 preventAutomaticRemoval:(BOOL)a10 expirationDate:(id)a11 userInfo:(id)a12 handler:(id /* block */)a13;

@end
