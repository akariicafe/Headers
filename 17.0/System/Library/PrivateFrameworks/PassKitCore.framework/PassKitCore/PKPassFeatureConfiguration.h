@class PKOSVersionRequirementRange;

@interface PKPassFeatureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPassFeatureConfiguration:(id)a0;

@end
