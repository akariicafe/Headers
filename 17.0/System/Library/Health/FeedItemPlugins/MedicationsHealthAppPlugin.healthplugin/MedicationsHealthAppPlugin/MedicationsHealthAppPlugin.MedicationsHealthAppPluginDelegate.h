@interface MedicationsHealthAppPlugin.MedicationsHealthAppPluginDelegate : NSObject <UNUserNotificationCenterDelegate, HBXDataListViewControllerProviding> {
    void /* unknown type, empty encoding */ medicationDoseEventLogger;
    void /* unknown type, empty encoding */ $__lazy_storage_$_healthStore;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scheduleControl;
}

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)makeDataListViewControllerForHealthStore:(id)a0 displayType:(id)a1 predicate:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
