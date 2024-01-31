@class HRStackedButtonView, UILabel, NSLayoutConstraint, HRVideoPlayerView;

@interface HROnboardingElectrocardiogramExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, HKAdaptiveModalPresented>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_bodyFont;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)setUpConstraints;
- (void)setUpUI;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (void)stackedButtonView:(id)a0 didTapButtonAtIndex:(long long)a1;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (double)_titleBottomToVideoViewTop;
- (double)_videoViewBottomToBodyFirstBaseline;

@end
