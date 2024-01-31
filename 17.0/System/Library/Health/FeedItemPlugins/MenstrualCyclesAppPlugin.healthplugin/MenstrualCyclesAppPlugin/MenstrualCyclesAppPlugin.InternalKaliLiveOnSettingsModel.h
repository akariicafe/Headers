@interface MenstrualCyclesAppPlugin.InternalKaliLiveOnSettingsModel : NSObject <HKSPSleepStoreObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ wristTemperatureMeasurementsStatusManager;
    void /* unknown type, empty encoding */ sleepMeasurementConfigurationProvider;
    void /* unknown type, empty encoding */ sleepMeasurementConfiguration;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ _requirements;
    void /* unknown type, empty encoding */ subscriptions;
}

- (id)init;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void).cxx_destruct;
- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;

@end
