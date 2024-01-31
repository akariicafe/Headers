@interface SBBannerWindow : SBFSecureWindow

- (BOOL)_canBecomeKeyWindow;
- (id)initWithWindowScene:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setHidden:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;

@end
