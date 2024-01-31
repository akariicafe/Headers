@class NSString;

@interface HKFeatureAvailabilityRequirementFeatureSetting : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *settingsOnKey;
@property (readonly, nonatomic) BOOL isOnWhenSettingIsAbsent;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 settingsOnKey:(id)a1 isOnWhenSettingIsAbsent:(BOOL)a2;
- (id)initWithFeatureIdentifier:(id)a0 isOnWhenSettingIsAbsent:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
