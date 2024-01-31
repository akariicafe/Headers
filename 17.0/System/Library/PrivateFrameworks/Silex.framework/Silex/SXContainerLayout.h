@class NSString, TSDBezierPath, TSDWrapPolygon, NSMutableArray;

@interface SXContainerLayout : TSDContainerLayout <TSDWrappable> {
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (retain, nonatomic) NSMutableArray *oldchildLayouts;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeometry:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (void)parentDidChange;
- (id)additionalLayouts;
- (BOOL)allowsConnections;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (void)childLayoutCreated:(id)a0;
- (id)childrenForLayout;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)a0;
- (id)i_exteriorTextWrap;
- (id)i_externalWrapPath;
- (void)i_invalidateWrap;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (void)invalidateParentForWrap;
- (BOOL)isHTMLWrap;
- (void)processChangedProperty:(int)a0;
- (BOOL)supportsInspectorPositioning;
- (void)updateChildrenFromInfo;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)wrapPolygon;
- (int)wrapType;

@end
