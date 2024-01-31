@interface BFFFinishSetupModalNavigationController : BFFNavigationController

@property (nonatomic) BOOL isPad;

- (long long)modalPresentationStyle;
- (id)childViewControllerForStatusBarStyle;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)isModalInPresentation;

@end
