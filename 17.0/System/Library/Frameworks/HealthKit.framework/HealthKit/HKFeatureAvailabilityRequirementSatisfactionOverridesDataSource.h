@interface HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource : HKUserDefaultsDataSource

+ (id)requirementSatisfactionOverridesDataSource;

- (void)registerObserver:(id)a0 forFeature:(id)a1 requirement:(id)a2 newValueHandler:(id /* block */)a3;
- (void)unregisterObserver:(id)a0 forFeature:(id)a1 requirement:(id)a2;

@end
