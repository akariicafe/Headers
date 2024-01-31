@interface Heart.BradycardiaAdvertisableFeatureSource : NSObject <HKHeartRhythmAvailabilityObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ heartSettingsUtilityProvider;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
}

- (void)heartRhythmAvailabilityDidUpdate;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
