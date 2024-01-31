@interface HealthExperienceUI.InternalSettingsFeatureStateModel : NSObject <HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ featureAvailabilityStore;
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ _featureState;
    void /* unknown type, empty encoding */ _featureStatus;
    void /* unknown type, empty encoding */ _errorMessage;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateFormatter;
}

- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
