@class NSString, TSDWrapPolygon, TSDBezierPath;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeometry:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (void)parentDidChange;
- (BOOL)allowsConnections;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)a0;
- (id)i_externalWrapPath;
- (void)i_invalidateWrap;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (void)invalidateParentForWrap;
- (BOOL)isHTMLWrap;
- (void)processChangedProperty:(int)a0;
- (BOOL)supportsInspectorPositioning;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)wrapPolygon;
- (int)wrapType;

@end
