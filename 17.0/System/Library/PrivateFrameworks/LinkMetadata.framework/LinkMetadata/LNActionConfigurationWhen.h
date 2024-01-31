@class LNActionConfigurationCondition, LNActionConfiguration;

@interface LNActionConfigurationWhen : LNActionConfiguration <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNActionConfigurationCondition *condition;
@property (readonly, nonatomic) LNActionConfiguration *when;
@property (readonly, nonatomic) LNActionConfiguration *otherwise;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCondition:(id)a0 when:(id)a1 otherwise:(id)a2;

@end
