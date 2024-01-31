@interface HealthMobilityUI.WalkingSteadinessAdvertisableFeatureSource : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ featureOnboardingManager;
    void /* unknown type, empty encoding */ countryProvider;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
}

- (void)featureStatusManager:(id)a0 didUpdateNotificationStatus:(id)a1;
- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
