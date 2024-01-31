@class AXFKAFocusRingBorderShapeLayer;

@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer

@property (retain, nonatomic) AXFKAFocusRingBorderShapeLayer *topBorderLayer;

- (id)init;
- (void)setPath:(struct CGPath { } *)a0;
- (void)updateAppearance;
- (void).cxx_destruct;
- (void)_updateTopLayerPath;
- (double)lineWidthForTopLayer;
- (struct CGColor { } *)strokeColorForTopLayer;
- (id)topLayerFocusRingColorForTintColor:(id)a0;

@end
