@class NSString, UIImageView, UIImage, SUUIEditorialCellLayout, UIView;

@interface SUUIBrickGridCollectionViewCell : UICollectionViewCell {
    UIImageView *_brickImageView;
    SUUIEditorialCellLayout *_editorialCellLayout;
    UIView *_editorialContainerView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) UIImage *brickImage;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyEditorialLayout:(id)a0 orientation:(long long)a1;
- (void)setColoringWithColorScheme:(id)a0;

@end
