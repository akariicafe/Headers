@class HKBarButtonItemControl, UISegmentedControl, UIView;

@interface _HKReportSegmentControl : UIView

@property (readonly, nonatomic) UISegmentedControl *segmentControl;
@property (readonly, nonatomic) UIView *dividerView;
@property (readonly, nonatomic) HKBarButtonItemControl *rightControl;

- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithBackgroundColor:(id)a0 dividerColor:(id)a1 rightControl:(id)a2;

@end
