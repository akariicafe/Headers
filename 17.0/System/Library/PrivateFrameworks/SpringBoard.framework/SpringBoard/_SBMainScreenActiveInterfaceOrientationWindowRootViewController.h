@class UIViewController;

@interface _SBMainScreenActiveInterfaceOrientationWindowRootViewController : SBFTouchPassThroughViewController

@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (weak, nonatomic) UIViewController *contentViewController;

- (BOOL)shouldAutorotate;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(BOOL)a0;

@end
