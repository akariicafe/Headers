@class LNStaticDeferredLocalizedString;

@interface LNIntentEnablement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic) LNStaticDeferredLocalizedString *disabledReason;

+ (id)enabled;
+ (id)disabledWithReason:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValue:(long long)a0 disabledReason:(id)a1;

@end
