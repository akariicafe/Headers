@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue, HKRPUserDefaultsSyncProviding, HKFeatureAvailabilityProviding;

@interface HKRPOxygenSaturationOnboardingCacher : NSObject <HKFeatureAvailabilityProvidingObserver> {
    id<HKFeatureAvailabilityProviding> _featureAvailabilityProvider;
    NSUserDefaults *_userDefaults;
    id<HKRPUserDefaultsSyncProviding> _userDefaultsSyncProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)_queue_featureAvailabilityDidChange;
- (id)initWithFeatureAvailabilityProviding:(id)a0 userDefaults:(id)a1 userDefaultsSyncProvider:(id)a2;
- (id)initWithFeatureAvailabilityProviding:(id)a0 userDefaults:(id)a1 userDefaultsSyncProvider:(id)a2 didStart:(id /* block */)a3;

@end
