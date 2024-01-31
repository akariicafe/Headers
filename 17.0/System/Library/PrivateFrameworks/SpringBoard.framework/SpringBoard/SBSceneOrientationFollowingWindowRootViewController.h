@class SBIsolatedSceneOrientationFollowingWrapperViewController, UIView;

@interface SBSceneOrientationFollowingWindowRootViewController : UIViewController

@property (weak, nonatomic) SBIsolatedSceneOrientationFollowingWrapperViewController *hostingViewController;
@property (retain, nonatomic) UIView *overlayContentView;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithHostingViewController:(id)a0;

@end
