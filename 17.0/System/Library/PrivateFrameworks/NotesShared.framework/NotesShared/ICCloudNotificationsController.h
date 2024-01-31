@class PDSRegistrar;

@interface ICCloudNotificationsController : NSObject

@property (readonly, nonatomic) PDSRegistrar *pdsClient;

+ (id)sharedController;
+ (void)registerForUserNotificationsWithCompletionHandler:(id /* block */)a0;

- (void)sendMentionNotificationToParticipant:(id)a0 inlineAttachmentRecordName:(id)a1 shareRecordName:(id)a2 shareOwnerUserId:(id)a3 accountId:(id)a4 noteRecordName:(id)a5 senderName:(id)a6 noteTitle:(id)a7 mentionSnippet:(id)a8 callback:(id /* block */)a9;
- (void)updateSubscriptionPreferenceForMentionNotifications:(BOOL)a0 forAccount:(id)a1;
- (void)batchUpdateTopicSubscriptionsAllAccountsInContext:(id)a0;
- (void)batchUpdateTopicSubscriptionsForDSIDs:(id)a0;
- (BOOL)isSubscribedToMentionNotificationsForAccount:(id)a0;
- (void)removeAllPDSRegistrationsForUser:(id)a0;
- (void)removeAllTopicSubscriptionsForAccount:(id)a0;

@end
