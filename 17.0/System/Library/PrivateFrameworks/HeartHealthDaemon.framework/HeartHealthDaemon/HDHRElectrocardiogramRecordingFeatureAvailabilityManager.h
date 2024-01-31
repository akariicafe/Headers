@class HKObserverSet, NSString, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProvidingObserver, HDFeatureAvailabilityExtension;

@interface HDHRElectrocardiogramRecordingFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtensionObserver, HDFeatureAvailabilityExtension> {
    HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
    int _didUpdateOnboardingCacheNotificationToken;
    NSUserDefaults *_cacheDefaults;
    NSObject<OS_dispatch_queue> *_observerQueue;
    BOOL _needsOnboardingVersionCacheUpdate;
}

@property (readonly, nonatomic) id<HDFeatureAvailabilityExtension> v1FeatureAvailabilityManager;
@property (readonly, nonatomic) id<HDFeatureAvailabilityExtension> v2FeatureAvailabilityManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)a0;
- (void)removeFeatureSettingValueForKey:(id)a0 completion:(id /* block */)a1;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)a0;
- (void)dealloc;
- (id)regionAvailabilityWithError:(id *)a0;
- (id)initWithProfile:(id)a0 cacheDefaults:(id)a1;
- (void)unregisterObserver:(id)a0;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)a0;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)a0;
- (id)canCompleteOnboardingForCountryCode:(id)a0 error:(id *)a1;
- (id)onboardingEligibilityForCountryCode:(id)a0 error:(id *)a1;
- (id)featureAvailabilityRequirementsWithError:(id *)a0;
- (void)_registerForCacheUpdatedNotifications;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)a0;
- (void)_observerQueue_updateCachedOnboardingVersionIfNeeded;
- (void).cxx_destruct;
- (id)featureOnboardingRecordWithError:(id *)a0;
- (void)resetOnboardingWithCompletion:(id /* block */)a0;
- (id)pairedFeatureAttributesWithError:(id *)a0;
- (void)_setV1CurrentOnboardingVersionCompletedForCountryCode:(id)a0 countryCodeProvenance:(long long)a1 date:(id)a2 settings:(id)a3 completion:(id /* block */)a4;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)a0;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)a0;
- (void)saveOnboardingCompletion:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingNumber:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)setFeatureSettingData:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (id)initWithV1FeatureAvailabilityManager:(id)a0 v2FeatureAvailabilityManager:(id)a1 cacheDefaults:(id)a2;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)setFeatureSettingString:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)a0;

@end
