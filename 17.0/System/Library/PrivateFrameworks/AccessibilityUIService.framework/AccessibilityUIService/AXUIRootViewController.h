@interface AXUIRootViewController : UIViewController

- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)description;
- (BOOL)_canShowWhileLocked;
- (BOOL)accessibilityPostScreenChangedForChildViewController:(id)a0 isAddition:(BOOL)a1;

@end
