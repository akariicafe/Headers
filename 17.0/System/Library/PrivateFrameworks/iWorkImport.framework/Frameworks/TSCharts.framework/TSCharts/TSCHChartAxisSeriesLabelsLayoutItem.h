@interface TSCHChartAxisSeriesLabelsLayoutItem : TSCHChartCategoryAxisLabelsLayoutItem

- (id)initWithParent:(id)a0;
- (struct CGSize { double x0; double x1; })calcMinSize;
- (id)labelStringForAxis:(id)a0 index:(unsigned long long)a1;
- (unsigned long long)numberOfLabelsForAxis:(id)a0;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)a0 axis:(id)a1;
- (id)selectionPathLabelType;
- (BOOL)showLabelsForAxis:(id)a0;
- (unsigned long long)strideInLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;

@end
