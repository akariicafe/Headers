@class NSString, PKPayLaterSetupFlowController, PKPayLaterDynamicContentPage, PKApplyController, PKAccountTermsAndConditionsController;

@interface PKPayLaterExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKViewControllerPreflightable> {
    PKPayLaterSetupFlowController *_setupController;
    PKApplyController *_applyController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    PKPayLaterDynamicContentPage *_languageDisclosureDynamicContentPage;
    PKAccountTermsAndConditionsController *_termsController;
    BOOL _didBeginAnalyticsReporter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)analyticsDictionaryWithAdditionalDictionary:(id)a0 pageTag:(id)a1 setupController:(id)a2;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_genericError;
- (id)_analyticsDictionaryWithAdditionalDictionary:(id)a0;
- (void)_reportAnalyticsBackPressed;
- (void)_setDynamicContentPage;
- (void)_showLanguageDisclosureIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithSetupFlowController:(id)a0;

@end
