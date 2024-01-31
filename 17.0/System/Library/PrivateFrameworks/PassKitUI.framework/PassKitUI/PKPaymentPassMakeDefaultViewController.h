@class NSString, PKPaymentProvisioningController, PKSecureElementPass;
@protocol PKPaymentPassMakeDefaultViewControllerDelegate;

@interface PKPaymentPassMakeDefaultViewController : PKExplanationViewController <PKLoadingUIProviding> {
    PKPaymentProvisioningController *_provisioningController;
    PKSecureElementPass *_pass;
}

@property (weak, nonatomic) id<PKPaymentPassMakeDefaultViewControllerDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (void)_makePaymentPassDefault;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisioningController:(id)a0 paymentPass:(id)a1 context:(long long)a2;
- (void)proceedToNextScreen;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
