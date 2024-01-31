@interface NewsSubscription.WebOptinFlowManager : NSObject <SXPostActionHandler> {
    void /* unknown type, empty encoding */ appConfigurationManager;
    void /* unknown type, empty encoding */ networkReachability;
    void /* unknown type, empty encoding */ tagController;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ receiptRefresher;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ purchasingSpinnerViewControllerFactory;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ router;
    void /* unknown type, empty encoding */ webAccessOptInProvider;
    void /* unknown type, empty encoding */ postActionHandlerManager;
    void /* unknown type, empty encoding */ sceneProvider;
    void /* unknown type, empty encoding */ hideMyEmailService;
    void /* unknown type, empty encoding */ siwaCredentialUploader;
    void /* unknown type, empty encoding */ postUpsellAction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_verifyingSpinnerViewController;
}

- (void)handledAction:(id)a0 state:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
