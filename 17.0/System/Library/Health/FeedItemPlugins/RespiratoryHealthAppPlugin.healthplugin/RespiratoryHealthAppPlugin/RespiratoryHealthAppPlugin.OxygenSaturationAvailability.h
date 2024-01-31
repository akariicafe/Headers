@interface RespiratoryHealthAppPlugin.OxygenSaturationAvailability : NSObject <HKRPOxygenSaturationSettingsObserver, HKWristDetectionSettingManagerObserver> {
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ wristDetectionManager;
    void /* unknown type, empty encoding */ _featureStatus;
    void /* unknown type, empty encoding */ _promotionVisibility;
    void /* unknown type, empty encoding */ featureStatusCancellable;
    void /* unknown type, empty encoding */ userDefaultObservers;
}

- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)a0;
- (void)oxygenSaturationSettingsDidChange:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
