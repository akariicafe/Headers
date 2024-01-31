@class UIView;

@interface _HKDateContentLayout : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *dateView;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_invalidateLayout;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (long long)_viewCount;
- (double)_maximumViewWidth;
- (double)_totalViewHeight;

@end
