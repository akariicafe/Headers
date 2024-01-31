@interface TSCHStackedAreaElementBuilder : TSCHAreaElementBuilder

- (BOOL)p_addBottomStroke:(struct { id x0; id x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; } *)a0 toPath:(struct CGPath { } *)a1 seriesIndex:(unsigned long long)a2 withPointsArray:(struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)a3 withCount:(unsigned long long)a4;
- (struct { struct CGPoint { double x0; double x1; } x0; double x1; BOOL x2; unsigned long long x3; } *)p_createPointArrayForSeries:(id)a0 inAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 groupIndexSet:(id)a2 outCount:(unsigned long long *)a3;
- (unsigned long long)countOfSummaryLabelsForGroups:(id)a0 forBodyLayout:(id)a1 outNewTransforms:(struct CGAffineTransform **)a2 outNewElementSizes:(struct CGSize **)a3 outNewClipRects:(struct CGRect **)a4 outNewStrings:(id *)a5;
- (struct { struct CGPoint { double x0; double x1; } x0; BOOL x1; } *)p_centerPointsForSeries:(id)a0 groupIndexSet:(id)a1 nullsUseIntercept:(BOOL)a2 plotAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
