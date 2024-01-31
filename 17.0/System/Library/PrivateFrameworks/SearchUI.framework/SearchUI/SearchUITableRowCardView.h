@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (retain, nonatomic) TLKGridRowView *contentView;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;
+ (BOOL)hasOnlyImages:(id)a0;
+ (BOOL)isAHeader:(id)a0;
+ (double)largestImageSizeForSection:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (id)leadingTextView;
- (id)setupContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })verticalBaselineInsetsForHeader:(BOOL)a0 isCompactTable:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })verticalBaselineInsetsForRowsWithCompactTable:(BOOL)a0;

@end
