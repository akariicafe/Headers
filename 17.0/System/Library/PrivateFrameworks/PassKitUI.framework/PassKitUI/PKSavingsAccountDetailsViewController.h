@class UIImageView, PKAnimatedNavigationBarTitleView, _PKAccountSavingsDetailsViewController;

@interface PKSavingsAccountDetailsViewController : UIViewController {
    _PKAccountSavingsDetailsViewController *_viewController;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    UIImageView *_titleIcon;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
