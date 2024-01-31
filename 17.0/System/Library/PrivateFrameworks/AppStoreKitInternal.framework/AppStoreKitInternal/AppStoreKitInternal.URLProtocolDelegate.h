@interface AppStoreKitInternal.URLProtocolDelegate : NSObject <AMSURLProtocolDelegate, NSURLSessionDelegate> {
    void /* unknown type, empty encoding */ dialogStyle;
}

- (id)init;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleAuthenticateRequest:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)AMSURLSession:(id)a0 task:(id)a1 handleDialogRequest:(id)a2 completion:(id /* block */)a3;

@end
