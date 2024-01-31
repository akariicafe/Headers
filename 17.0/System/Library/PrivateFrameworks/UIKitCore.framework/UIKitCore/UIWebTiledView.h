@class WAKWindow;

@interface UIWebTiledView : UIView {
    WAKWindow *_wakWindow;
    int _inGestureType;
    int _tilingArea;
    BOOL _didFirstTileLayout;
    BOOL _layoutTilesInMainThread;
    BOOL _tilingModeIsLocked;
    BOOL _allowsPaintingAndScriptsWhilePanning;
    BOOL _editingTilingModeEnabled;
}

- (struct CGSize { double x0; double x1; })tileSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setInGesture:(int)a0;
- (void)setNeedsDisplay;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)_screenChanged:(id)a0;
- (void)setTileSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)_didScroll;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateForScreen:(id)a0;
- (BOOL)isTilingEnabled;
- (void)setTilesOpaque:(BOOL)a0;
- (unsigned int)adjustedMaxTileCount;
- (BOOL)allowsPaintingAndScriptsWhilePanning;
- (void)drawImageIntoTiles:(struct CGImage { } *)a0;
- (BOOL)drawsGrid;
- (void)dumpTiles;
- (BOOL)editingTilingModeEnabled;
- (BOOL)keepsZoomedOutTiles;
- (BOOL)layoutTilesInMainThread;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutTilesNowOnWebThread;
- (void)lockTilingMode;
- (BOOL)logsTilingChanges;
- (unsigned int)maxTileCount;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)a0;
- (void)setDrawsGrid:(BOOL)a0;
- (void)setEditingTilingModeEnabled:(BOOL)a0;
- (void)setKeepsZoomedOutTiles:(BOOL)a0;
- (void)setLayoutTilesInMainThread:(BOOL)a0;
- (void)setLogsTilingChanges:(BOOL)a0;
- (void)setMaxTileCount:(unsigned int)a0;
- (void)setTileDrawingEnabled:(BOOL)a0;
- (void)setTilingArea:(int)a0;
- (void)setTilingEnabled:(BOOL)a0;
- (void)setWAKWindow:(id)a0;
- (BOOL)tileDrawingEnabled;
- (BOOL)tilesOpaque;
- (int)tilingArea;
- (void)unlockTilingMode;
- (void)updateTilingMode;
- (id)wakWindow;

@end
