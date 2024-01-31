@interface CMContinuityCaptureUserNotificationCenter : NSObject

+ (id)sharedInstance;
+ (void)invalidate;

- (id)initWithQueue:(id)a0;
- (void)invalidate;
- (id)description;
- (void)scheduleNotification:(long long)a0 data:(id)a1;
- (void)unscheduleNotification:(long long)a0;
- (void)unscheduleNotificationForDeviceIdentifier:(id)a0 type:(long long)a1 clearHistory:(BOOL)a2;

@end
