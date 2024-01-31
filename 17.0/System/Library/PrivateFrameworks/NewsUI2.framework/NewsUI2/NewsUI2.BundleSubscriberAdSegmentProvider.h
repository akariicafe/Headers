@interface NewsUI2.BundleSubscriberAdSegmentProvider : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ needsUpdate;
    void /* unknown type, empty encoding */ subscriptionManager;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
