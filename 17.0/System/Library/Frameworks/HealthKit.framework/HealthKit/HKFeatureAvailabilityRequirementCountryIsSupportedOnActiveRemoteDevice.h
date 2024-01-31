@class NSString;

@interface HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKObservableFeatureAvailabilityRequirement> {
    BOOL _isSupportedIfCountryListMissing;
}

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)initWithFeatureIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;

@end
