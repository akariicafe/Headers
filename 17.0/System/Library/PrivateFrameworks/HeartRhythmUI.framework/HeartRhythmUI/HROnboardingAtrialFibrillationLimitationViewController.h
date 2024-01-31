@interface HROnboardingAtrialFibrillationLimitationViewController : HRSpeedBumpViewController <HKAdaptiveModalPresented>

+ (id)makeSpeedBumpItem;

- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;

@end
