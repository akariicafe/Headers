@class PKDashboardMoreMenuFactory, _PKAccountSavingsViewController;

@interface PKSavingsAccountViewController : UIViewController {
    _PKAccountSavingsViewController *_viewController;
    PKDashboardMoreMenuFactory *_moreMenuFactory;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;

@end
