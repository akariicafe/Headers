@class HKFeatureAvailabilityStore, NSString, HKRPOxygenSaturationAvailability, HKRPOxygenSaturationSettings, HKRPOxygenSaturationOnboardingCache, NRDevice;
@protocol HKRegulatoryDomainProvider, HKFeatureAvailabilityProviding;

@interface _HKRPOxygenSaturationOnboardingManagerDataSource : NSObject <HKRPOxygenSaturationOnboardingManagerDataSource> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HKFeatureAvailabilityStore *_featureAvailabilityProvider;
    HKRPOxygenSaturationAvailability *_oxygenSaturationAvailability;
    HKRPOxygenSaturationSettings *_oxygenSaturationSettings;
    HKRPOxygenSaturationOnboardingCache *_onboardingCache;
    id<HKRegulatoryDomainProvider> _mobileCountryCodeManager;
}

@property (readonly, nonatomic, getter=isBloodOxygenSaturationEnabled) BOOL bloodOxygenSaturationEnabled;
@property (readonly, nonatomic, getter=isAgeGated) BOOL ageGated;
@property (readonly, nonatomic) BOOL shouldAdvertise;
@property (readonly, nonatomic) NSString *countryCodeFromCurrentLocale;
@property (readonly, nonatomic) BOOL skipHardwareCheck;
@property (readonly, nonatomic) NRDevice *device;
@property (readonly, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityProvider;
@property (readonly, nonatomic) HKRPOxygenSaturationSettings *oxygenSaturationSettings;
@property (readonly, nonatomic) HKRPOxygenSaturationOnboardingCache *onboardingCache;
@property (readonly, nonatomic) id<HKRegulatoryDomainProvider> mobileCountryCodeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_lazyPropertyWithLockedBlock:(id /* block */)a0;

@end
