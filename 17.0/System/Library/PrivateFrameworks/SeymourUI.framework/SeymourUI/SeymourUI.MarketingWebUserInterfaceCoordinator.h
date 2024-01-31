@interface SeymourUI.MarketingWebUserInterfaceCoordinator : NSObject <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ presentingViewController;
}

- (id)init;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)webViewController:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
