@class NSArray, IMHandle, IMMessage;

@interface IMMockChat : IMChat

@property (retain, nonatomic) NSArray *mockChatItems;
@property (retain, nonatomic) IMHandle *incomingHandle;
@property (retain, nonatomic) IMHandle *outgoingHandle;
@property (retain, nonatomic) IMMessage *lastMockIMMessage;
@property (retain, nonatomic) NSArray *extraParticipants;
@property (nonatomic) unsigned long long mockUnreadMessageCount;

- (id)init;
- (id)participants;
- (id)lastMessage;
- (void).cxx_destruct;
- (id)displayName;
- (unsigned long long)messageCount;
- (id)recipient;
- (id)_chatItemFromMockItemInfo:(id)a0 atIndex:(unsigned long long)a1;
- (id)_messageFromMockItemInfo:(id)a0;
- (void)addExtraParticipants:(id)a0;
- (void)appendMockItemWithInfo:(id)a0;
- (id)chatItems;
- (BOOL)deleteAllHistory;
- (void)deleteChatItems:(id)a0;
- (id)lastFinishedMessage;
- (id)lastFinishedMessageDate;
- (id)loadMessagesBeforeDate:(id)a0 limit:(unsigned long long)a1 loadImmediately:(BOOL)a2;
- (void)setupWithMockItemInfoArray:(id)a0;
- (unsigned long long)unreadMessageCount;

@end
