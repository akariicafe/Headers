@class CALayer, CAShapeLayer;

@interface SHListeningInnerCircleLayer : SHPaletteLayer

@property (retain, nonatomic) CAShapeLayer *circle;
@property (retain, nonatomic) CALayer *circleContainerLayer;

- (void)layoutSublayers;
- (void).cxx_destruct;
- (void)setup;
- (struct CGPath { } *)circlePathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
