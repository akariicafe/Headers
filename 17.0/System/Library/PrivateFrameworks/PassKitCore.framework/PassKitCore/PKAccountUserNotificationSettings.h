@class NSDecimalNumber;

@interface PKAccountUserNotificationSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL transactionNotificationsEnabled;
@property (retain, nonatomic) NSDecimalNumber *transactionNotificationThreshold;
@property (retain, nonatomic) NSDecimalNumber *monthlySpendNotificationThreshold;

+ (id)defaultNotificationSettings;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isEqualToAccountUserNotificationSettings:(id)a0;
- (id)initWithAccountUserNotificationSettings:(id)a0;

@end
