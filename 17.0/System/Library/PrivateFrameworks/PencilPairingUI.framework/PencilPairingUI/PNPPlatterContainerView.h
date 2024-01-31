@class UIVisualEffectView, NSDate, PNPPlatterShadowView, UIView;

@interface PNPPlatterContainerView : UIView {
    UIView *_contentViewContainerView;
    PNPPlatterShadowView *_shadowView;
    UIView *_dimmingView;
    UIVisualEffectView *_effectView;
}

@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ autoDismissBlock;
@property (retain, nonatomic) NSDate *autoDismissDate;
@property (nonatomic) unsigned long long edge;
@property (nonatomic) double preferredCornerRadius;
@property (nonatomic) BOOL presented;
@property (nonatomic) long long dimmingState;
@property (nonatomic) double pencilOffset;
@property (nonatomic) BOOL dismissUsingAlpha;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } animationTranslation;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (double)_dismissedAlphaForEdge:(double)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_dismissedTransformForEdge:(unsigned long long)a0;
- (void)_updateShadowForCenteredPlatter:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dismissedFrameForViewWithSize:(struct CGSize { double x0; double x1; })a0 edge:(unsigned long long)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })presentedFrameForViewWithSize:(struct CGSize { double x0; double x1; })a0 edge:(unsigned long long)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
