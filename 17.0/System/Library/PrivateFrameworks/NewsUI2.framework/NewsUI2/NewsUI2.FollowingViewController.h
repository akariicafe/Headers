@interface NewsUI2.FollowingViewController : TUViewController <TSViewControllerTabbable, TSTabBarSplitViewAutoObserver> {
    void /* unknown type, empty encoding */ searchCoordinator;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ blueprintSelectionProvider;
    void /* unknown type, empty encoding */ purchaseController;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ previousSelectedIndexPath;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ newsActivityManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sidebarBarButtonItem;
}

- (void)tabBarControllerDidDoubleTapBarButtonItem:(id)a0;
- (void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(BOOL)a0;
- (void)tabBarSplitViewDidChangeTraitCollectionToTraitCollection:(id)a0;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)contentScrollView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)delete:(id)a0;
- (void)handleSidebarWithSender:(id)a0;

@end
