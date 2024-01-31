@class CDPRecoveryKeyEntryViewModel, NSString, UITextInputPasswordRules, CDPContext, CDPRecoveryKeyCreateHeaderView, UIButton;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController <UIKeyInput> {
    CDPRecoveryKeyCreateHeaderView *_headerView;
    NSString *_recoveryCode;
    CDPRecoveryKeyEntryViewModel *_context;
    BOOL _keyboardIsVisible;
    double _keyboardHeight;
    UIButton *_enterRecoveryKeyButton;
    CDPContext *_cdpContext;
}

@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)headerView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)keyboardDidChangeFrame:(id)a0;
- (id)specifiers;
- (void)insertText:(id)a0;
- (void).cxx_destruct;
- (void)deleteBackward;
- (id)placeholderText;
- (BOOL)hidesNextButton;
- (void)didFinishEnteringText:(id)a0;
- (id)textEntryCell;
- (id)footerTextLabel;
- (id)_addEscapeOption:(id)a0 forEvent:(id)a1;
- (void)_handleRecoveryKeyValidationWithSuccess:(BOOL)a0 error:(id)a1;
- (id)_makeEventWithName:(id)a0;
- (id)_resetEncryptedDataEscapeOptionForAlert:(id)a0;
- (id)_tryAgainLaterEscapeOptionForAlert:(id)a0;
- (void)cancelFlow:(id)a0;
- (void)continueFlow:(id)a0;
- (void)didTapScanText;
- (void)didTapUseKeyboard:(id)a0;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (id)footerActionButton;
- (void)handleForgotRecoveryKey:(id)a0;
- (void)handleRecoveryKeyEscapeDuringDataRecoveryFlow:(id)a0;
- (id)initWithRecoveryContext:(id)a0 cdpContext:(id)a1;
- (void)showOtherRecoveryOptions:(id)a0;
- (void)skipRecoveryKeyDuringPasswordResetFlow:(id)a0;

@end
