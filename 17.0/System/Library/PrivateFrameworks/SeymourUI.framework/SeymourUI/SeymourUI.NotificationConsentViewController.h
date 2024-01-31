@interface SeymourUI.NotificationConsentViewController : UIViewController {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ bodyLabel;
    void /* unknown type, empty encoding */ continueButton;
    void /* unknown type, empty encoding */ contentAvailability;
    void /* unknown type, empty encoding */ fallbackLocalizationBundle;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ continueButtonHandler;
    void /* unknown type, empty encoding */ _fitnessPlusNotificationSettingsEnabled;
}

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapContinueButton;

@end
