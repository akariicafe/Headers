@class _UIPageIndicatorView, UIView;

@interface _UIPageIndicatorProgressView : UIView

@property (nonatomic) _UIPageIndicatorView *indicatorView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *filledView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
