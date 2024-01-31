@class UNNotificationSound;

@interface HealthAppServices.NotificationSupport : NSObject

@property (class, nonatomic, readonly) UNNotificationSound *defaultHealthAppNotificationSound;

+ (id)createNotificationUserInfoFor:(long long)a0 with:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
