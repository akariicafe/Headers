@class VKPointAnimatableProperty, CAShapeLayer, VKQuad;

@interface VKQuadHighlightView : UIView {
    VKPointAnimatableProperty *_topLeft;
    VKPointAnimatableProperty *_topRight;
    VKPointAnimatableProperty *_bottomRight;
    VKPointAnimatableProperty *_bottomLeft;
    CAShapeLayer *_shadowLayer;
    CAShapeLayer *_shadowLayerMaskLayer;
    CAShapeLayer *_highlightLayer;
}

@property (retain, nonatomic) VKQuad *quad;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_drawHighlight;
- (void)animateToQuad:(id)a0;

@end
