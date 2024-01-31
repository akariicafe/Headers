@class UINavigationController, NSString, PKContinuityPaymentService, PKRemotePaymentRequest, PKContinuityPaymentViewController;

@interface PKContinuityPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentAuthorizationHostProtocol, PKContinuityPaymentServiceDelegate, PKPaymentAuthorizationHostProtocol> {
    PKContinuityPaymentViewController *_continuityViewController;
    UINavigationController *_navigationController;
    PKRemotePaymentRequest *_remoteRequest;
    PKContinuityPaymentService *_continuityService;
    BOOL _hasAuthorizedPayment;
    BOOL _hasSentCancelPaymentRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isSecureForRemoteViewService;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)_invalidate;
- (BOOL)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)a0;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)a0;
- (void)authorizationDidAuthorizePayment:(id)a0;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)a0;
- (void)authorizationDidAuthorizePurchase:(id)a0;
- (void)authorizationDidChangeCouponCode:(id)a0;
- (void)authorizationDidFinishWithError:(id)a0;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)a0;
- (void)authorizationDidSelectShippingAddress:(id)a0;
- (void)authorizationDidSelectShippingMethod:(id)a0;
- (void)authorizationWillStart;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)a0;
- (void)didReceivePaymentClientUpdate:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)didReceivePaymentResult:(id)a0 forRemotePaymentRequest:(id)a1;
- (void)_cancelPayment;
- (void)_presentEnrollAccessibilityIntentAlert;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)a0;

@end
