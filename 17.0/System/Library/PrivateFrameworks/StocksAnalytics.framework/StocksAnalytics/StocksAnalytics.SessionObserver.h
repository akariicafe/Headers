@interface StocksAnalytics.SessionObserver : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ window;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ userContext;
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ watchlistManager;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ kind;
}

- (void)pushOrientationData;
- (id)init;
- (void)dealloc;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void).cxx_destruct;
- (void)bundleSubscriptionDidChange:(id)a0 previousBundleSubscription:(id)a1;
- (void)bundleSubscriptionDidExpire:(id)a0;

@end
