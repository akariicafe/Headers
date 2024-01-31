@class _HKBehavior, HKFeatureAvailabilityProvidingDataSource, HKWatchAppInstallationDataSource, HKFeatureStatusProvidingDataSource, HKBluetoothDeviceDataSource, NSDate, HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource, HKUserDefaultsDataSource, HKDarwinNotificationDataSource, HKWristDetectionSettingDataSource, HKNanoRegistryPairingAndSwitchingNotificationDataSource, HKWatchLowPowerModeDataSource;
@protocol HKCurrentCountryCodeProvider, HKFeatureAvailabilityHealthDataSource, HKFeatureOnboardingRecordFallbackProviding;

@interface HKFeatureAvailabilityRequirementEvaluationDataSource : NSObject

@property (readonly, weak, nonatomic) id<HKFeatureAvailabilityHealthDataSource> weakHealthDataSource;
@property (readonly, nonatomic) id<HKFeatureAvailabilityHealthDataSource> strongHealthDataSource;
@property (copy, nonatomic) id /* block */ currentDateDataSource;
@property (retain, nonatomic) id<HKFeatureOnboardingRecordFallbackProviding> onboardingRecordFallbackProvider;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementSatisfactionOverridesDataSource *requirementSatisfactionOverridesDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityProvidingDataSource *featureAvailabilityProvidingDataSource;
@property (readonly, nonatomic) HKFeatureStatusProvidingDataSource *featureStatusProvidingDataSource;
@property (readonly, nonatomic) HKBluetoothDeviceDataSource *bluetoothDeviceDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *privacyPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *respiratoryPreferencesDataSource;
@property (readonly, nonatomic) HKUserDefaultsDataSource *ageGatingDataSource;
@property (readonly, nonatomic) HKWristDetectionSettingDataSource *wristDetectionSettingDataSource;
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingNotificationDataSource;
@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource;
@property (readonly, nonatomic) HKWatchAppInstallationDataSource *watchAppInstallationDataSource;
@property (readonly, nonatomic) HKWatchLowPowerModeDataSource *watchLowPowerModeDataSource;
@property (readonly, nonatomic) id<HKCurrentCountryCodeProvider> currentCountryCodeProvider;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, nonatomic) NSDate *currentDate;

+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 onboardingRecordFallbackProvider:(id)a2;
+ (id)dataSourceWithHealthDataSource:(id)a0;
+ (id)dataSourceWithHealthDataSource:(id)a0 currentCountryCodeProvider:(id)a1 wristDetectionSettingManager:(id)a2 requirementSatisfactionOverridesDataSource:(id)a3 onboardingRecordFallbackProvider:(id)a4;

- (void)unregisterObserverForDeviceCharacteristicAndPairingChanges:(id)a0;
- (id)initWithHealthDataSource:(id)a0 featureAvailabilityProvidingDataSource:(id)a1 featureStatusProvidingDataSource:(id)a2 bluetoothDeviceDataSource:(id)a3 privacyPreferencesDataSource:(id)a4 respiratoryPreferencesDataSource:(id)a5 ageGatingDataSource:(id)a6 wristDetectionSettingDataSource:(id)a7 devicePairingAndSwitchingNotificationDataSource:(id)a8 darwinNotificationDataSource:(id)a9 watchLowPowerModeDataSource:(id)a10 currentCountryCodeProvider:(id)a11 requirementSatisfactionOverridesDataSource:(id)a12 currentDateDataSource:(id /* block */)a13 watchAppInstallationDataSource:(id)a14 onboardingRecordFallbackProvider:(id)a15;
- (id)isWatchAppInstalledWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)initWithHealthDataSource:(id)a0 bluetoothDeviceDataSource:(id)a1 privacyPreferencesDataSource:(id)a2 respiratoryPreferencesDataSource:(id)a3 ageGatingDataSource:(id)a4 wristDetectionSettingDataSource:(id)a5 devicePairingAndSwitchingNotificationDataSource:(id)a6 darwinNotificationDataSource:(id)a7 watchLowPowerModeDataSource:(id)a8 currentCountryCodeProvider:(id)a9 requirementSatisfactionOverridesDataSource:(id)a10 currentDateDataSource:(id /* block */)a11 watchAppInstallationDataSource:(id)a12 onboardingRecordFallbackProvider:(id)a13;
- (id)requirementSatisfactionOverridesForFeatureWithIdentifier:(id)a0;
- (id)healthDataSource;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)featureStatusForFeatureWithIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)registerObserverForDeviceCharacteristicAndPairingChanges:(id)a0 block:(id /* block */)a1;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)performLocalEvaluation:(id /* block */)a0;

@end
