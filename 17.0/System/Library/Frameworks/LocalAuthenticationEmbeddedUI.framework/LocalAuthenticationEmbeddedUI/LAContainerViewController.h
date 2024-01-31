@class UIViewController;

@interface LAContainerViewController : UIViewController

@property (weak, nonatomic) UIViewController *currentViewController;
@property (nonatomic) BOOL canShowInLockScreen;

- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (id)navigationItem;
- (void)_performWithoutAnimations:(id /* block */)a0;
- (void)_transitionFromVC:(id)a0 toVC:(id)a1 transitionStyle:(long long)a2;
- (void)presentViewController:(id)a0 transitionStyle:(long long)a1;

@end
