@class NSNotification, NSLayoutConstraint;

@interface SFKeyboardLayoutAlignmentView : UIView {
    NSNotification *_keyboardChangeNotificationForUpdateConstraints;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastKnownKeyboardRect;
    NSLayoutConstraint *bottomConstraint;
    NSLayoutConstraint *widthConstraint;
    NSLayoutConstraint *heightConstraint;
    NSLayoutConstraint *disambiguatingLeftConstraint;
}

@property (nonatomic) BOOL automaticKeyboardFrameTrackingDisabled;

- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)_stopObservingKeyboardNotifications;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameInBoundsForKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_keyboardChanged:(id)a0;
- (void)_matchInitialKeyboardFrame;
- (void)_removeConstraints;
- (void)_startObservingKeyboardNotificationsForScreen:(id)a0;
- (void)_updateConstraintsForKeyboardNotification:(id)a0;
- (void)_updateConstraintsToMatchKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addConstraints;

@end
