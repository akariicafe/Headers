@class NSString, PKApplyController, CLInUseAssertion;

@interface PKApplyTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController <PKViewControllerPreflightable> {
    PKApplyController *_applyController;
    NSString *_termsIdentifier;
    CLInUseAssertion *_inUseAssertion;
}

@property (nonatomic) BOOL preflightPDFTerms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)displayTitle;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_terminateSetupFlow;
- (void)htmlTermsDataWithCompletion:(id /* block */)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 termsIdentifier:(id)a3;
- (void)initalTermsDataWithCompletion:(id /* block */)a0;
- (void)pdfTermsDataWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)presentErrorAlert;
- (void)reportAnalyticsForTermsLink:(id)a0;
- (void)termsAccepted:(BOOL)a0 completion:(id /* block */)a1;
- (void)termsShown;

@end
