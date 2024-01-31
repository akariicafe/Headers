@class NSArray, CALayer, TSDFrame, TSDBitmapImageProvider;

@interface TSDFrameRep : NSObject {
    TSDFrame *mFrame;
    NSArray *mImages;
    NSArray *mMasks;
    TSDBitmapImageProvider *mAdornment;
    CALayer *mMaskLayer;
    BOOL mShouldEnableBlendMode;
}

- (void)dealloc;
- (id)frame;
- (void)applyMaskForRectWithCoverage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toContext:(struct CGContext { } *)a1;
- (id)applyToCALayer:(id)a0 withRepLayer:(id)a1 maskLayer:(id)a2 viewScale:(double)a3;
- (void)blendMaskBeforeRenderingImageInContext:(struct CGContext { } *)a0;
- (void)frameRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withTotalScale:(double)a2;
- (id)initWithTSDFrame:(id)a0;
- (void)p_addEdgeLayerForIndex:(unsigned int)a0 toLayer:(id)a1 maskLayer:(id)a2;
- (void)p_addUnreplicatedLayerForIndex:(unsigned int)a0 toLayer:(id)a1 maskLayer:(id)a2;
- (void)p_adjustRepeatingLayer:(id)a0 withImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 start:(double)a2 end:(double)a3 vertical:(BOOL)a4;
- (id)p_createRepeatingLayerWithImage:(struct CGImage { } *)a0 vertical:(BOOL)a1 screenScale:(double)a2;
- (void)p_drawFrameIntoRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withImages:(id)a2 atViewScale:(double)a3 isMask:(BOOL)a4;
- (void)p_drawTiles:(id)a0 inContext:(struct CGContext { } *)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 start:(double)a3 end:(double)a4 vertical:(BOOL)a5;
- (struct CGImage { } *)p_newFrameForMask:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1 forCALayer:(BOOL)a2 viewScale:(double)a3;
- (struct CGImage { } *)p_newRenderedFrameForMask:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1 forCALayer:(BOOL)a2 viewScale:(double)a3;
- (void)p_setRepeatingLayerWithIndex:(unsigned int)a0 sublayers:(id)a1 maskLayers:(id)a2 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 start:(double)a4 end:(double)a5;
- (void)p_setUnreplicatedLayerWithIndex:(unsigned int)a0 sublayers:(id)a1 maskLayers:(id)a2 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)updateCALayer:(id)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withRepLayer:(id)a2 maskLayer:(id)a3 viewScale:(double)a4 maskLayerTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5;

@end
