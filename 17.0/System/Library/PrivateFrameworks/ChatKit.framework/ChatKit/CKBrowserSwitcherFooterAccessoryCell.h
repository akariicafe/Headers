@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView

@property (retain, nonatomic) UIView *seperatorView;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;

+ (id)reuseIdentifier;
+ (id)supplementryViewKind;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
