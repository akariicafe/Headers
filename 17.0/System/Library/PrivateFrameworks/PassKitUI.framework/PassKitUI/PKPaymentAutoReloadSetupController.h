@class PKPaymentPass, NSString, PKServiceProviderPurchase, NSObject, PKCurrencyAmount, PKThresholdTopUpSetupViewController, PKPaymentPassAction;
@protocol OS_dispatch_source, PKPaymentDataProvider, PKPaymentAutoReloadSetupControllerDelegate;

@interface PKPaymentAutoReloadSetupController : NSObject <PKThresholdTopUpSetupViewControllerDelegate, PKPaymentAutoReloadSetupCompleteViewControllerDelegate, PKPaymentDataProviderDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKCurrencyAmount *_currentAmount;
    PKCurrencyAmount *_currentThreshold;
    NSString *_currency;
    NSString *_originalPaymentMethodIdentifier;
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
    PKServiceProviderPurchase *_completedAutoReload;
    BOOL _isWalletAutoTopEnabled;
    BOOL _passUpdated;
    long long _viewStyle;
    id<PKPaymentDataProvider> _paymentDataProvider;
    long long _setupMode;
    id<PKPaymentAutoReloadSetupControllerDelegate> _delegate;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_source> *_timer;
}

@property (retain, nonatomic) PKThresholdTopUpSetupViewController *thresholdTopUpSetupViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldOfferAutoReloadForPass:(id)a0;

- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePurchase:(id)a1 completion:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (id)_createThresholdTopUpSetupViewController;
- (void)_didUpdateAutoReloadWithAmount:(id)a0 threshold:(id)a1 paymentMethodIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_dismissViewController:(id)a0;
- (void)_showGenericErrorAlert:(id /* block */)a0;
- (void)autoReloadSetupCompleteViewControllerDidComplete;
- (id)initWithPass:(id)a0 paymentDataProvider:(id)a1 provisioningController:(id)a2 viewStyle:(long long)a3 delegate:(id)a4;
- (id)initWithPass:(id)a0 paymentDataProvider:(id)a1 viewStyle:(long long)a2 delegate:(id)a3;
- (id)initWithPass:(id)a0 provisioningController:(id)a1 viewStyle:(long long)a2 delegate:(id)a3;
- (id)paymentRequest:(id)a0 threshold:(id)a1 paymentMethodIdentifier:(id)a2;
- (void)presentAutoTopUpFlow;
- (void)thresholdTopUpDidSelectCancel:(id)a0;
- (void)thresholdTopUpDidSelectContinue:(id)a0 completion:(id /* block */)a1;
- (void)thresholdTopUpDidSelectUpdate:(id)a0 completion:(id /* block */)a1;
- (void)thresholdTopUpPerformCancel:(id)a0 completion:(id /* block */)a1;

@end
