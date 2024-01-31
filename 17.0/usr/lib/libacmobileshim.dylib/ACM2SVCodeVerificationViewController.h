@class UIView, NSString, NSArray, UINavigationController, UIButton, UITextField, NSLayoutConstraint, UILabel, UIColor;
@protocol ACM2SVCodeVerificationViewControllerDelegate;

@interface ACM2SVCodeVerificationViewController : UIViewController <UINavigationControllerDelegate, UITextFieldDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *digitPanel;
@property (retain, nonatomic) UITextField *verificationCodeTextField;
@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) UIButton *sendAnotherCodeButton;
@property (retain, nonatomic) NSArray *digitViews;
@property (retain, nonatomic) NSLayoutConstraint *digitPanelWidthConstraint;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id applicationActivationObserver;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (nonatomic) id<ACM2SVCodeVerificationViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long suggestedStatusBarStyle;
@property (nonatomic) unsigned long long passcodeLength;
@property (nonatomic) BOOL canResendTheCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldAutorotate;
- (float)navigationBarHeight;
- (void)viewWillAppear:(BOOL)a0;
- (void)focus;
- (void)reset;
- (void)dealloc;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithDelegate:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)cancelAction:(id)a0;
- (void)buildDigitViews;
- (void)buildConstraints;
- (void)buildHorizontalConstraints;
- (void)buildVerticalConstraints;
- (void)disableControls:(BOOL)a0;
- (void)hideAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)presentWithParentViewController:(id)a0 completion:(id /* block */)a1;
- (void)sendAnotherCode:(id)a0;
- (void)verificationCodeDidChange:(id)a0;
- (void)verifyCode:(id)a0;

@end
