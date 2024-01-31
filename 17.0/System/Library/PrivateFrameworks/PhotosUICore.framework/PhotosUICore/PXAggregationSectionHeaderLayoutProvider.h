@interface PXAggregationSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

- (id)_dateRangeCompactFormatter;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outAlignment:(unsigned long long *)a4;
- (id)primaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)secondaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;

@end
