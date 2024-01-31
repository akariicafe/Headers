@class UIViewController, UIView;

@interface SearchUICustomViewControllerCell : SearchUICollectionViewCell

@property (retain) UIView *hostedView;
@property (retain, nonatomic) UIViewController *embeddedViewController;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
