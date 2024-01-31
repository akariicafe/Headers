@interface HealthRecordsUI.ImprovementDataCollectionOptInViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ onboardingSession;
    void /* unknown type, empty encoding */ account;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)hxui_primaryFooterButtonTapped;
- (void)hxui_secondaryFooterButtonTapped;
- (void)accessoryButtonTapped;

@end
