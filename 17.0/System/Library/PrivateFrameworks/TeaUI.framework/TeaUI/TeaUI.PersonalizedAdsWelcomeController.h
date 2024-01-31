@interface TeaUI.PersonalizedAdsWelcomeController : OBWelcomeController {
    void /* unknown type, empty encoding */ adPrivacyHeaderIconView;
    void /* unknown type, empty encoding */ buttonStyle;
    void /* unknown type, empty encoding */ turnOnCallback;
    void /* unknown type, empty encoding */ turnOffCallback;
    void /* unknown type, empty encoding */ onboardingFlowDelegate;
}

- (void)didTapLearnMore;
- (void)didTapTurnOff;
- (void)didTapTurnOn;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;

@end
