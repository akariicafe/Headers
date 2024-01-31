@class NSString, NSMutableArray, NSConditionLock;
@protocol EFScheduler;

@interface _EDMessageItemIDCollector : NSObject <EDMessageQueryHelperDelegate> {
    id<EFScheduler> _scheduler;
    NSMutableArray *_messageItemIDs;
    NSConditionLock *_collectionLock;
    NSString *_errorString;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)collectItemIDsWithQuery:(id)a0 messagePersistence:(id)a1 hookRegistry:(id)a2 remindMeNotificationController:(id)a3 remoteSearchProvider:(id)a4 errorString:(id *)a5;
- (void)queryHelper:(id)a0 conversationIDDidChangeForMessages:(id)a1 fromConversationID:(long long)a2;
- (void)queryHelper:(id)a0 conversationNotificationLevelDidChangeForConversation:(long long)a1 conversationID:(long long)a2;
- (void)queryHelper:(id)a0 didAddMessages:(id)a1;
- (void)queryHelper:(id)a0 didDeleteMessages:(id)a1;
- (void)queryHelper:(id)a0 didFindMessages:(id)a1;
- (void)queryHelper:(id)a0 didUpdateMessages:(id)a1 forKeyPaths:(id)a2;
- (void)queryHelper:(id)a0 messageFlagsDidChangeForMessages:(id)a1;
- (void)queryHelper:(id)a0 objectIDDidChangeForMessage:(id)a1 oldObjectID:(id)a2 oldConversationID:(long long)a3;
- (void)queryHelperDidFindAllMessages:(id)a0;
- (void)queryHelperDidFinishRemoteSearch:(id)a0;
- (void)queryHelperNeedsRestart:(id)a0;

@end
