@class UILabel, SBUIButton, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    BOOL _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

@property (readonly, nonatomic) SBUIButton *okButton;
@property (nonatomic) BOOL showsOkButton;
@property (readonly, nonatomic) UILabel *promptLabel;
@property (nonatomic) BOOL showsPromptLabel;

+ (BOOL)_usesTextFieldForFirstResponder;
+ (BOOL)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;

- (struct CGSize { double x0; double x1; })_viewSize;
- (void)_handleKeyUIEvent:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)canResignFirstResponder;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)a0;
- (void)_getPasscodeFieldSize:(struct CGSize { double x0; double x1; } *)a0 okButtonSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)_okButtonHit;
- (void)_resetForFailedPasscode:(BOOL)a0;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)a0;

@end
