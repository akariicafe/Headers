@class PSRootController;
@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController

@property (retain, nonatomic) PSRootController *containerNavigationController;
@property (weak, nonatomic) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;

- (id)categoryController;
- (void)setViewControllers:(id)a0;
- (void)popRecursivelyToRootController;
- (void)setupControllerForToolbar:(id)a0;
- (id)childViewControllerForStatusBarStyle;
- (void)showInitialViewController:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
