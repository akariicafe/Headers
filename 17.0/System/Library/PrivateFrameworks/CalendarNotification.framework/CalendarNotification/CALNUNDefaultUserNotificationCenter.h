@class UNUserNotificationCenter, NSString;
@protocol UNUserNotificationCenterDelegate;

@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol>

@property (readonly, nonatomic) UNUserNotificationCenter *userNotificationCenter;
@property (weak, nonatomic) id<UNUserNotificationCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationSettings;
- (void)setWantsNotificationResponsesDelivered;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)a0;
- (id)deliveredNotifications;
- (id)notificationCategories;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (BOOL)addNotificationRequest:(id)a0 error:(id *)a1;
- (id)notificationSettingsForTopics;
- (void)setNotificationCategories:(id)a0;
- (BOOL)replaceContentForRequestWithIdentifier:(id)a0 replacementContent:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;

@end
