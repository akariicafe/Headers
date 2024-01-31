@interface TPSLocalNotificationController : NSObject

@property (readonly, nonatomic, getter=isNotificationSettingValid) BOOL notificationSettingValid;

- (void)removeAllNotifications;
- (id)initWithBundleIdentifier:(id)a0;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void)notificationCompletedForIdentifier:(id)a0 collectionID:(id)a1 correlationID:(id)a2 error:(id)a3;
- (void)sendNotificationWithIdentifier:(id)a0 collectionID:(id)a1 correlationID:(id)a2 title:(id)a3 text:(id)a4 attachmentURL:(id)a5 extensionPayload:(id)a6;
- (void)showNotificationForNotificationCache:(id)a0 attachmentURL:(id)a1;

@end
