@interface _TtC16SiriAudioSupportP33_803E311218F114B89697FFF1DFF8ED2632AppleMediaServicesRequestHandler : NSObject <AMSPurchaseDelegate, AMSPurchaseResponseProtocol>

- (id)init;
- (void)handleAuthenticateRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)handleDialogRequest:(id)a0 purchase:(id)a1 purchaseQueue:(id)a2 completion:(id /* block */)a3;
- (void)purchase:(id)a0 handleAuthenticateRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleDialogRequest:(id)a1 completion:(id /* block */)a2;
- (void)purchase:(id)a0 handleEngagementRequest:(id)a1 completion:(id /* block */)a2;

@end
