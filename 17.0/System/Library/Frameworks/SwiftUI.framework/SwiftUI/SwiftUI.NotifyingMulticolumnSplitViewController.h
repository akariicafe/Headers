@class UIViewController;

@interface SwiftUI.NotifyingMulticolumnSplitViewController : UISplitViewController

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;

+ (BOOL)_isFromSwiftUI;

- (void)showDetailViewController:(id)a0 sender:(id)a1;
- (id)initWithStyle:(long long)a0;
- (id)makeDetailNavigationControllerWithRoot:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;

@end
