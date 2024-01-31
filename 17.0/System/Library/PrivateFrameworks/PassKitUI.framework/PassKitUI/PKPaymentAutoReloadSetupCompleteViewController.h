@class PKPaymentPass, NSString, PKCurrencyAmount, NSObject;
@protocol OS_dispatch_source, PKPaymentDataProvider, PKPaymentAutoReloadSetupCompleteViewControllerDelegate;

@interface PKPaymentAutoReloadSetupCompleteViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentDataProviderDelegate> {
    BOOL _passUpdated;
    PKCurrencyAmount *_amount;
    PKCurrencyAmount *_threshold;
    PKPaymentPass *_pass;
    id<PKPaymentDataProvider> _paymentDataProvider;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _isWaitingOnBalanceUpdate;
    long long _setupMode;
    id<PKPaymentAutoReloadSetupCompleteViewControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPass:(id)a0 amount:(id)a1 threshold:(id)a2 setupMode:(long long)a3 paymentDataProvider:(id)a4 delegate:(id)a5;

@end
