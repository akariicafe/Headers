@class ATXNotificationsLoggingClient;

@interface NCNotificationEventTracker : NSObject {
    ATXNotificationsLoggingClient *_logger;
}

+ (id)sharedInstance;
+ (id)createATXNotificationInterfaceFromRequest:(id)a0;

- (id)init;
- (void)executedActionWithIdentifier:(id)a0 forNotificationRequest:(id)a1;
- (void)expandedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (void)missedBundleExpired:(id)a0;
- (void)shortLookClearedForNotificationRequest:(id)a0 withState:(id)a1;
- (void)notificationCenterClearAll;
- (void)longLookReparkInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)shortLookDismissInvokedForNotificationRequest:(id)a0 withState:(id)a1;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)a0;
- (void)longLookCustomAction:(id)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)realTimeTuningTrigger:(long long)a0;
- (void)presentedNotificationRequestAsBanner:(id)a0;
- (void)modifiedNotificationRequest:(id)a0;
- (void)digestExpanded:(id)a0;
- (void)_displayedNotificationRequests:(id)a0 inUILocation:(long long)a1;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)removedNotificationRequest:(id)a0;
- (void)toggledGroupState:(BOOL)a0 withLeadingNotificationRequest:(id)a1;
- (void)hideNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (void)notificationCenterDisappeared;
- (void)missedBundleAppeared:(id)a0;
- (void)insertedNotificationRequest:(id)a0 toSectionType:(unsigned long long)a1;
- (void)realTimeTuningOutcome:(long long)a0 withBundleId:(id)a1;
- (void)digestExpired:(id)a0;
- (void)longLookPresentedForNotificationRequest:(id)a0;
- (void)missedBundleDismissed:(id)a0;
- (id)notificationDestinationForState:(id)a0;
- (void)dismissedSectionType:(unsigned long long)a0 withUUID:(id)a1;
- (void)longLookDismissInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;
- (void)digestDismissed:(id)a0;
- (void)notificationCenterAppeared;
- (void)digestAppeared:(id)a0;
- (void)receivedNotification:(id)a0 withProminence:(BOOL)a1 sectionSettings:(id)a2;
- (void)missedBundleExpanded:(id)a0;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)a0 forNotificationRequest:(id)a1 withState:(id)a2;

@end
