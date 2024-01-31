@class IMHandle, NSString, NSArray, CKIMSimulatedAccount;
@protocol CKIMSimulatedChatDelegate;

@interface CKIMSimulatedChat : IMChat <CKIMSimulatedChatDelegate, CKIMSimulatedDaemonListener>

@property (readonly, nonatomic) CKIMSimulatedAccount *simulatedAccount;
@property (readonly, nonatomic) NSString *simulatedGUID;
@property (readonly, nonatomic) NSArray *incomingHandles;
@property (readonly, nonatomic) IMHandle *outgoingHandle;
@property (readonly, nonatomic) unsigned long long currentMessageID;
@property (copy, nonatomic) NSString *simulatedChatIdentifier;
@property (weak, nonatomic) id<CKIMSimulatedChatDelegate> delegate;

+ (id)prepopulatedChat;

- (void)remove;
- (unsigned char)chatStyle;
- (id)account;
- (id)participants;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)guid;
- (id)recipient;
- (BOOL)_handleIncomingItem:(id)a0;
- (id)_messageWithGUID:(id)a0;
- (void)_sendMessage:(id)a0 adjustingSender:(BOOL)a1 shouldQueue:(BOOL)a2;
- (BOOL)allowedByScreenTime;
- (BOOL)allowedToShowConversation;
- (BOOL)allowedToShowConversationSync;
- (void)chat:(id)a0 didSendMessage:(id)a1 finished:(BOOL)a2;
- (id)chatIdentifier;
- (id)initWithIncomingIDs:(id)a0 outgoingID:(id)a1 messageIDOffset:(unsigned long long)a2 service:(id)a3;
- (id)loadMessagesBeforeDate:(id)a0 limit:(unsigned long long)a1 loadImmediately:(BOOL)a2;
- (void)markAsAutoSpamReported;
- (void)markLastMessageAsUnread;
- (void)refreshServiceForSending;
- (void)setValue:(id)a0 forChatProperty:(id)a1;
- (void)simulatedDaemon:(id)a0 willSendBalloonPayload:(id)a1 attachments:(id)a2 messageGUID:(id)a3 bundleID:(id)a4;
- (void)updateIsFiltered:(long long)a0;

@end
