@interface HKHRElectrocardiogramRecordingFeatureAvailabilityRequirements : NSObject

+ (id)requirementSet;
+ (id)requirementSetV2;
+ (id)_onboardingInitiationRequirementsForFeatureIdentifier:(id)a0;
+ (id)_onboardingPromotionRequirementsForFeatureIdentifier:(id)a0;
+ (id)_settingsUserInteractionEnabledForFeatureIdentifier:(id)a0;
+ (id)_settingsVisibilityRequirementsForFeatureIdentifier:(id)a0;
+ (id)_upgradeInitiation;
+ (id)_upgradePromotion;
+ (id)_usageRequirementsForFeatureIdentifier:(id)a0;

@end
