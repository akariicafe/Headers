@class NSString, UIButton, UILabel;

@interface PSKeychainSyncSecurityCodeController : PSKeychainSyncTextEntryController {
    UIButton *_footerButton;
    UILabel *_footerLabel;
    NSString *_generatedCode;
    double _keyboardHeight;
}

@property (retain, nonatomic) NSString *firstPasscodeEntry;
@property (nonatomic) int mode;
@property (nonatomic) int securityCodeType;
@property (nonatomic) BOOL showsAdvancedSettings;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)specifiers;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (id)placeholderText;
- (id)_configureTextEntryCell;
- (void)animatePasscodeFieldLeft:(BOOL)a0;
- (void)didFinishEnteringText:(id)a0;
- (void)dismissAlerts;
- (void)forgotSecurityCode;
- (void)generateRandomCode;
- (void)showAdvancedOptions;
- (id)textEntryCell;
- (Class)textEntryCellClass;
- (void)textEntryViewDidChange:(id)a0;
- (void)updateNextButton;

@end
