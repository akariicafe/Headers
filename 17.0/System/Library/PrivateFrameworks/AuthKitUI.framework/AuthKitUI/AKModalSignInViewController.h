@class UIButton, UIColor, UITextField, NSString, UILabel, UIView, AKRoundedButton;

@interface AKModalSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationInAppContextAlertDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) AKRoundedButton *signInButton;
@property (retain, nonatomic) UIButton *iForgotButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) NSString *customBodyText;
@property (retain, nonatomic) NSString *customButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimating;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)_setupConstraints;
- (void)startAnimating;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (void)_setupViews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)becomeFirstResponder;
- (id)_buttonTitle;
- (void)_createViews;
- (id)_bodyText;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (BOOL)_isSignInAllowed;
- (BOOL)_isUsingPasscodeAuth;
- (void)_passwordRecoveryButtonWasTapped:(id)a0;
- (BOOL)_shouldHidePasswordField;
- (void)_signInButtonTapped:(id)a0;
- (void)_updateViewConstraints;
- (void)displayAlertForContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;

@end
