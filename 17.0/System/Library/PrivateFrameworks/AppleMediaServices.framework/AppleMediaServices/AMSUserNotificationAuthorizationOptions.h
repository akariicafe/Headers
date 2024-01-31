@class NSDictionary;

@interface AMSUserNotificationAuthorizationOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long authorizationOptions;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (nonatomic) BOOL userInitiated;

- (id)init;
- (id)optionsDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithOptionsDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
