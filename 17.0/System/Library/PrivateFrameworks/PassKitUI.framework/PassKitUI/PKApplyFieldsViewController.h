@class NSString, PKApplyController, PKApplyRequiredFieldsPage;

@interface PKApplyFieldsViewController : PKDynamicProvisioningFieldsPageViewController <PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol> {
    PKApplyController *_controller;
    PKApplyRequiredFieldsPage *_applyPage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)currentPage;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_handleNextStep;
- (void)_analyticsReportError:(id)a0;
- (void)_analyticsReportRowTapForFieldCell:(id)a0;
- (void)_completeInWalletLater;
- (void)_featureApplicationUpdated;
- (void)_handleNextViewController:(id)a0 displayableError:(id)a1 terminationHandler:(id /* block */)a2;
- (void)_terminateFlow;
- (void)_withdrawApplicationTapped;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)didTapFooterLink:(id)a0;
- (void)didTapLink:(id)a0 termsIdentifier:(id)a1 analyticsIdentifier:(id)a2;
- (void)fieldCellDidTapButton:(id)a0;
- (BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)a0;
- (void)handleCancelTapped;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 applyPage:(id)a2;
- (unsigned long long)onPresentationRemoveViewControllersAfterMarker;
- (BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;

@end
