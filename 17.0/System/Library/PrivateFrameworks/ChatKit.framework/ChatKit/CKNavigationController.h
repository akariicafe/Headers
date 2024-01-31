@interface CKNavigationController : UINavigationController

- (BOOL)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (id)preferredFocusEnvironments;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)prefersStatusBarHidden;

@end
