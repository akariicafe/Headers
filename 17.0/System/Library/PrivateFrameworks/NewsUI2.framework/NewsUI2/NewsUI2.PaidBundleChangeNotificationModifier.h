@interface NewsUI2.PaidBundleChangeNotificationModifier : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ notificationController;
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ purchaseProvider;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)bundleSubscriptionDidExpire:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
