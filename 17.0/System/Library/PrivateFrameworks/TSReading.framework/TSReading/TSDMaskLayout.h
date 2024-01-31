@class TSDInfoGeometry, TSDPathSource, TSDImageLayout;

@interface TSDMaskLayout : TSDLayout {
    struct { unsigned char path : 1; unsigned char tightPathBounds : 1; } mMaskInvalidFlags;
    struct CGPath { } *mCachedPath;
    struct CGPath { } *mCachedPathNoScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBoundsNoScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    TSDPathSource *mPathSourceWithProvidedSize;
    BOOL mScalingInMaskMode;
}

@property (nonatomic) double pathScale;
@property (readonly, nonatomic) BOOL hasSmartPath;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;

- (void)dealloc;
- (void)invalidate;
- (struct CGPath { } *)path;
- (id)initWithInfo:(id)a0;
- (void)invalidatePath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pathBounds;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (id)computeLayoutGeometry;
- (id)infoGeometry;
- (void)processChangedProperty:(int)a0;
- (BOOL)shouldDisplayGuides;
- (void)setControlKnobPosition:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })affineTransformForTightPathBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForProvidingGuidesInRoot;
- (void)beginDynamicOperation;
- (id)dependentLayouts;
- (void)dynamicMovePathKnobDidBegin;
- (void)dynamicallyMovedSmartShapeKnobTo:(struct CGPoint { double x0; double x1; })a0 withTracker:(id)a1;
- (void)endDynamicOperation;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layoutTransformInInfoSpace:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)maskInfo;
- (void)maskModeScaleDidBegin;
- (void)maskModeScaleDidEnd;
- (unsigned long long)numberOfControlKnobs;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })originalTransformForProvidingGuides;
- (struct CGPath { } *)p_cachedPath;
- (struct CGPath { } *)p_cachedPathNoScale;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedTightPathBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_cachedTightPathBoundsNoScale;
- (void)p_calculateCachedPathIfNecessary;
- (void)p_calculateTightPathBoundsIfNecessary;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)a0;
- (id)pathSource;
- (void)resizeWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 asChild:(BOOL)a1;
- (BOOL)shouldSnapWhileResizing;
- (void)takeScaledMaskGeometry:(id)a0;

@end
