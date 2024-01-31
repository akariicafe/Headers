@class NSString, PDFPageLayerPrivate;

@interface PDFPageLayer : CALayer <PDFPageLayerInterface> {
    PDFPageLayerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)page;
- (void)dealloc;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (void)clearTiles;
- (void)_pageDidRotate:(id)a0;
- (void)forceTileUpdate;
- (void)_hideTileLayer:(BOOL)a0;
- (void)_forceTileUpdate;
- (BOOL)_hasTileWithFrameInLayer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isTile:(id)a0 occludedByTiles:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layerTileToRootViewBounds:(id)a0;
- (void)_pageChangedPageRef:(id)a0;
- (id)_pageLayerEffects;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageLayerVisibleRect;
- (void)_printRectsArray:(id)a0;
- (void)_releasePageLayerEffects;
- (void)_releaseTiles;
- (void)_renderingPropertyUpdate:(id)a0;
- (void)_setEnablePageShadows:(BOOL)a0;
- (id)_subtractRectB:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromRectA:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_tileUpdateComplete;
- (void)_updateLayerEffect:(id)a0 withPageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)_updateTiles;
- (void)addPageLayerEffect:(id)a0;
- (void)applyTileLayoutScale:(double)a0;
- (long long)displayBox;
- (BOOL)enablesTileUpdates;
- (id)geometryInterface;
- (id)initWithPage:(id)a0 geometryInterface:(id)a1 andRenderingProperties:(id)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layerEffectTransform;
- (id)pageLayerEffectForID:(id)a0;
- (void)removePageLayerEffectForID:(id)a0;
- (id)renderingProperties;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)scalePageLayerEffects:(double)a0;
- (void)setEnableTileUpdates:(BOOL)a0;
- (void)setNeedsTilesUpdate;
- (void)setVisibilityDelegateIndex:(unsigned long long)a0;
- (void)tileDrawingComplete:(id)a0;
- (void)updatePageLayerEffectForID:(id)a0;
- (void)updatePageLayerEffects;
- (unsigned long long)visibilityDelegateIndex;
- (void)willEndStartLiveResize;
- (void)willStartLiveResize;

@end
