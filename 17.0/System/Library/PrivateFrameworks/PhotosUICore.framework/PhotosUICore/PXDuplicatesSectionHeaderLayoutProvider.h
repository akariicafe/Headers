@interface PXDuplicatesSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

- (id)actionTextForActionType:(long long)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (long long)actionTypeForHeaderLayout:(id)a0;
- (id)primaryTextForDataSource:(id)a0 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1;
- (void)sectionHeader:(id)a0 didPressButtonForActionType:(long long)a1 sender:(id)a2;

@end
