@class _UILabelContentLayer;

@interface _UILabelLayer : CALayer {
    _UILabelContentLayer *_contentLayer;
}

@property (readonly, nonatomic) BOOL letterformAwareInsetsAreValid;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } letterformAwareInsets;
@property (nonatomic) unsigned long long oversizeEdgesIncludedInLabelLayer;

- (void)setNeedsDisplayOnBoundsChange:(BOOL)a0;
- (void)invalidateContentInsets;
- (void)setContentsGravity:(id)a0;
- (void)setContentsMultiplyColor:(struct CGColor { } *)a0;
- (void)setContentsScale:(double)a0;
- (void)_updateContentLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentsFormat:(id)a0;
- (void)updateContentInsets;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void).cxx_destruct;
- (BOOL)_glyphPathBoundsExcedesLayers:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawableGlyphPathBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 edgesClipped:(unsigned long long *)a2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_clearContents;
- (void)_setLabelMasksToBoundsForAnimation:(BOOL)a0;
- (void)setMasksToBounds:(BOOL)a0;

@end
