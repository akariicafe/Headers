@interface _TtCV20AppleMediaServicesUI7WebView11Coordinator : NSObject <AMSUIWebDelegate> {
    void /* unknown type, empty encoding */ parent;
}

- (id)init;
- (void)webViewController:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)webViewController:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)webViewController:(id)a0 didEncodeNetworkRequest:(id)a1;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;

@end
