@class NSString, NSDictionary;

@interface IMSafetyMonitorCoordinator : NSObject

@property (readonly, copy, nonatomic) NSString *appPayloadID;
@property (readonly, copy, nonatomic) NSDictionary *appPayload;

+ (id)sharedCoordinator;

- (void)checkPreferredHandlesCacheForReceiverWith:(id)a0 completion:(id /* block */)a1;
- (void)shouldShowKeyboardSuggestionForInitiator:(id)a0 andReceiver:(id)a1 completion:(id /* block */)a2;
- (void)shouldShowTipKitSuggestionForInitiator:(id)a0 andReceiver:(id)a1 completion:(id /* block */)a2;
- (void)checkPreferredHandlesCacheForInitiatorHandleID:(id)a0 andReceiver:(id)a1 completion:(id /* block */)a2;
- (void)informOfCancelledScheduledMessageSendWithMessageGUID:(id)a0 sentSuccessfully:(BOOL)a1 error:(id)a2;
- (void)informOfDeletedConversationWithReceiverHandles:(id)a0;
- (void)informOfDeletedMessagesWithMessages:(id)a0;
- (void)informOfIncomingMessageWithMessage:(id)a0;
- (void)informOfOutgoingMessageWithMessage:(id)a0 sentSuccessfully:(BOOL)a1 error:(id)a2;
- (void)informOfScheduledMessage:(id)a0 sentSuccessfully:(BOOL)a1 error:(id)a2;
- (void)informOfSentScheduledMessage:(id)a0;
- (long long)notificationContentForInitiator:(id)a0 messageURL:(id)a1 content:(id)a2;
- (void)respondToNotificationWithIdentifier:(id)a0 sessionIdentifier:(id)a1 actionIdentifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldDisallowBasedOnRegulatoryDomain;
- (BOOL)shouldDropIncomingCheckInMessageWithURL:(id)a0 senderHandle:(id)a1 isFromMe:(BOOL)a2;

@end
