@class NSString, PKAccountTermsAndConditionsController, PKApplyController, PKDynamicProvisioningPageContent;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyCollectionViewController : PKPaymentSetupOptionsViewController <PKApplyFlowControllerProtocol> {
    PKAccountTermsAndConditionsController *_termsController;
}

@property (readonly, nonatomic) PKApplyController *controller;
@property (readonly, weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (retain, nonatomic) PKDynamicProvisioningPageContent *page;
@property (copy, nonatomic) id /* block */ primaryButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)_secondaryButton;
- (void).cxx_destruct;
- (id)currentPage;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)pageTag;
- (void)_cancelPressed;
- (void)_reportViewDidAppear:(BOOL)a0;
- (void)_withdrawApplicationTapped;
- (id)additionalAnalyticsDictionaryForViewAppearing:(BOOL)a0;
- (void)didTapFooterLink:(id)a0;
- (void)didTapLearnMore:(id)a0;
- (void)didTapLink:(id)a0 termsIdentifier:(id)a1 analyticsIdentifier:(id)a2;
- (void)displayDisplayableError:(id)a0;
- (void)handleNextStep;
- (void)handleNextViewController:(id)a0 displayableError:(id)a1;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;
- (void)primaryButtonTapped;
- (void)secondaryButtonTapped;
- (BOOL)shouldDisplayErrorOnWithdraw;
- (void)terminateSetupFlow;

@end
