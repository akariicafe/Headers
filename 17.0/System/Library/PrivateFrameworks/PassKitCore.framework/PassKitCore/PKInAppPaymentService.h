@class PKXPCService;

@interface PKInAppPaymentService : NSObject {
    PKXPCService *_remoteService;
}

- (id)_remoteObjectProxy;
- (id)init;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)cardDataForMerchantIdentifier:(id)a0 countryCode:(id)a1 completion:(id /* block */)a2;
- (void)cardsAvailableForAMPWithCountryCode:(id)a0 completion:(id /* block */)a1;
- (long long)cardsAvailableForAMPWithCountryCode:(id)a0;
- (void)enrollPaymentPassWithUniqueIdentifier:(id)a0 merchantSession:(id)a1 completion:(id /* block */)a2;
- (void)hasValidSecurityConfigurationWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)merchantStatusCheck:(id)a0 merchantDomain:(id)a1 sourceApplicationSecondaryIdentifier:(id)a2 completion:(id /* block */)a3;
- (id)paymentHardwareStatusWithType:(unsigned long long)a0;
- (void)paymentHardwareStatusWithType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)paymentServicesMerchantURLForAPIType:(long long)a0 completion:(id /* block */)a1;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(id)a0 forHostIdentifier:(id)a1 hostSceneIdentifier:(id)a2 hostSceneBundleIdentifier:(id)a3 orientation:(id)a4 intentTriggered:(BOOL)a5 completion:(id /* block */)a6;
- (void)registerPaymentListenerEndpoint:(id)a0 forHostIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)secureElementStatus:(unsigned long long *)a0;
- (void)secureElementStatusWithCompletion:(id /* block */)a0;
- (void)validatePayLaterMerchandisingConfiguration:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;

@end
