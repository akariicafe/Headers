@class UIView;

@interface CKAnimationOverlayWindow : UIWindow

@property (retain, nonatomic) UIView *keyboardSnapshotView;

- (void)dismiss;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)showInWindowScene:(id)a0;

@end
