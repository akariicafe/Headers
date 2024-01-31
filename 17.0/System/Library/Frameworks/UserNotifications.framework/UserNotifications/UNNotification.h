@class NSString, NSArray, UNNotificationRequest, NSDate;

@interface UNNotification : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSArray *intentIdentifiers;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) UNNotificationRequest *request;

+ (id)notificationWithRequest:(id)a0 date:(id)a1 sourceIdentifier:(id)a2 intentIdentifiers:(id)a3;
+ (id)notificationWithRequest:(id)a0 date:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNotificationRequest:(id)a0 date:(id)a1 sourceIdentifier:(id)a2 intentIdentifiers:(id)a3;

@end
