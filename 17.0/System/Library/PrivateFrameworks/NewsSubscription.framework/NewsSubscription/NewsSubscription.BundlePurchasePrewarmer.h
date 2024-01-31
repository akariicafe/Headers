@interface NewsSubscription.BundlePurchasePrewarmer : NSObject <FCNetworkReachabilityObserving, FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ _purchase;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ networkReachability;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ purchaseManager;
    void /* unknown type, empty encoding */ deduper;
}

- (void)networkReachabilityDidChange:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
