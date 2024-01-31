@class SKUIInteractiveSegmentedControl;

@interface SKUIScrollingSegmentedControllerNavigationBarTitleView : UIView

@property (nonatomic) long long layoutStyle;
@property (retain, nonatomic) SKUIInteractiveSegmentedControl *segmentedControl;
@property (nonatomic) double segmentedControlMinimumHeight;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })defaultLayoutMargins;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
