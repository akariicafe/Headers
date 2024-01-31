@class UIView;

@interface _HKBodyMarginsLayout : UIView

@property (retain, nonatomic) UIView *leftMarginView;
@property (retain, nonatomic) UIView *bodyView;
@property (retain, nonatomic) UIView *rightMarginView;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_invalidateLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_totalViewWidth;
- (double)_maximumViewHeight;

@end
