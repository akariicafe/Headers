@interface MentalHealthUI.NotificationSettingsModel : NSObject <HKMHSettingsManagerObserver> {
    void /* unknown type, empty encoding */ settingsManager;
    void /* unknown type, empty encoding */ notificationCancellable;
    void /* unknown type, empty encoding */ _areNotificationsDisabled;
}

- (id)init;
- (void)dealloc;
- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void).cxx_destruct;
- (void)updateNotificationAuthorizationStatus;

@end
