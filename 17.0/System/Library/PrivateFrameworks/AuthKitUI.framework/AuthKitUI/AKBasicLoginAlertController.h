@class NSString, AKBasicLoginSecondFactorActions, AKBasicLoginActions;
@protocol NSObject, AKBasicLoginControllerDelegate;

@interface AKBasicLoginAlertController : UIAlertController <UITextFieldDelegate, AKBasicLoginPasswordFieldProtocol, AKSecondFactorCodeEntry, AKBasicLoginAnimateProtocol> {
    long long _alertStyle;
    id<NSObject> _didEnterCodeObserver;
}

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *authenticateTitle;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *authenticateButtonTitle;
@property (copy, nonatomic) NSString *cancelButtonTitle;
@property (copy, nonatomic) NSString *generatedCode;
@property (nonatomic) long long alertStyle;
@property (copy, nonatomic) AKBasicLoginActions *loginActions;
@property (copy, nonatomic) AKBasicLoginSecondFactorActions *secondFactorActions;
@property (weak, nonatomic) id<AKBasicLoginControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimating;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)startAnimating;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)disablesAutomaticKeyboardDismissal;
- (void)_beginObservingDidEnterCodeNotifications;
- (void)_didEnterCode:(id)a0;
- (void)_dismissAndShowiForgot:(id)a0;
- (void)_endObservingDidEnterCodeNotifications;
- (id)_passwordField;
- (void)_passwordFieldDidChange:(id)a0;
- (void)_setupAuthenticateAndCancelButtons;
- (void)_setupAuthenticateAndCancelButtonsWithIForgot:(BOOL)a0;
- (void)_setupViewControllerForAlertStyle;
- (void)_setupViewControllerForDefaultStyle;
- (void)_setupViewControllerForIForgotStyle;
- (void)_setupViewControllerForNonEditableUsernameFieldStyle;
- (void)_setupViewControllerForSecondFactorEntryStyle;
- (void)_setupViewControllerForUserOrCreateAppleIDStyle;
- (void)_syncUsernameAndPasswordPropertiesWithTextFieldContent;
- (id)_wrappedCancelAction;
- (void)clearPasswordField;
- (void)clearSecondFactorEntry;
- (id)initWithAlertStyle:(long long)a0;
- (void)jiggleAView;
- (void)setPasscodeFieldDisabled:(BOOL)a0;

@end
