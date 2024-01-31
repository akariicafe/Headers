@class CAGradientLayer, CABackdropLayer;

@interface ABShadowView : UIView {
    CAGradientLayer *_topGradientLayer;
    CAGradientLayer *_bottomGradientLayer;
    CABackdropLayer *_bottomVariableBlurLayer;
    double _topShadowRatio;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGImage { } *)_renderBottomVariableBlurMaskWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setupGradient;

@end
