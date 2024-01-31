@interface HealthUI.DefaultPairedDeviceFeatureAttributesDataSource : NSObject <HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ activePairedDeviceProvider;
    void /* unknown type, empty encoding */ featureAvailabilityStore;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ updateSignalPublisher;
}

- (id)init;
- (void).cxx_destruct;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;

@end
