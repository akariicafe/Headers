@class _PASLRUCache;

@interface SGConversationTracker : NSObject {
    _PASLRUCache *_conversations;
}

+ (id)instance;
+ (id)getMergedPromptForMessage:(id)a0 conversationTurns:(id)a1 maxPromptLength:(unsigned long long)a2 maxPromptWindowSeconds:(double)a3 promptJoiningString:(id)a4;
+ (id)sgConversationTurnsForStrings:(id)a0;

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)addMessage:(id)a0;
- (id)conversationForSenderID:(id)a0;

@end
