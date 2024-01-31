@class NSString, PKPaymentProvisioningController, PKSecureElementPass, PKPaymentProvisioningTracker;
@protocol PKPaymentSetupOptionalExpressModeViewControllerFlowDelegate;

@interface PKPaymentSetupOptionalExpressModeViewController : PKExplanationViewController <PKLoadingUIProviding> {
    PKPaymentProvisioningController *_provisioningController;
    PKSecureElementPass *_pass;
    PKPaymentProvisioningTracker *_provisioningTracker;
}

@property (weak, nonatomic) id<PKPaymentSetupOptionalExpressModeViewControllerFlowDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisioningController:(id)a0 secureElementPass:(id)a1 context:(long long)a2;
- (void)proceedToNextScreen;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
