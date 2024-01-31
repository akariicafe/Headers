@class NSString;

@interface HKFeatureAvailabilityRequirementFeatureIsOn : HKFeatureAvailabilityOnboardingRecordRequirement <HKFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *settingsOnKey;
@property (readonly, nonatomic) BOOL isOnWhenSettingIsAbsent;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 settingsOnKey:(id)a1 isOnWhenSettingIsAbsent:(BOOL)a2;
- (id)initWithFeatureIdentifier:(id)a0 isOnWhenSettingIsAbsent:(BOOL)a1;
- (id)isSatisfiedWithOnboardingRecord:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
