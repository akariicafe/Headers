@class PKPaymentPass, NSString, PKPaymentMethodActionSectionController, PKPaymentMethodPeerPaymentSectionController, PKPaymentMethodPassesSectionController, PKPaymentRequest;
@protocol PKPaymentMethodSelectionViewControllerDelegate;

@interface PKPaymentMethodSelectionViewController : PKDynamicCollectionViewController <PKPaymentMethodSectionControllerDelegate> {
    PKPaymentRequest *_paymentRequest;
    PKPaymentPass *_selectedPass;
    id<PKPaymentMethodSelectionViewControllerDelegate> _delegate;
    PKPaymentMethodActionSectionController *_actionsController;
    PKPaymentMethodPassesSectionController *_passesController;
    PKPaymentMethodPeerPaymentSectionController *_peerPaymentController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestOpenURL:(id)a0;
- (void)_handlePassUpdate:(id)a0;
- (void)_openPaymentSetupWithNetworkWhitelist:(id)a0 completion:(id /* block */)a1;
- (id)initWithPaymentRequest:(id)a0 selectedPass:(id)a1 paymentMethodName:(id)a2 paymentMethodIdentifier:(id)a3 allowAppleCashToggle:(BOOL)a4 useAppleCashBalance:(BOOL)a5 viewStyle:(long long)a6 delegate:(id)a7;
- (void)performedAddPaymentMethodWithCompletion:(id /* block */)a0;
- (void)selectedPass:(id)a0;
- (void)toggledUseAppleCashBalance:(BOOL)a0;

@end
