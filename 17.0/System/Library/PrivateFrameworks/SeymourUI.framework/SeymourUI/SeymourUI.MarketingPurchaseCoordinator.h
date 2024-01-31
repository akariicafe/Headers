@interface SeymourUI.MarketingPurchaseCoordinator : NSObject <AMSPurchaseDelegate> {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ purchaseHandler;
}

- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
