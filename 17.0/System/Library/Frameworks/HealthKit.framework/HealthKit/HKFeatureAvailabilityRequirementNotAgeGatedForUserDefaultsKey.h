@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)initWithUserDefaultsKey:(id)a0;
- (BOOL)defaultValueWhenKeyIsMissing;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;

@end
