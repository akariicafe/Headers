@class TUConversationManager, _PASLock;

@interface PPQuickTypeURLServant : NSObject <PPQuickTypeServantProtocol> {
    TUConversationManager *_conversationManager;
    _PASLock *_dataLock;
}

- (id)init;
- (void)registerFeedback:(id)a0;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (id)initWithConversationManager:(id)a0;
- (void).cxx_destruct;

@end
