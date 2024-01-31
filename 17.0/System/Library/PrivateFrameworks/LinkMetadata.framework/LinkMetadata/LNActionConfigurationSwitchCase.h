@class LNValue, LNActionConfiguration;

@interface LNActionConfigurationSwitchCase : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNValue *value;
@property (readonly, copy, nonatomic) LNActionConfiguration *configuration;
@property (readonly, nonatomic, getter=isDefaultCase) BOOL defaultCase;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDefaultConfiguration:(id)a0;
- (id)initWithValue:(id)a0 configuration:(id)a1;
- (id)initWithWidgetFamilies:(id)a0 configuration:(id)a1;
- (id)initWithWidgetFamily:(id)a0 configuration:(id)a1;

@end
