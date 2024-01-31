@class TSDInfoGeometry, TSDPathSource, TSDImageLayout;

@interface TSDMaskLayout : TSDLayout {
    struct { unsigned char path : 1; unsigned char tightPathBounds : 1; } mMaskInvalidFlags;
    struct CGPath { } *mCachedPath;
    struct CGPath { } *mCachedPathNoScale;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCachedTightPathBoundsNoScale;
    double mOriginalPathScale;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDPathSource *mDynamicPathSource;
    BOOL mScalingInMaskMode;
}

@property (nonatomic) double pathScale;
@property (readonly, nonatomic) TSDImageLayout *imageLayout;

- (void)dealloc;
- (void)invalidate;
- (struct CGPath { } *)path;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)invalidatePath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pathBounds;
- (id)computeLayoutGeometry;
- (id)infoGeometry;
- (id)dependentLayouts;
- (id)maskInfo;
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
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)a0;
- (BOOL)shouldBeIncludedInParentFrameForCulling;

@end
