@interface HKFeatureAvailabilityRequirementHeartRateIsEnabledInPrivacy : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)init;
- (BOOL)defaultValueWhenKeyIsMissing;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;

@end
