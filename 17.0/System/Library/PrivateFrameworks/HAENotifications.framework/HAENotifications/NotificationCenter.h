@class NSString, UNUserNotificationCenter;

@interface NotificationCenter : NSObject <UNUserNotificationCenterDelegate> {
    UNUserNotificationCenter *_userNotificationCenter;
    NSString *_title;
    NSString *_subtitle;
    NSString *_body;
    BOOL _hasHealthApp;
    BOOL _hasHaptics;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_healthAppHidden;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)handleNotificationAction:(id)a0;
- (void)sendNotificationWithExposureLevel:(double)a0 duration:(double)a1 eventType:(unsigned int)a2 volumeLoweringAction:(unsigned int)a3;

@end
