@class UIImageView, UIView;

@interface ICPaperStyleCell : UICollectionViewListCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *selectionView;

- (unsigned long long)accessibilityTraits;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)setSelected:(BOOL)a0;
- (id)preferredTintColor;
- (void)setupCell;

@end
