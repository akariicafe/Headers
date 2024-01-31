@interface MenstrualCyclesAppPlugin.MenstrualCyclesAppDelegate : NSObject <UIApplicationTestingDelegate, WDNotificationPolicy> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ healthSharingNotificationSyncStore;
    void /* unknown type, empty encoding */ healthSharingNotificationContentStateManager;
    void /* unknown type, empty encoding */ shouldDismissNotificationsUrgently;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;

@end
