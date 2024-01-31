@interface NewsSubscription.BundleSubscriptionDetectionManager : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ completionEventManager;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ postPurchaseOnboardingManager;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ presentationOperationManager;
    void /* unknown type, empty encoding */ userInfo;
}

- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0 hideBundleDetectionUI:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
