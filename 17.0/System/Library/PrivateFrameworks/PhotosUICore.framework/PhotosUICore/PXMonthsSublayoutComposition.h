@class PXMonthsLayoutMetrics, NSIndexSet, PXMonthsLayoutGenerator;

@interface PXMonthsSublayoutComposition : PXGGeneratedSublayoutComposition {
    NSIndexSet *_indexesOfChapterHeaders;
    NSIndexSet *_indexesOfHeroes;
    PXMonthsLayoutGenerator *_layoutGenerator;
}

@property (copy, nonatomic) PXMonthsLayoutMetrics *metrics;
@property (readonly, nonatomic) BOOL presentedSingleColumn;

- (id)configuredLayoutGenerator;
- (void)updateSublayoutAttributes;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sublayoutInsetsForStylableType:(long long)a0;

@end
