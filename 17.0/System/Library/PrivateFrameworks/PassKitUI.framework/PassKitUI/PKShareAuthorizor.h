@class NSString, PKPaymentAuthorizationCoordinator, LAContext;

@interface PKShareAuthorizor : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    LAContext *_context;
    id /* block */ _completion;
    id /* block */ _authorizeHandler;
    NSString *_presentationSceneIdentifier;
    BOOL _resultSuccess;
    BOOL _isAuthorizationHandlerRunning;
    BOOL _didFinish;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_authorizeDeviceOwnerWithAuthHandler:(id /* block */)a0 completion:(id /* block */)a1 context:(id)a2 invalidateContext:(BOOL)a3;
+ (void)authorizeDeviceOwnerWithAuthHandler:(id /* block */)a0 completion:(id /* block */)a1;
+ (void)authorizeForRequest:(id)a0 presentationSceneIdentifier:(id)a1 authHandler:(id /* block */)a2 completion:(id /* block */)a3;

- (void)dealloc;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeContextWithHandler:(id /* block */)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)a0;
- (void)_authorizeForRequest:(id)a0 presentationSceneIdentifier:(id)a1 authHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_handleDidFinishIfNeeded;

@end
