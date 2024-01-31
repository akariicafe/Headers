@interface FigFCRCALayer : FigBaseCALayer {
    struct OpaqueFigCaptionRendererCALayerInternal { id x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; void *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; id x6; unsigned char x7; } *layerInternal;
}

- (id)init;
- (void)dealloc;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)layoutSublayers;
- (void)setCallbacks:(id)a0 userEvent:(void /* function */ *)a1 viewportChanged:(void /* function */ *)a2 drawInContext:(void /* function */ *)a3;
- (void)setVideoBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clear:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)compose;

@end
