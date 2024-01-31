@interface SafetyMonitorUI.CheckInOnboardingViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ contact;
    void /* unknown type, empty encoding */ handlerManager;
    void /* unknown type, empty encoding */ isInSettings;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)continueButtonAction;
- (void)notNowButtonAction;

@end
