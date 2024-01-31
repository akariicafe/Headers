@class NSString, UIImage, UILabel, SUUILockupMetadataView, SUUIEmbeddedMediaView;

@interface SUUILockupItemCellLayout : SUUIItemCellLayout {
    UILabel *_itemOfferTextLabel;
    SUUILockupMetadataView *_metadataView;
    SUUIEmbeddedMediaView *_videoThumbnailView;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct CGSize { double width; double height; } imageBoundingSize;
@property (nonatomic) long long itemOfferStyle;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long lockupSize;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) unsigned long long visibleFields;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryString;
@property (copy, nonatomic) NSString *editorialBadgeString;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *releaseDateString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) float userRating;
@property (retain, nonatomic) UIImage *videoThumbnailImage;
@property (nonatomic) struct CGSize { double width; double height; } videoThumbnailSize;
@property (nonatomic) BOOL playsInlineVideo;

+ (double)heightForLockupComponent:(id)a0 clientContext:(id)a1;
+ (double)heightForLockupStyle:(struct SUUILockupStyle { long long x0; long long x1; unsigned long long x2; })a0 item:(id)a1 editorial:(id)a2 clientContext:(id)a3;
+ (struct CGSize { double x0; double x1; })videoThumbnailSizeForVideo:(id)a0 clientContext:(id)a1;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)setIconImage:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setClientContext:(id)a0;
- (void)layoutSubviews;
- (id)initWithParentView:(id)a0;
- (id)initWithTableViewCell:(id)a0;
- (void)_layoutVertical;
- (void)_beginVideoPlaybackAction:(id)a0;
- (BOOL)_isItemOfferHidden;
- (id)_itemOfferTextLabel;
- (void)_layoutHorizontal;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutIconImageView;
- (void)endVideoPlaybackAnimated:(BOOL)a0;
- (id)initWithCollectionViewCell:(id)a0;
- (void)layoutForItemOfferChange;
- (void)playInlineVideoWithURL:(id)a0;
- (void)setColoringWithColorScheme:(id)a0;
- (void)_initSUUILockupItemCellLayout;

@end
