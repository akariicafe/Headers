@class PKPaymentAuthorizationCoordinator, NSString;
@protocol PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationCoordinatorDelegate;

@interface PKPaymentAuthorizationCoordinatorExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
}

@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorDelegate> delegate;
@property (weak, nonatomic) id<PKPaymentAuthorizationCoordinatorPrivateDelegate> privateDelegate;
@property (weak, nonatomic) PKPaymentAuthorizationCoordinator *controller;
@property (retain, nonatomic) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)didEncounterAuthorizationEvent:(unsigned long long)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidPresent;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)a0;
- (void)authorizationWillStart;
- (void)handleConnectionDidOpenWithCompletion:(id /* block */)a0;

@end
