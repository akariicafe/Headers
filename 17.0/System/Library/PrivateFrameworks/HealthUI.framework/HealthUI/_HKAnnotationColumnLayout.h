@class NSMutableArray;

@interface _HKAnnotationColumnLayout : UIView

@property (nonatomic) long long context;
@property (retain, nonatomic) NSMutableArray *columnViews;
@property (retain, nonatomic) NSMutableArray *separatorViews;
@property (nonatomic) BOOL includeSeparators;
@property (nonatomic) BOOL reverseColumnsInRightToLeftLayoutDirection;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithContext:(long long)a0;
- (void).cxx_destruct;
- (void)_invalidateLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_minimumHeight;
- (double)_minimumWidth;
- (void)_addSeparatorViews;
- (void)_clearColumnViews;
- (void)_clearSeparatorViews;
- (double)_columnSeparation;
- (double)_largestColumnWidth;
- (void)_layoutColumnsEqually;
- (void)_layoutColumnsPacked;
- (void)_layoutColumnsWithWidth:(double)a0 columnSeparation:(double)a1 currentSize:(struct CGSize { double x0; double x1; })a2;
- (id)_makeSeparatorView;
- (double)_minimumWidthForPackedLayout;
- (double)_minimumWithForEqualLayout;
- (double)_totalColumnWidth;
- (void)addColumnView:(id)a0;
- (void)clearViews;
- (void)clearViewsFromIndex:(unsigned long long)a0;
- (void)setColumnView:(id)a0 atIndex:(unsigned long long)a1;

@end
