@class UIView, NSString, AKBasicLoginOptionsViewController, AKBasicLoginTableViewCell, UITableView, AKAppleIDAuthenticationInAppContext, NSLayoutConstraint, AKBasicLoginActions;
@protocol AKBasicLoginControllerDelegate;

@interface AKBasicLoginViewController : OBWelcomeController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKBasicLoginPasswordFieldProtocol, AKBasicLoginAnimateProtocol>

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (retain, nonatomic) UIView *loginOptions;
@property (retain, nonatomic) AKBasicLoginOptionsViewController *loginOptionsViewController;
@property (copy, nonatomic) id /* block */ passwordHandler;
@property (nonatomic) BOOL isPasswordFieldVisible;
@property (nonatomic) BOOL isPhoneNumberLoginSupported;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain, nonatomic) AKBasicLoginTableViewCell *usernameCell;
@property (retain, nonatomic) AKBasicLoginTableViewCell *passwordCell;
@property (copy, nonatomic) AKBasicLoginActions *loginActions;
@property (weak, nonatomic) id<AKBasicLoginControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopAnimating;
- (id)_title;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_keyboardDidHide:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)startAnimating;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)_cancelBarButtonItem;
- (id)initWithContext:(id)a0;
- (void)_keyboardWillShow:(id)a0;
- (long long)modalPresentationStyle;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_setContentInset:(double)a0;
- (id)_tableView;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (BOOL)isPresentedModally;
- (id)_passwordCell;
- (void)_cancelPressed:(id)a0;
- (void)_initializeView;
- (void)_signInPressed:(id)a0;
- (id)_formatUsernameAsPhoneNumberIfNeeded:(id)a0;
- (id)_loginOptions;
- (void)_setPasswordHiddenIfNeeded;
- (BOOL)_shouldShowPassword;
- (BOOL)_shouldShowUserName;
- (id)_signInBarButtonItem;
- (void)_updatePlaceholderIfNeeded;
- (id)_usernameCell;
- (void)clearPasswordField;
- (void)initializePasswordCellTextField:(id)a0;
- (void)initializeUsernameCellTextField:(id)a0;
- (id)passwordCellTextField;
- (id)usernameCellTextField;

@end
