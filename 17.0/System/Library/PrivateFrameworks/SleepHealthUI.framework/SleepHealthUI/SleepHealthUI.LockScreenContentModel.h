@interface SleepHealthUI.LockScreenContentModel : NSObject <HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ debugIdentifier;
    void /* unknown type, empty encoding */ stateDidChange;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _alarmButtonPressed;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ alarmProvider;
    void /* unknown type, empty encoding */ alarmSubscriber;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gregorianCalendar;
    void /* unknown type, empty encoding */ weatherModel;
    void /* unknown type, empty encoding */ weatherForecastSubcriber;
    void /* unknown type, empty encoding */ contentAppearanceProvider;
    void /* unknown type, empty encoding */ contentAppearanceSubscriber;
    void /* unknown type, empty encoding */ visible;
    void /* unknown type, empty encoding */ lockScreenState;
    void /* unknown type, empty encoding */ sleepScheduleModel;
    void /* unknown type, empty encoding */ demoState;
}

- (id)init;
- (void)dealloc;
- (void)sleepStore:(id)a0 sleepScheduleModelDidChange:(id)a1;
- (void).cxx_destruct;

@end
