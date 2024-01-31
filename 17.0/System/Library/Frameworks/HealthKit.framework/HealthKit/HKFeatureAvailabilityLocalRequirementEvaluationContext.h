@class NSMutableDictionary;

@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource

@property (nonatomic) long long _unitTest_cacheHits;
@property (retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *watchAppInstallationStateByBundleIdentifier;
@property (retain, nonatomic) NSMutableDictionary *featureStatusByIdentifierAndContext;

- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)featureStatusForFeatureWithIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;

@end
