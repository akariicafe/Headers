@class NSString;

@interface IMDCustomPluginNotificationContext : NSObject <IMDNotificationContextProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)notificationCategories;
- (void)populateUserInfoForNotificationContent:(id)a0 messageBalloonBundleID:(id)a1 payloadData:(id)a2;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:(id)a0;

@end
