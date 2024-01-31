@class NSString;

@interface HKFeatureAvailabilityOnboardingEligibility : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEligible;
@property (readonly, nonatomic) unsigned long long ineligibilityReasons;
@property (readonly, copy, nonatomic) NSString *countryAvailabilityVersion;

- (unsigned long long)hash;
- (long long)onboardedCountrySupportedState;
- (id)ineligibilityReasonsDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)eligibilityRespectingOverridesForFeatureIdentifier:(id)a0;
- (id)initWithIneligibilityReasons:(unsigned long long)a0 countryAvailabilityVersion:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
