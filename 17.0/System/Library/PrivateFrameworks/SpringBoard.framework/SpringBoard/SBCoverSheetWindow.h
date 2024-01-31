@interface SBCoverSheetWindow : SBSecureWindow

+ (BOOL)sb_autorotates;

- (BOOL)_canBecomeKeyWindow;
- (void)_configureContextOptions:(id)a0;
- (BOOL)resignFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)becomeFirstResponder;

@end
