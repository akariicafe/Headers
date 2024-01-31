@interface HealthAppHealthDaemon.HDHealthAppNotificationManager : NSObject {
    void /* unknown type, empty encoding */ summarySharingEntryManager;
    void /* unknown type, empty encoding */ userNotificationCenter;
}

- (id)init;
- (void)removeNotificationsWithIdentifiers:(id)a0;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)removeNotificationWithIdentifier:(id)a0;
- (id)createSharingReminderNotificationAndReturnError:(id *)a0;
- (id)initWithProfile:(id)a0 userNotificationCenter:(id)a1;

@end
