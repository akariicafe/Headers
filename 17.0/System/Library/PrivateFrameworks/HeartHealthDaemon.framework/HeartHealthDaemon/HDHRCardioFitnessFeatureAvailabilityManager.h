@class NSString, HDProfile, NSUserDefaults;
@protocol HDPairedDeviceCapabilityProviding, HDRegionAvailabilityProviding, HDFeatureAvailabilityExtension;

@interface HDHRCardioFitnessFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDHRRegionSupportedDeterminer> {
    HDProfile *_profile;
    NSString *_featureIdentifier;
    long long _currentOnboardingVersion;
    id<HDPairedDeviceCapabilityProviding> _capabilityProvider;
    id<HDRegionAvailabilityProviding> _regionAvailabilityProvider;
    id<HDFeatureAvailabilityExtension> _manager;
    NSUserDefaults *_heartRateSettingsDefaults;
}

@property (nonatomic) long long _unitTest_currentOnboardingVersionOverride;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (id)makeRegionAvailabilityProviderWithProfile:(id)a0;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (BOOL)isRegionCodeSupportedOnLocalDevice:(id)a0;
- (id)regionAvailabilityWithError:(id *)a0;
- (long long)_currentOnboardingVersion;
- (void)unregisterObserver:(id)a0;
- (id)initWithProfile:(id)a0 regionAvailabilityProvider:(id)a1 heartRateSettingsDefaults:(id)a2 featureAvailabilityManager:(id)a3;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0 regionAvailabilityProvider:(id)a1 heartRateSettingsDefaults:(id)a2;
- (id)_onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (id)_onboardingCompletionsForHighestVersionWithError:(id *)a0;
- (id)description;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (BOOL)_localRegionCheckWithCountryCode:(id)a0;
- (void).cxx_destruct;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)isOnboardingCompletionWithRegionSupportedOnLocalAndActivePairedDevicePresentWithError:(id *)a0;
- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (BOOL)_determineIsSupportedWithOnboardingCompletions:(id)a0 regionCheckBlock:(id /* block */)a1;
- (id)canCompleteOnboardingWhileBypassingDeviceForDemoDataPurposesWithCountryCode:(id)a0;

@end
