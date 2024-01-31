@interface SeymourUI.RootViewController : UIViewController {
    void /* unknown type, empty encoding */ resignActiveObserver;
    void /* unknown type, empty encoding */ currentContentInsetBehavior;
    void /* unknown type, empty encoding */ engagementPresentability;
    void /* unknown type, empty encoding */ isTransitioningContentInset;
    void /* unknown type, empty encoding */ visibility;
    void /* unknown type, empty encoding */ accountFitnessSettingsProvider;
    void /* unknown type, empty encoding */ controllerDisplayCoordinator;
    void /* unknown type, empty encoding */ avatarSettingsProvider;
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ catalogClient;
    void /* unknown type, empty encoding */ contentInsetInitialBehavior;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ engagementPresentationCoordinator;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ marketingHostedContentCoordinator;
    void /* unknown type, empty encoding */ marketingMessageViewControllerHandler;
    void /* unknown type, empty encoding */ marketingMetricFieldsProvider;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ serviceSubscriptionCache;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ upNextQueueButtonPresenter;
    void /* unknown type, empty encoding */ upNextQueueClient;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ purchaseCoordinator;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ accountButton;
    void /* unknown type, empty encoding */ largeTitleUpNextQueueButton;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ upNextQueueButton;
    void /* unknown type, empty encoding */ hasContentInsetChanged;
    void /* unknown type, empty encoding */ isBeyondScrollBoundary;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (void)accountButtonTapped:(id)a0;

@end
