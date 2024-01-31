@interface NewsSubscription.PurchasePresenter : NSObject <FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ purchaseStarter;
    void /* unknown type, empty encoding */ familySharingLandingPageLauncher;
    void /* unknown type, empty encoding */ purchasingSpinnerViewControllerFactory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_spinnerViewController;
    void /* unknown type, empty encoding */ urlHandler;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ bundlePurchasePrewarmer;
    void /* unknown type, empty encoding */ postPurchaseOnboardingManager;
    void /* unknown type, empty encoding */ bundleSubscriptionDetectionManager;
    void /* unknown type, empty encoding */ offerManager;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ networkReachability;
    void /* unknown type, empty encoding */ isPresenting;
    void /* unknown type, empty encoding */ onboardingPrewarmer;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ purchaseContext;
}

- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (void)handlePurchaseAddedNotificationWithNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
