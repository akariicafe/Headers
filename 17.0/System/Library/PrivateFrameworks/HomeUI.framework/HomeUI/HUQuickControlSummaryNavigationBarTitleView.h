@class NSArray, HUQuickControlSummaryView, UIView;

@interface HUQuickControlSummaryNavigationBarTitleView : _UINavigationBarTitleView

@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) NSArray *contentConstraints;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (nonatomic) double navigationBarMinHeight;
@property (readonly, nonatomic) HUQuickControlSummaryView *summaryView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)transitionCompleted:(long long)a0 willBeDisplayed:(BOOL)a1;
- (void)updateLeadingMargin:(double)a0;
- (void)updateTitleView:(id)a0;
- (void)updateTrailingMargin:(double)a0;

@end
