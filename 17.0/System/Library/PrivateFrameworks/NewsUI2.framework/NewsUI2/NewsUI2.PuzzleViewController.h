@interface NewsUI2.PuzzleViewController : UIViewController <TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ puzzleModel;
    void /* unknown type, empty encoding */ puzzleEmbedViewController;
    void /* unknown type, empty encoding */ newsActivityManager;
    void /* unknown type, empty encoding */ hardPaywallViewController;
    void /* unknown type, empty encoding */ puzzleRadarReporter;
    void /* unknown type, empty encoding */ historyService;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ publisherLogoProvider;
    void /* unknown type, empty encoding */ sharingActivityItemFactory;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ initialLeftBarButtonItems;
    void /* unknown type, empty encoding */ currentMenuItems;
    void /* unknown type, empty encoding */ currentToolbarMenuItems;
    void /* unknown type, empty encoding */ currentAccessoryView;
    void /* unknown type, empty encoding */ publisherLogo;
    void /* unknown type, empty encoding */ puzzle;
    void /* unknown type, empty encoding */ toolbarTemplateItems;
    void /* unknown type, empty encoding */ didSetInitialTitle;
    void /* unknown type, empty encoding */ initialIsPencilInputExpected;
    void /* unknown type, empty encoding */ paywall;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ currentPuzzleColorTheme;
    void /* unknown type, empty encoding */ $__lazy_storage_$_radarBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_markerBarButtonItem;
    void /* unknown type, empty encoding */ subscribed;
    void /* unknown type, empty encoding */ onboardingManager;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ visibilityEventManager;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(BOOL)a0;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (void)modalHostViewDidAppear;
- (void)modalHostViewDidDisappear;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
