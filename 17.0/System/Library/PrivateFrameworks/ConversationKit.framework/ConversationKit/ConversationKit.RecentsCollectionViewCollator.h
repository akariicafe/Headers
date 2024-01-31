@interface ConversationKit.RecentsCollectionViewCollator : NSObject <TUConversationManagerDelegate> {
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ recentsController;
    void /* unknown type, empty encoding */ conversationManager;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ linkController;
    void /* unknown type, empty encoding */ messageInboxController;
    void /* unknown type, empty encoding */ loadInProgress;
    void /* unknown type, empty encoding */ _hasFinishedFirstLoad;
    void /* unknown type, empty encoding */ recentCallsDidChangeObserver;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ isFirstLoad;
    void /* unknown type, empty encoding */ $__lazy_storage_$_upcomingSectionItemLimit;
    void /* unknown type, empty encoding */ messageInboxSubscription;
    void /* unknown type, empty encoding */ videoMessageLoadSubscription;
    void /* unknown type, empty encoding */ featureFlags;
}

- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 addedActiveConversation:(id)a1;
- (void)conversationManager:(id)a0 didChangeActivatedLinks:(id)a1;
- (void)conversationManager:(id)a0 linkChangedForConversation:(id)a1;
- (void)conversationManager:(id)a0 removedActiveConversation:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
