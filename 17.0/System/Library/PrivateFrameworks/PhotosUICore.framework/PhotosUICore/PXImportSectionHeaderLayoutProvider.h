@class PLDateRangeFormatter;

@interface PXImportSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter;

- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 viewProvider:(id)a1;
- (id)primaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (id)secondaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;

@end
