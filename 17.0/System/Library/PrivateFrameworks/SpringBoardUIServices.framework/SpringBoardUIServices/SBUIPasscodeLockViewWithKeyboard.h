@class UIControl, NSString, SBPasscodeKeyboardAnimator, UILabel, SBUIAlphanumericPasscodeEntryField, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate> {
    SBPasscodeKeyboardAnimator *_keyboardAnimator;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    UIControl *_emergencyCallButton;
    BOOL _usesLightStyle;
    BOOL _isResigningResponderStatus;
    BOOL _keyboardVisible;
    double _keyboardHeightOffset;
    BOOL _keyboardTracksLockView;
    UIView *_keyboardTrackingView;
}

@property (retain, nonatomic) UILabel *statusField;
@property (retain, nonatomic) UILabel *statusSubtitleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)resignFirstResponder;
- (void)_updateFont;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (id)passcode;
- (id)_newStatusField;
- (id)_alphanumericPasscodeEntryField;
- (void)_acceptOrCancelReturnKeyPress;
- (void)_hardwareReturnKeyPressed:(id)a0;
- (void)_keyboardDidHideNotification:(id)a0;
- (void)_keyboardDidRequestDismissalNotification:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keyboardFrameForInterfaceOrientation:(long long)a0;
- (double)_keyboardToEntryFieldOffset;
- (void)_keyboardWillChangeFrameNotification:(id)a0;
- (void)_keyboardWillShowNotification:(id)a0;
- (double)_largeTextEmergencyButtonMaxWidth;
- (void)_layoutForMinimizationState:(BOOL)a0;
- (void)_layoutStatusView;
- (void)_luminanceBoostDidChange;
- (id)_newStatusSubtitleView;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (void)_setKeyboardTracksLockView:(BOOL)a0;
- (double)_statusFieldHeightWithWidth:(double)a0;
- (id)_statusSubtitleView;
- (id)_statusTitleView;
- (double)_statusTitleWidth;
- (void)_toggleForEmergencyCall;
- (void)_toggleForStatusField;
- (void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)a0;
- (id)_viewForKeyboardTracking;
- (void)becomeActiveWithAnimationSettings:(id)a0;
- (void)beginTransitionToState:(long long)a0;
- (void)didEndTransitionToState:(long long)a0;
- (id)initWithLightStyle:(BOOL)a0;
- (BOOL)passcodeEntryField:(id)a0 shouldInsertText:(id)a1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)a0;
- (void)passcodeEntryFieldDidCancelEntry:(id)a0;
- (BOOL)passcodeEntryFieldShouldShowSystemKeyboard:(id)a0;
- (void)passcodeEntryFieldTextDidChange:(id)a0;
- (void)resignActiveWithAnimationSettings:(id)a0;
- (void)setShowsEmergencyCallButton:(BOOL)a0;
- (void)setShowsStatusField:(BOOL)a0;
- (void)updateForTransitionToPasscodeView:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStatusText:(id)a0 subtitle:(id)a1 animated:(BOOL)a2;

@end
