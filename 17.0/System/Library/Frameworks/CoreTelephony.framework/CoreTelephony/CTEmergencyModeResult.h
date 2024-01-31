@class CTEmergencyMode, CTXPCServiceSubscriptionContext;

@interface CTEmergencyModeResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CTEmergencyMode *mode;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *context;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMode:(id)a0 andContext:(id)a1;

@end
