@class NSString, HKSPObserverSet;
@protocol HKSPSleepOnboardingStore, HKSPFeatureSettingsModel, HKSPOnboardingModel, HKSPFeatureAvailabilityPairedDeviceRegistry;

@interface HKSPFeatureAvailabilityStore : NSObject <HKSPSleepStorePrivateObserver, HKFeatureAvailabilityProviding> {
    id<HKSPSleepOnboardingStore> _sleepStore;
    HKSPObserverSet *_observers;
    long long _feature;
    id<HKSPFeatureAvailabilityPairedDeviceRegistry> _pairedDeviceRegistry;
    int _deviceCharacteristicChangeNotifyToken;
    id<HKSPOnboardingModel> _cachedOnboardingModel;
    id<HKSPFeatureSettingsModel> _cachedFeatureSettingsModel;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _modelLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)_registerForNotifications;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (id)_onboardingModelWithError:(id *)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)regionAvailabilityWithError:(id *)a0;
- (id)_onboardingCompletionForOnboardingModel:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1;
- (void)_pairedDeviceDidChange;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (unsigned long long)_onboardingIneligibilityReasons;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (BOOL)_updateCachedOnboardingModel:(id)a0;
- (void)_onboardingModelWithCompletion:(id /* block */)a0;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (BOOL)_updateCachedFeatureSettingsModel:(id)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (BOOL)_isCurrentOnboardingVersionCompletedForOnboardingModel:(id)a0;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (void).cxx_destruct;
- (long long)_onboardedCountrySupportedStateForOnboardingModel:(id)a0;
- (void)_notifyObserversForDidUpdateSettings;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (id)initWithFeatureIdentifier:(id)a0 sleepStore:(id)a1 pairedDeviceRegistry:(id)a2;
- (id)_featureSettingsForOnboardingModel:(id)a0 featureSettingsModel:(id)a1;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (void)_notifyObserversForDidUpdateOnboarding;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (id)_defaultRequirements;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)_featureSettingsModelWithError:(id *)a0;
- (void)_withLock:(id /* block */)a0;
- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;
- (id)_sleepTrackingRequirements;

@end
