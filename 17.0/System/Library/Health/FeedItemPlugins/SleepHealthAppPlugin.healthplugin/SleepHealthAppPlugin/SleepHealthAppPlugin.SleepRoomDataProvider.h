@interface SleepHealthAppPlugin.SleepRoomDataProvider : NSObject <HKFeatureAvailabilityProvidingObserver, HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ dataType;
    void /* unknown type, empty encoding */ sleepScheduleProvider;
    void /* unknown type, empty encoding */ dateCache;
    void /* unknown type, empty encoding */ gregorianCalendarCache;
    void /* unknown type, empty encoding */ onboardingManager;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ sleepRoomStatePublisher;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ restorationUserActivity;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sleepChartComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sleepOnboardingComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sleepFocusPromotionComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sleepScheduleOffComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextOccurrenceComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sleepScheduleComponent;
    void /* unknown type, empty encoding */ sleepScheduleDataComponent;
    void /* unknown type, empty encoding */ sleepDurationGoalComponent;
    void /* unknown type, empty encoding */ $__lazy_storage_$_favoritesComponent;
}

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)sleepStore:(id)a0 sleepFocusConfigurationDidUpdate:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
