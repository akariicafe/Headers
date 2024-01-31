@interface Profiles.ProfilesAppDelegate : NSObject <UIApplicationTestingDelegate, UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ summarySharingEntryStore;
    void /* unknown type, empty encoding */ healthSharingNotificationSyncStore;
    void /* unknown type, empty encoding */ cancellables;
}

- (BOOL)application:(id)a0 runTest:(id)a1 options:(id)a2;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
