@class UIView;

@interface GKCenteringScrollView : UIScrollView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *footerView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)centerContentViewIfDesirable;

@end
