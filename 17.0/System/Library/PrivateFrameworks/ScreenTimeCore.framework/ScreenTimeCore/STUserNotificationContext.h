@class NSString, NSArray, UNNotificationTrigger, NSNumber;

@interface STUserNotificationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *destinations;
@property (readonly, copy) NSString *notificationBundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *localizedUserNotificationBodyArguments;
@property (copy, nonatomic) UNNotificationTrigger *trigger;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)notificationContentWithCompletionBlock:(id /* block */)a0;

@end
