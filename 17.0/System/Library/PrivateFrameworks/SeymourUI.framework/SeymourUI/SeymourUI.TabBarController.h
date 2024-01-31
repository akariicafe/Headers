@interface SeymourUI.TabBarController : UITabBarController {
    void /* unknown type, empty encoding */ paletteView;
    void /* unknown type, empty encoding */ miniPlayerViewController;
    void /* unknown type, empty encoding */ miniPlayerHostPresenter;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ subscriptionToken;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)initWithCoder:(id)a0;

@end
