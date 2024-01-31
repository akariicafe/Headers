@interface FigFCRCALayerOutputNodeLayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererCALayerOutputNodeLayerInternal { id x0; struct CGImage *x1; double x2; id x3; id x4; BOOL x5; } *layerInternal;
}

- (void)setWindowOpacity:(double)a0;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)setCornerRadius:(double)a0;
- (void)setContents:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_addPositionAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;
- (void)setNodeSeparated:(BOOL)a0;
- (void)setNodeOptions:(id)a0 forKeyPath:(id)a1;
- (void)_addBoundsAnimationToLayer:(id)a0 usingAnimation:(id)a1 forKey:(id)a2;

@end
