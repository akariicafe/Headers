@class NSString, NSLayoutConstraint, SFAutomaticPasswordInputView;
@protocol _SFAutoFillContextProviding;

@interface _SFAutomaticPasswordInputViewController : UIInputViewController <SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing> {
    SFAutomaticPasswordInputView *_inputView;
    NSString *_password;
    struct CGSize { double width; double height; } _portraitKeyboardSize;
    struct CGSize { double width; double height; } _landscapeKeyboardSize;
    NSLayoutConstraint *_heightConstraint;
    long long _currentInterfaceOrientation;
    long long _keyboardType;
    NSString *_autoFillContextProtocolObjectUUID;
}

@property (weak, nonatomic) id<_SFAutoFillContextProviding> autoFillContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)inputViewControllerWithAutoFillContext:(id)a0 passwordRules:(id)a1 completion:(id /* block */)a2;
+ (void)_inputViewControllerWithAutoFillContext:(id)a0 passwordRules:(id)a1 overrideApplicationIdentifier:(id)a2 completion:(id /* block */)a3;
+ (void)inputViewControllerWithAutoFillContext:(id)a0 passwordRules:(id)a1 overrideApplicationIdentifier:(id)a2 completion:(id /* block */)a3;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })_currentKeyboardSize;
- (BOOL)_inputViewControllerShouldDirectlyInsertPassword;
- (void)_postButtonPressedNotificationForButton:(long long)a0;
- (void)_updateKeyboardHeight;
- (void)dismissKeyboardPreservingFirstResponderIfNecessary;
- (id)initWithPassword:(id)a0 keyboardType:(long long)a1;
- (id)inputViewControllerOtherOptionsMenu:(id)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_dismissKeyboard:(id)a0;
- (void)inputViewControllerDidSelectUseCustomPassword:(id)a0;
- (void)inputViewControllerDidSelectUseStrongPassword:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForInputView:(id)a0;

@end
