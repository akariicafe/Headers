@class CALayer, UIColor;

@interface VKCTextHighlightDot : UIView

@property (retain, nonatomic) CALayer *pulsingLayer;
@property (retain, nonatomic) CALayer *circleLayer;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) BOOL pulsing;
@property (nonatomic) struct VKQuadSideLength { double left; double right; double top; double bottom; } quadSideLength;
@property (weak, nonatomic) CALayer *textHighlightLayer;

- (void)_updateLayout;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForViewSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureForPulsing:(BOOL)a0;
- (double)opacityForCurrentQuadSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIndicatorDot;
- (void)updateIndicatorDotForState;

@end
