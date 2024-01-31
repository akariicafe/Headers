@interface NewsArticles.SubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding, FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ bundlePurchasePrewarmer;
    void /* unknown type, empty encoding */ observers;
}

@property (nonatomic) void /* unknown type, empty encoding */ bundleSubscriptionStatus;
@property (nonatomic) void /* unknown type, empty encoding */ channelSubscriptionStatus;

- (void)removeObserver:(id)a0;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)addObserver:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)purchaseListChangedWithNotification:(id)a0;

@end
