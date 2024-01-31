@interface AFUISiriCompactDimmingView : UIView {
    BOOL _isVisible;
    BOOL _isAnimatingBlur;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)_isInAmbient;
- (BOOL)accessibilityReduceMotionEnabled;
- (id)ambientFadeToBlackView;
- (id)ambientMaterialView;

@end
