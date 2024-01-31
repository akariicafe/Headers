@class NSDictionary, TSCHChartRootLayoutItem, NSValue;

@interface TSCH2DChartLayout : TSCHChartLayout {
    TSCHChartRootLayoutItem *_layoutTreeRoot;
    struct CGSize { double width; double height; } _lastChartBodySize;
    struct CGSize { double width; double height; } _startingSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingLegendInnerFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startingChartInnerFrame;
    NSValue *_cachedOriginRelativeToChartAreaFrame;
}

@property (readonly) TSCHChartRootLayoutItem *p_layoutTree;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;

+ (id)propertiesThatInvalidateLayout;

- (id)model;
- (void)setLayoutSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; long long x8; unsigned long long x9; })a0;
- (void)invalidate;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleFrame;
- (void)setLegendSize:(struct CGSize { double x0; double x1; })a0;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (id)initWithChartInfo:(id)a0;
- (void)setStyleProvidingSource:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForResize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chartAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chartBodyFrame;
- (unsigned long long)dataSetIndex;
- (id)hitChartElements:(struct CGPoint { double x0; double x1; })a0 passingTest:(id /* block */)a1;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (void)layoutForChartAreaSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForCircumscribingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutForResizingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendDrawingFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendGeometryFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })legendModelGeometryFrame;
- (struct CGPath { } *)newDragAndDropHighlightPathForSelection:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerLayoutFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outerShadowFrame;
- (struct CGPoint { double x0; double x1; })p_cachedOriginRelativeToChartAreaFrame;
- (void)p_ensureValidForInwardLayout;
- (void)p_layoutNowForChartAreaSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_layoutNowForChartBodySize:(struct CGSize { double x0; double x1; })a0;
- (void)p_layoutNowForCircumscribingSize:(struct CGSize { double x0; double x1; })a0;
- (id)renderersWithRep:(id)a0;
- (void)setDataSetIndex:(unsigned long long)a0;
- (void)setLegendGeometryFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)subselectionHaloPositionsForSelections:(id)a0;
- (id)subselectionKnobPositionsForSelection:(id)a0;

@end
