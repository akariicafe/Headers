@interface NewsUI2.SportsSessionObserver : NSObject <FCUserInfoObserving, FCBundleSubscriptionChangeObserver, FCSubscriptionObserving> {
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ syncTracker;
}

- (id)init;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void).cxx_destruct;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)subscriptionController:(id)a0 didAddTags:(id)a1 changeTags:(id)a2 moveTags:(id)a3 removeTags:(id)a4 subscriptionType:(unsigned long long)a5;
- (void)userInfoDidChangeSportsUserID:(id)a0;
- (void)pushUserSubscriptionContextData;

@end
