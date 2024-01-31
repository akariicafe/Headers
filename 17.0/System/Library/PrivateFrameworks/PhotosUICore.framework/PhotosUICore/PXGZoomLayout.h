@class PXGLayout, NSArray;

@interface PXGZoomLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
}

@property (readonly, nonatomic) PXGLayout *primaryLayer;
@property (readonly, nonatomic) NSArray *layers;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint { double x; double y; } anchorViewportCenter;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (id)init;
- (void)scrollSpeedRegimeDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sublayout:(id)a0 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)axSpriteIndexes;
- (void)update;
- (void)visibleRectDidChange;
- (void)didChangeSublayoutOrigins;
- (void)displayScaleDidChange;
- (void)referenceDepthDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)_updateSublayoutGeometries;
- (void)userInterfaceDirectionDidChange;
- (void).cxx_destruct;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)safeAreaInsetsDidChange;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)referenceSizeDidChange;
- (long long)itemForSpriteIndex:(unsigned int)a0;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (long long)scrollableAxis;
- (void)setLayers:(id)a0 primaryLayer:(id)a1;
- (void)viewEnvironmentDidChange;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(id /* block */)a0;
- (void)_configureSublayouts;

@end
