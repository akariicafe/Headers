@interface HKFeatureAvailabilityRequirements : NSObject

+ (id)wristDetectionIsEnabledForActiveWatch;
+ (id)countryIsSupportedOnLocalDeviceAndPhoneForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)prerequisiteFeaturesAreOnWithFeatureSettings:(id)a0;
+ (id)localDeviceIsCapableOfPairingWithWatch;
+ (id)notAgeGatedForUserDefaultsKey:(id)a0;
+ (id)heartRateIsEnabledInPrivacy;
+ (id)seedIsNotExpiredForFeatureWithIdentifier:(id)a0;
+ (id)countryIsSupportedOnLocalDeviceForFeatureWithIdentifier:(id)a0;
+ (id)featureIsOnWithIdentifier:(id)a0 isOnIfSettingIsAbsent:(BOOL)a1;
+ (id)watchAppIsInstalledForBundleIdentifier:(id)a0;
+ (id)defaultHelpTileRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)countryCodeIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)featureIsNotRemotelyDisabledWithIdentifier:(id)a0;
+ (id)capabilityIsSupportedOnActiveWatchForFeatureWithIdentifier:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)activeRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapabilityForFeatureWithIdentifier:(id)a0;
+ (id)onboardedAtLeastDaysAgo:(long long)a0 featureIdentifier:(id)a1;
+ (id)featureFlagIsEnabled:(BOOL)a0;
+ (id)capabilityIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0;
+ (id)featureIsOnWithIdentifier:(id)a0 settingsKey:(id)a1 isOnIfSettingIsAbsent:(BOOL)a2;
+ (id)defaultOnboardingEligibilityRequirementsForFeatureIdentifier:(id)a0;
+ (id)countryIsSupportedOnActiveRemoteDeviceForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)defaultTipsAppVisibilityRequirementsForBackgroundDeliveredFeatureWithFeatureIdentifier:(id)a0 isAgeGatedUserDefaultsKey:(id)a1;
+ (id)onboardingRecordIsNotPresentForFeatureWithIdentifier:(id)a0;
+ (id)countryIsSupportedOnWatchForFeatureWithIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
+ (id)profileIsNotFamilySetupPairingProfile;
+ (id)onboardingRecordIsPresentForFeatureWithIdentifier:(id)a0;
+ (id)capabilityIsSupportedOnAnyWatch:(id)a0 supportedOnLocalDevice:(BOOL)a1;
+ (id)mutuallyExclusiveFeatureIsOffWithIdentifier:(id)a0;
+ (id)watchLowPowerModeIsOff;
+ (id)onboardingRecordsArePresentForPrerequisiteFeaturesWithIdentifiers:(id)a0;
+ (id)notInStoreDemoMode;
+ (id)localDeviceIsCapableOfWatchPairing;
+ (id)healthAppIsNotHidden;
+ (id)onboardingRecordIsNotPresentForMutuallyExclusiveFeatureWithIdentifier:(id)a0;
+ (id)bloodOxygenMeasurementsAreEnabled;

@end
