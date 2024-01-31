@class NSArray, UIVisualEffectView, NSString, UIView, SKUIFlexibleSegmentedControl;

@interface SKUIChartColumnsView : UIView <SKUIFlexibleSegmentedControlDelegate> {
    long long _animatingToNumberOfVisibleColumns;
    UIView *_borderView0;
    UIView *_borderView1;
    long long _columnChangeAnimationCount;
    NSArray *_columnViews;
    UIView *_headerBackgroundView;
    UIView *_headerBackgroundBottomBorder;
    NSArray *_headerViews;
    SKUIFlexibleSegmentedControl *_segmentedControl;
}

@property (readonly, nonatomic) UIVisualEffectView *effectView;
@property (copy, nonatomic) NSArray *chartViewControllers;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) long long numberOfVisibleColumns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_headerViewWithViewControllers:(id)a0;
- (void)_headerViewAction:(id)a0;
- (void)_reloadColumnViews;
- (void)beginColumnChangeAnimationToNumberOfVisibleColumns:(long long)a0;
- (void)endColumnChangeAnimation;
- (void)segmentedControl:(id)a0 didSelectSegmentIndex:(long long)a1;

@end
