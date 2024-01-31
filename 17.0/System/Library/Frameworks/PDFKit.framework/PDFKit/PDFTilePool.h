@class PDFTilePoolPrivate;

@interface PDFTilePool : NSObject {
    PDFTilePoolPrivate *_private;
}

+ (id)sharedPool;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)activeTileCount;
- (void)saveBitmapFiles;
- (int)tileSurfaceType;
- (int)tileSurfaceSize;
- (struct CGContext { } *)_createContextForTileSurface:(id)a0 ofRequest:(id)a1;
- (id)_createTileSurfaceForRequest:(id)a0;
- (void)_renderTileForRequest:(id)a0;
- (void)releasePDFTileSurface:(id)a0;
- (void)requestPDFTileSurfaceForTarget:(id)a0 forPage:(id)a1 withRenderingProperties:(id)a2 atZoomFactor:(double)a3 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5 tag:(int)a6;
- (void)setTileSurfaceType:(int)a0;

@end
