@interface HealthExposureNotificationUI.OnboardingAnalyticsViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ healthAgencyModel;
    void /* unknown type, empty encoding */ primaryButton;
    void /* unknown type, empty encoding */ secondaryButton;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didTapDone;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)didTapLearnMore;
- (void)didTapPrimaryButton;
- (void)didTapSecondaryButton;

@end
