@class PKAccountService, NSString, PKAnimatedNavigationBarTitleView, UIView, PKAccountTermsAndConditionsController, PKAccount;

@interface PKPayLaterViewController : PKPaymentSetupOptionsViewController <PKAccountServiceObserver, PKPayLaterSectionControllerDelegate, PKPayLaterViewControllerDelegate> {
    PKAnimatedNavigationBarTitleView *_navBarImageView;
    double _navBarAnimationProgress;
    UIView *_footerView;
    PKAccountTermsAndConditionsController *_termsController;
}

@property (retain, nonatomic) PKAccount *payLaterAccount;
@property (readonly, nonatomic) PKAccountService *accountService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (double)headerHeight;
- (void)popViewControllerAnimated:(BOOL)a0;
- (void)dealloc;
- (void)setFooterView:(id)a0;
- (void)accountChanged:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)accountFinancingPlanUpdated:(id)a0 oldFinancingPlan:(id)a1 accountIdentifier:(id)a2;
- (void)accountFinancingPlanAdded:(id)a0 accountIdentifier:(id)a1;
- (void)accountFinancingPlanRemoved:(id)a0 accountIdentifier:(id)a1;
- (id)initWithPayLaterAccount:(id)a0;
- (id)pageTag;
- (void)_cancelButtonTapped;
- (void)_layoutFooter;
- (void)_reportViewDidAppear:(BOOL)a0;
- (void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)a0;
- (id)additionalAnalyticsDictionary;
- (void)didAddFinancingPlan:(id)a0;
- (void)didRemoveFinancingPlan:(id)a0;
- (void)didTapHyperLink:(id)a0;
- (void)didUpdateFinancingPlan:(id)a0;
- (void)didUpdatePayLaterAccount:(id)a0;
- (BOOL)disablesAutomaticDismissalUponEnteringBackground;
- (double)footerViewContentHeight;
- (id)navigationBarAnimationText;
- (id)navigationBarAnimationView;
- (id)navigationControllerViewControllers;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)reloadNavigationBarHeaderFooterLayout;
- (void)reportAnalyticsEvent:(id)a0;

@end
