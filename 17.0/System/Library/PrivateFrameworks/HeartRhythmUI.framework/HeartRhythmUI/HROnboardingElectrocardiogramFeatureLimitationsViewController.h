@interface HROnboardingElectrocardiogramFeatureLimitationsViewController : HRSpeedBumpViewController <HKAdaptiveModalPresented>

- (void)setDelegate:(id)a0;
- (void)viewControllerDidLeaveAdaptiveModal;
- (void)viewControllerWillEnterAdaptiveModal;
- (id)initForOnboarding:(BOOL)a0 upgradingFromAlgorithmVersion:(long long)a1;
- (BOOL)_hasOnboardedBeforeWithStore:(id)a0;
- (id)_makeSpeedBumpItemForUpdateOnboarding:(BOOL)a0;

@end
