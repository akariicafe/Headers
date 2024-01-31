@interface TeaUI.AdsLocationServicesViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ continueCallback;
    void /* unknown type, empty encoding */ manageCallback;
    void /* unknown type, empty encoding */ onboardingFlowDelegate;
}

- (void)didTapContinue;
- (void)didTapManage;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;

@end
