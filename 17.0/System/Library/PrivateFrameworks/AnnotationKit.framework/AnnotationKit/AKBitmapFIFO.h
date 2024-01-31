@class UIView;

@interface AKBitmapFIFO : CHPointFIFO {
    char *_bitmapDataPtr;
    struct CGContext { } *_bitmapContext;
    struct CGImage { } *_bitmapImage;
    struct CGPath { } *_cachedPath;
}

@property struct CGSize { double width; double height; } bitmapSize;
@property BOOL bitmapSizeHasBeenUpdatedOnceForLiveDraw;
@property void /* unknown type, empty encoding */ lastPoint;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } unionDirtyRect;
@property struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } viewToBitmapTransform;
@property double bitmapSizeMultiplier;
@property (nonatomic) BOOL isInLiveDraw;
@property (retain, nonatomic) UIView *view;
@property double shadowRadiusInView;

- (void)clear;
- (void)teardown;
- (void)flush;
- (void).cxx_destruct;
- (void)addPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;
- (void)_createBitmapContextIfNecessary;
- (void)_addPointToBitmap:(SEL)a0;
- (void)_addSinglePointToBitmap:(SEL)a0;
- (void)_addToDirtyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_applyDirtyRectToView;
- (void)_clearAllBitmapData;
- (void)_clearCachedPath;
- (struct CGPoint { double x0; double x1; })_convertPointToScreenBacking:(struct CGPoint { double x0; double x1; })a0;
- (void)_createBitmapIfNecessary;
- (void)_updateBitmapSizeFromViewIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bitmapRectInView;
- (struct CGImage { } *)currentBitmap;
- (struct CGPath { } *)newPathFromCurrentBitmap;
- (void)resetDirtyRect;

@end
