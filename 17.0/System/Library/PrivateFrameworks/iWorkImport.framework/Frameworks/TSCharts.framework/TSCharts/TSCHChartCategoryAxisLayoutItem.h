@class TSCHChartAxisSeriesLabelsLayoutItem, TSCHChartCategoryAxisLabelsLayoutItem;

@interface TSCHChartCategoryAxisLayoutItem : TSCHChartAxisLayoutItem

@property (readonly, nonatomic) TSCHChartAxisSeriesLabelsLayoutItem *axisSeriesLabelsLayoutItem;
@property (readonly, nonatomic) TSCHChartCategoryAxisLabelsLayoutItem *axisCategoryLabelsLayoutItem;

- (void).cxx_destruct;
- (void)buildSubTree;
- (void)p_layoutLabelsNow;
- (id)protected_layoutSpaceHalosForAllLabels;
- (id)protected_layoutSpaceKnobsForAllLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)a0;

@end
