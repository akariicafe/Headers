@interface SBOldBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

+ (id)_traitsArbiterOrientationActuationRole;
+ (BOOL)layoutContentViewControllerWithConstraints;

- (BOOL)_canBecomeKeyWindow;
- (id)initWithWindowScene:(id)a0;
- (BOOL)resignFirstResponder;
- (void)setHidden:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;

@end
