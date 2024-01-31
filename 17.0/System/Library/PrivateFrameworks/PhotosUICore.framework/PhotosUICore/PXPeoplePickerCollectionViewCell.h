@class UIImageView, UILabel;

@interface PXPeoplePickerCollectionViewCell : UICollectionViewCell {
    UIImageView *_badgeView;
    UIImageView *_favoriteBadgeView;
}

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)_updateContentAlpha;

@end
