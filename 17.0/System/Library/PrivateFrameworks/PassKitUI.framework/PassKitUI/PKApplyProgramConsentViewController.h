@class NSString, CLInUseAssertion;

@interface PKApplyProgramConsentViewController : PKApplyExplanationViewController {
    CLInUseAssertion *_inUseAssertion;
    NSString *_pathTermsIdentifier;
    NSString *_pathIdentifier;
}

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_termsAccepted:(BOOL)a0;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 applyPage:(id)a3;

@end
