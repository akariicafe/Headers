@class NSString;

@interface HKFeatureAvailabilityOnboardingEligibilityRequirement : HKFeatureAvailabilityBaseRequirement <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)initWithFeatureIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
