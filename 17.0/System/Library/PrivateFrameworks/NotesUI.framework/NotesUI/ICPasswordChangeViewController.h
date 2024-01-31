@class UIView, UIBarButtonItem, NSArray, ICScrollViewKeyboardResizer, ICAccountPassphraseManager, NSString, ICPasswordUtilities, UITextField, NSLayoutConstraint, UILabel, UIScrollView;

@interface ICPasswordChangeViewController : UIViewController <ICScrollViewKeyboardResizerDelegate, UITextFieldDelegate>

@property (retain, nonatomic) ICAccountPassphraseManager *passphraseManager;
@property (retain, nonatomic) NSArray *textBackgroundViews;
@property (weak, nonatomic) UIView *headerBackground;
@property (retain, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) ICPasswordUtilities *passwordUtilities;
@property (weak, nonatomic) UILabel *headerLabel;
@property (weak, nonatomic) UILabel *oldPasswordLabel;
@property (weak, nonatomic) UILabel *passwordLabel;
@property (weak, nonatomic) UILabel *verifyLabel;
@property (weak, nonatomic) UILabel *hintLabel;
@property (weak, nonatomic) UILabel *warningLabel;
@property (weak, nonatomic) UITextField *oldPasswordTextField;
@property (weak, nonatomic) UITextField *passwordTextField;
@property (weak, nonatomic) UITextField *verifyTextField;
@property (weak, nonatomic) UITextField *hintTextField;
@property (retain, nonatomic) NSArray *orderedTextFields;
@property (weak, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) UIBarButtonItem *cancelButton;
@property (weak, nonatomic) NSLayoutConstraint *oldPasswordHeightConstraint;
@property (nonatomic) BOOL isSetupForChangePassword;
@property (nonatomic) BOOL didAuthenticateWithBiometrics;
@property (nonatomic) long long incorrectPasswordAttempts;
@property (readonly, nonatomic) BOOL passwordAndVerifyTextFieldsMatch;
@property (nonatomic) BOOL didAttemptToSubmitWithoutHint;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL usingLargerAXSizes;
@property (retain, nonatomic) NSArray *defaultConstraints;
@property (retain, nonatomic) NSArray *alternateConstraintsForAXLargerTextSizes;
@property (readonly, nonatomic) UITextField *firstResponderTextField;
@property (nonatomic) BOOL isInSettings;
@property (nonatomic) BOOL isSettingInitialPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)contentSizeCategoryDidChange;
- (void)updateFonts;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)cancelButtonPressed:(id)a0;
- (void)setupAccessibility;
- (void)setUpNavigationBar;
- (void)doneButtonPressed:(id)a0;
- (void)resetTextFields;
- (double)consumedBottomAreaForResizer:(id)a0;
- (id)disclaimerAttributedString;
- (void)dismissKeyboardIfNeeded;
- (void)dismissWithResult:(unsigned long long)a0;
- (id)keyboardResizerScrollView;
- (void)setUpForAddingPasswordWithAccount:(id)a0;
- (void)setUpForChangePasswordWithAccount:(id)a0 didAuthenticateWithBiometrics:(BOOL)a1;
- (BOOL)validateInput;

@end
