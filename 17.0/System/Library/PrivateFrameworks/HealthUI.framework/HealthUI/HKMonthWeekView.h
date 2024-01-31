@class NSArray, CALayer;

@interface HKMonthWeekView : HKCalendarWeekView {
    BOOL _displaysMonthTitle;
    BOOL _displaysTopBorderLine;
    BOOL _isRTL;
    CALayer *_topBorderLine;
}

@property (readonly, nonatomic) NSArray *accessoryViews;
@property (nonatomic) BOOL accessoryContentsFetched;

- (Class)cellClass;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)supportsRTL;
- (Class)monthTitleClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForTopBorderLine;
- (id)cellMatchingDate:(id)a0;
- (void)clearAccessoryViews;
- (BOOL)containsMonthTitle;
- (id)initWithDateCache:(id)a0 displaysMonthTitle:(BOOL)a1 displaysTopBorderLine:(BOOL)a2;
- (void)selectedCalendarDay:(id)a0;
- (void)setMonthWeekStart:(id)a0;
- (void)setTitleHighlighted:(BOOL)a0;

@end
