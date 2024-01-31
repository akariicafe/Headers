@class NSSet, CLInUseAssertion, PKApplyRequiredFieldsPage, PKApplyController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKApplyTermsVerifyingViewController : PKExplanationViewController {
    PKApplyController *_applyController;
    NSSet *_termsIdentifiers;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    BOOL _isProcessingTerms;
    unsigned long long _featureIdentifier;
    CLInUseAssertion *_inUseAssertion;
    PKApplyRequiredFieldsPage *_applyPage;
}

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)analyticsPageTag;
- (void)_processTerms;
- (void)_showActivationSpinner:(BOOL)a0;
- (void)_terminateSetupFlow;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 termsIdentifiers:(id)a3 applyPage:(id)a4;

@end
