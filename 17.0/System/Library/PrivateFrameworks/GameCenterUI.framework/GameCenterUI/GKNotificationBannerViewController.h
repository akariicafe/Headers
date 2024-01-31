@class NSLayoutConstraint, GKNotificationBannerView;

@interface GKNotificationBannerViewController : UIViewController

@property (retain, nonatomic) GKNotificationBannerView *bannerView;
@property (nonatomic) BOOL bannerVisible;
@property (nonatomic) BOOL bannerAnimating;
@property (retain, nonatomic) NSLayoutConstraint *bannerYPositionConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bannerWidthConstraint;

- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)addConstraintsForTVOSBannerView;
- (struct CGPoint { double x0; double x1; })_hiddenBannerPosition:(struct CGSize { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_visibleBannerCenterPosition:(struct CGSize { double x0; double x1; })a0;
- (void)addBannerView:(id)a0;
- (void)addConstraintsForBannerView;
- (double)bannerWidthForViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)handleWindowPan:(id)a0;
- (void)handleWindowSingleTap:(id)a0;
- (void)hideBannerQuickly:(BOOL)a0;
- (void)showCurrentBanner;
- (BOOL)useShortBanner;
- (BOOL)windowPointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)windowTouchesEnded:(id)a0 withEvent:(id)a1;

@end
