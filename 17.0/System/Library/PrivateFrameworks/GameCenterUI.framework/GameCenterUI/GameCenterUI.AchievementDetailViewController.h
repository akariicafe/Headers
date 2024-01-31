@interface GameCenterUI.AchievementDetailViewController : GameCenterUI.BaseViewController <ASCLockupViewDelegate> {
    void /* unknown type, empty encoding */ bootstrapPresenter;
    void /* unknown type, empty encoding */ selectedAchievement;
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ achievement;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ currentTheme;
    void /* unknown type, empty encoding */ loadWithCustomDetent;
}

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewIsAppearing:(BOOL)a0;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (void)didTapDone;
- (void)lockupViewDidFinishRequest:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)shareButtonPressed;
- (void)showAppStoreProductPage:(id)a0;
- (void)updateThePreferredSheetDetents;

@end
