@class HRVideoPlayerView;

@interface HROnboardingAtrialFibrillationWhatIsViewController : HROnboardingHeroExplanationViewController <HKAdaptiveModalPresented>

@property (retain, nonatomic) HRVideoPlayerView *videoPlayerView;

- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)titleString;
- (id)bodyString;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)setUpUI;
- (long long)accessibilityGroupID;
- (id)buttonTitleString;
- (id)createHeroView;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (long long)stackedButtonViewLastButtonMode;

@end
