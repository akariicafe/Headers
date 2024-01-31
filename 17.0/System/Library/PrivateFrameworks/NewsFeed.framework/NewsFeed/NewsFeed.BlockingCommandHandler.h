@interface NewsFeed.BlockingCommandHandler : NSObject <FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ sceneProvider;
    void /* unknown type, empty encoding */ appConfigManager;
}

- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (id)init;
- (void).cxx_destruct;

@end
