@interface HealthExposureNotificationUI.VerificationCodeEntryViewController : OBBaseWelcomeController {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ healthAgencyModel;
    void /* unknown type, empty encoding */ regionSupportsWebReport;
    void /* unknown type, empty encoding */ statusView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ entryView;
    void /* unknown type, empty encoding */ contentLayoutGuideBottomConstraint;
    void /* unknown type, empty encoding */ itemStackTopConstraint;
    void /* unknown type, empty encoding */ keyboardHeight;
}

- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapCancel;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)didTapHelpButton;

@end
