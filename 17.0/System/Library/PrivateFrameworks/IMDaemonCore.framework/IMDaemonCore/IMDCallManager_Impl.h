@interface IMDCallManager_Impl : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ serviceSession;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ newChatListenerTask;
}

- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 conversationUpdatedMessagesGroupUUID:(id)a1;
- (id)init;
- (void)dealloc;
- (id)initWithServiceSession:(id)a0;
- (void).cxx_destruct;

@end
