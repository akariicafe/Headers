@class TSDImageInfo, NSString, TSDImageDrawingHelper, TSDImageLayout, TSUBezierPath, TSDMaskInfo, NSMutableArray, TSDMaskLayout, TSPData, NSObject, TSDLayoutGeometry;
@protocol TSDRepTrackerDelegate, OS_dispatch_semaphore;

@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDImageDrawingDataSource, TSDMagicMoveMatching> {
    TSDLayoutGeometry *_lastImageGeometryInRoot;
    TSDLayoutGeometry *_lastMaskGeometryInRoot;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _lastLayoutToImageTransform;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameInUnscaledCanvasRelativeToSuper;
    BOOL _frameInUnscaledCanvasIsValid;
    TSDImageDrawingHelper *_drawingHelper;
    NSMutableArray *_updateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *_updateFromLayoutBlocksLock;
    id<TSDRepTrackerDelegate> _repTrackerDelegate;
    TSUBezierPath *_cachedRemoveBackgroundIAPath;
    long long _userInitiatedBackgroundRemovalState;
    long long _autoBackgroundRemovalState;
    unsigned long long _imageForRemoveBackgroundAssetDataHash;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _backgroundRemovalLock;
}

@property (readonly) TSPData *imageDataForRendering;
@property (readonly, nonatomic) TSDImageInfo *imageInfo;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;
@property (readonly, nonatomic) TSDMaskInfo *maskInfo;
@property (readonly, nonatomic) TSDMaskLayout *maskLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)a0 incomingObject:(id)a1 mixingTypeContext:(id)a2;

- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void).cxx_destruct;
- (void)willBeRemoved;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInUnscaledCanvas;
- (BOOL)canDrawInParallel;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)a0;
- (void)drawInLayerContext:(struct CGContext { } *)a0;
- (id)imageOfStroke:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)p_drawsInOneStep;
- (id)p_validatedBitmapImageProvider;
- (id)p_validatedImageProvider;
- (void)drawInContextWithoutEffects:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(BOOL)a3 forAlphaOnly:(BOOL)a4 drawChildren:(BOOL)a5 keepingChildrenPassingTest:(id /* block */)a6;
- (void)setTextureAttributes:(id)a0 textureBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)textureForDescription:(id)a0;
- (id)layoutsForChildReps;
- (id)imageDrawingHelperAdjustedImageData:(id)a0;
- (id)imageDrawingHelperImageData:(id)a0;
- (BOOL)imageDrawingHelperImageHasAlpha:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageDrawingHelperImageRect:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })imageDrawingHelperImageTransformInRootForAntialiasingDefeat:(id)a0;
- (id)imageDrawingHelperThumbnailAdjustedImageData:(id)a0;
- (id)imageDrawingHelperThumbnailImageData:(id)a0;
- (BOOL)shouldShowCheckerboard;
- (id)downloadProgressPlaceholderImage;
- (void)p_drawInContext:(struct CGContext { } *)a0 withContent:(BOOL)a1 strokeDrawOptions:(unsigned long long)a2 withOpacity:(double)a3 withMask:(BOOL)a4 withIAMask:(BOOL)a5 forLayer:(BOOL)a6 forShadow:(BOOL)a7 forHitTest:(BOOL)a8;
- (BOOL)p_shouldUseSourceImageForDescription:(id)a0 clipBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 image:(struct CGImage { } *)a3;
- (BOOL)wantsMediaForDrops;

@end
