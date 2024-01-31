@interface HRUIClinicalAccountLoginSession : NSObject <ASWebAuthenticationPresentationContextProviding> {
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ presentationAnchor;
    void /* unknown type, empty encoding */ authSession;
    void /* unknown type, empty encoding */ funnelContext;
}

- (id)init;
- (void).cxx_destruct;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;
- (id)initWithAccountStore:(id)a0 presentationAnchor:(id)a1 funnelContext:(long long)a2;
- (BOOL)startLoginWithGateway:(id)a0 loginCancelledHandler:(id /* block */)a1 callbackErrorHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)startReloginToAccount:(id)a0 viewController:(id)a1 profile:(id)a2 loginCancelledHandler:(id /* block */)a3 callbackErrorHandler:(id /* block */)a4 error:(id *)a5;

@end
