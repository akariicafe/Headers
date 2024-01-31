@class UIImageView, UIImage, PXCollageView;

@interface PXBadgedThumbnailView : UIView

@property (retain, nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) PXCollageView *collageView;
@property (retain, nonatomic) UIImageView *badgeView;
@property (retain, nonatomic) UIImage *badgeImage;
@property (nonatomic, getter=shouldShowLikeBadge) BOOL showBadge;
@property (nonatomic) long long numberOfItems;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)shouldShowBadge;
- (void)setImage:(id)a0 forItemAtIndex:(unsigned long long)a1;
- (id)imageViewForItemAtIndex:(unsigned long long)a0;
- (id)initWithplaceholderImageView:(id)a0;
- (void)setImageHidden:(BOOL)a0 forItemAtIndex:(unsigned long long)a1;

@end
