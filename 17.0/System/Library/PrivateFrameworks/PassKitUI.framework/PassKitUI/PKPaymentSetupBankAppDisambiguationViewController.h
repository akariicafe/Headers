@class NSString, PKPaymentSetupBankAppDisambiguationController, PKPaymentSetupProduct;
@protocol PKPaymentSetupBankAppDisambiguationViewControllerFlowDelegate;

@interface PKPaymentSetupBankAppDisambiguationViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupBankAppDisambiguationControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKLoadingUIProviding> {
    PKPaymentSetupBankAppDisambiguationController *_sectionController;
    PKPaymentSetupProduct *_paymentSetupProduct;
    id /* block */ _loadingCompletion;
}

@property (weak, nonatomic) id<PKPaymentSetupBankAppDisambiguationViewControllerFlowDelegate> flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didSelectCameraWithCompletion:(id /* block */)a0;
- (void)didSelectInAppWithCompletion:(id /* block */)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 paymentSetupProduct:(id)a3;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
