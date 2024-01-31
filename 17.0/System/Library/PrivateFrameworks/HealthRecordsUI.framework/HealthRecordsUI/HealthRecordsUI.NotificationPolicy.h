@interface HealthRecordsUI.NotificationPolicy : NSObject <WDNotificationPolicy, UNUserNotificationCenterDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ notificationSyncStore;
    void /* unknown type, empty encoding */ shouldDismissNotificationsUrgently;
    void /* unknown type, empty encoding */ cancellables;
}

- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
