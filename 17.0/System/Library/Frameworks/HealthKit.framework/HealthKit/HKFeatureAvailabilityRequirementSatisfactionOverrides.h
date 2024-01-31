@class NSString, NSUserDefaults;

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject

@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)initWithFeatureIdentifier:(id)a0;
- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1;
- (id)overriddenRequirementIdentifiers;
- (void)resetAllRequirementSatisfactionOverrides;
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)a0 isSatisfied:(id)a1;
- (void).cxx_destruct;
- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)a0;

@end
