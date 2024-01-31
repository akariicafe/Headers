@class UIView;

@interface VUICollectionViewWrapperCell : UICollectionViewCell

@property (retain, nonatomic) UIView *childView;

- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
