@class NSString, PKPayLaterSetupFlowController, PKPayLaterDynamicContentPage, UIBarButtonItem;

@interface PKPayLaterSetupViewController : PKPaymentSetupOptionsViewController <PKPayLaterViewControllerDelegate, PKPayLaterSectionControllerDelegate> {
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    BOOL _nextButtonHidden;
    unsigned long long _dynamicContentPageType;
}

@property (readonly, nonatomic) PKPayLaterSetupFlowController *setupController;
@property (readonly, nonatomic) PKPayLaterDynamicContentPage *dynamicContentPage;
@property (nonatomic) long long rightBarButton;
@property (nonatomic) long long leftBarButton;
@property (nonatomic) BOOL disableRightBarButton;
@property (nonatomic) BOOL disableLeftBarButton;
@property (nonatomic) BOOL previousViewControllerIsApplyFlow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)popViewControllerAnimated:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cancelButtonTapped;
- (void)dismissSetupFlowWithCompletion:(id /* block */)a0;
- (id)pageTag;
- (id)_buttonForBarButtonType:(long long)a0;
- (void)_handlePostApprovalScreenSteps;
- (void)_presentPayLaterPassIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_reportAnalyticsBackPressed;
- (void)_reportViewDidAppear:(BOOL)a0;
- (void)_showCancelAddingToWalletAlertWithCancelBlock:(id /* block */)a0 continueBlock:(id /* block */)a1;
- (id)additionalAnalyticsDictionary;
- (void)didTapHyperLink:(id)a0;
- (id)initWithSetupFlowController:(id)a0 dynamicContentPageType:(unsigned long long)a1;
- (id)navigationControllerViewControllers;
- (void)nextButtonTapped;
- (void)provisionPayLaterPassFromApprovalScreen;
- (void)reloadNavigationBarHeaderFooterLayout;
- (void)reportAnalyticsEvent:(id)a0;

@end
