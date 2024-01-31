@class UIView;

@interface SearchUILayoutFooterView : SearchUICollectionReusableView

@property (retain, nonatomic) UIView *footerView;

+ (id)reuseIdentifier;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
