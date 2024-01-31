@interface TSDPartitionedPartialRep : TSDRep

- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)willBeRemoved;
- (void)didUpdateLayer:(id)a0;
- (BOOL)directlyManagesLayerContent;
- (void)resetCachedPartitionedRendering;
- (void)addBitmapsToRenderingQualityInfo:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)i_queueForTileProvider;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layerFrameInScaledCanvas;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_clipRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_convertBaseToNaturalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })p_edgeInsetsForClipping;
- (struct CGImage { } *)p_newImageForCachingBaseRep;

@end
