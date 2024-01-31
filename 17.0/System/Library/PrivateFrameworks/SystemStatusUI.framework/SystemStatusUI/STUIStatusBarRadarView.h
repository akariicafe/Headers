@interface STUIStatusBarRadarView : STUIStatusBarImageView

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)canBecomeFocused;
- (void)applyStyleAttributes:(id)a0;
- (BOOL)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateTintColor;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
