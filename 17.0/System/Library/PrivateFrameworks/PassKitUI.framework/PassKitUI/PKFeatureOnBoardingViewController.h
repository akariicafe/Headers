@class PKAccount, NSMutableArray, PKAppleCardWelcomeExperiment, PKApplyController, PKPaymentInstallmentConfiguration;

@interface PKFeatureOnBoardingViewController : PKOnBoardingViewController {
    unsigned long long _featureIdentifier;
    BOOL _isMainFeatureOnboardingPage;
    BOOL _featureSupportsAnalytics;
    BOOL _useCompactLayout;
    unsigned long long _layout;
    BOOL _didBeginOnboardingSubject;
    PKAccount *_defaultFeatureAccount;
    BOOL _fetchedDefaultFeatureAccount;
    long long _onboardingContext;
    NSMutableArray *_defaultFeatureAccountCompletions;
    PKAppleCardWelcomeExperiment *_appleCardWelcomeExperiment;
}

@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;
@property (retain, nonatomic) PKApplyController *applyController;

- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_beginReportingIfNecessary;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_handleApplyFlowWithCompletion:(id /* block */)a0;
- (void)explanationViewDidUpdateLayout:(id)a0;
- (id)_analyticsPartialEventDictionaryForButtonTapWithButtonTagKey:(id)a0;
- (id)_appleCardWelcomeExperiment;
- (void)_checkSecurityCapabilities:(unsigned long long)a0 nextStep:(id /* block */)a1;
- (void)_defaultFeatureAccountAnalyticsWithCompletion:(id /* block */)a0;
- (void)_defaultFeatureAccountWithCompletion:(id /* block */)a0;
- (void)_endReportingIfNecessary;
- (void)_handleAccountCredential:(id)a0 completion:(id /* block */)a1;
- (void)_openSecondaryActionItem;
- (void)_openTermsAndConditions;
- (void)_reportAnalyticsSubject:(id)a0 withPartialEventDictionary:(id)a1;
- (void)_reportAnalyticsViewDidAppear:(BOOL)a0;
- (void)_reportCancelTapped;
- (void)_reportContinueTapped;
- (void)_reportRatesAndTermsTapped;
- (id)_subjectForFeature:(unsigned long long)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)handleProductAvailable;
- (void)handleSetupLater;
- (id)initWithParentFlowController:(id)a0 setupDelegate:(id)a1 setupContext:(long long)a2 onboardingContext:(long long)a3 featureIdentifier:(unsigned long long)a4 provisioningController:(id)a5 paymentSetupProduct:(id)a6 currentPage:(id)a7;
- (id)loadHeroImageFromWelcomeExperiment;
- (id)nextOnboardingViewControllerWithPage:(id)a0 product:(id)a1;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)updateForHeroImage;

@end
