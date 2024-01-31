@class NSArray, UIViewController;

@interface TeaUI.CardSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {
    void /* unknown type, empty encoding */ primaryCardContainerController;
    void /* unknown type, empty encoding */ commands;
    void /* unknown type, empty encoding */ preservedItems;
    void /* unknown type, empty encoding */ eventManager;
    void /* unknown type, empty encoding */ splitViewFocus;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;

- (BOOL)splitViewController:(id)a0 collapseSecondaryViewController:(id)a1 ontoPrimaryViewController:(id)a2;
- (id)splitViewController:(id)a0 separateSecondaryViewControllerFromPrimaryViewController:(id)a1;
- (BOOL)splitViewController:(id)a0 showDetailViewController:(id)a1 sender:(id)a2;
- (BOOL)splitViewController:(id)a0 showViewController:(id)a1 sender:(id)a2;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (void)dismissalTransitionDidEndWithNotification:(id)a0;
- (void)presentationTransitionDidEndWithNotification:(id)a0;
- (void)toggleResponderPane;
- (void)toggleSideBarVisibility;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
