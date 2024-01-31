@class UIImageView;

@interface ICDocCamThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;

- (id)accessibilityLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)indexStringForAccessibility;
- (id)parentCollectionView;

@end
