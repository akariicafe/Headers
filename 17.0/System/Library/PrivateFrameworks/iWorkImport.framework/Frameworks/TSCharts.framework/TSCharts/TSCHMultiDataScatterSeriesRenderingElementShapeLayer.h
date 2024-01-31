@interface TSCHMultiDataScatterSeriesRenderingElementShapeLayer : CALayer <TSCHMultiDataElementShapeLayer>

- (BOOL)aboveIntercept;
- (id)chartRep;
- (id)currentValueLayer;
- (void)p_addAnimationsForUpdatingImage:(struct CGImage { } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toAnimationInfo:(id)a2;
- (void)setFill:(id)a0 stroke:(id)a1 withViewScale:(double)a2;
- (void)updateElementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSeries:(id)a1 addingAnimationsToAnimationInfo:(id)a2;
- (void)updateElementFrameToNullForSeries:(id)a0 addingAnimationsToAnimationInfo:(id)a1;

@end
