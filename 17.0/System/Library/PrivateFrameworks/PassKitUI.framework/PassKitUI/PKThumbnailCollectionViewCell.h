@class NSString, UIImageView, UIImage, UILabel, CNAvatarView;

@interface PKThumbnailCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_imageView;
    UILabel *_labelTitle;
    UIImage *_image;
    BOOL _strokeImage;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) CNAvatarView *avatarView;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupImageView:(id)a0;
- (void)setStrokeImage:(BOOL)a0;
- (void)showAvatarView:(BOOL)a0;
- (void)_resetFonts;

@end
