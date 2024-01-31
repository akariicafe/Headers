@interface FigSubtitleBackdropCALayer : FigBaseCALayer {
    struct OpaqueFigSubtitleBackdropCALayerInternal { id x0; id x1; BOOL x2; BOOL x3; double x4; id x5; id x6; id x7; } *bdLayerInternal;
}

- (void)setNeedsDisplay;
- (id)init;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)setCornerRadius:(double)a0;
- (void)setContents:(id)a0;
- (void)setNeedsLayout;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)_addPositionAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)_addBoundsAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (BOOL)shouldEnableBackdropLayer;
- (void)updateBackdropLayer;
- (void)updateHDRContentState:(BOOL)a0;
- (void)updateWindowOpacity:(double)a0;

@end
