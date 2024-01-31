@interface NewsArticles.ArticleViewerViewController : UIViewController <TSTabBarSplitViewAutoObserver, NANavigationControl> {
    void /* unknown type, empty encoding */ navigationItemStyle;
    void /* unknown type, empty encoding */ observableScrollView;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ pageViewController;
    void /* unknown type, empty encoding */ pageBlueprintProvider;
    void /* unknown type, empty encoding */ blueprintProvider;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ prewarm;
    void /* unknown type, empty encoding */ barCompressionManager;
    void /* unknown type, empty encoding */ barCompressionAnimationFactory;
    void /* unknown type, empty encoding */ articleViewerImpressionManager;
    void /* unknown type, empty encoding */ interstitialAdManager;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ featureManager;
    void /* unknown type, empty encoding */ windowToolbarManager;
    void /* unknown type, empty encoding */ articleToolbarManager;
    void /* unknown type, empty encoding */ featureTransitions;
    void /* unknown type, empty encoding */ hasPresentedFirstPage;
    void /* unknown type, empty encoding */ pageSheetPresentationObserver;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ onPagePresented;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isPagingEnabled;
    void /* unknown type, empty encoding */ shareMenuItemManager;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ pendingPageIdentifier;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (void)enableNavigation:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)smartInvertStatusDidChange;

@end
