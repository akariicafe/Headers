@class NSMutableArray;

@interface IMExtensionNotificationManager : NSObject

@property (retain, nonatomic) NSMutableArray *notificationsContext;

+ (id)sharedInstance;

- (id)init;
- (id)notificationCategories;
- (BOOL)shouldRetractedMessageForBalloonBundleID:(id)a0;
- (void).cxx_destruct;
- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2 chatIdentifier:(id)a3 isUrgentMessageTrigger:(BOOL *)a4 shouldSuppressNotification:(BOOL *)a5;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;

@end
