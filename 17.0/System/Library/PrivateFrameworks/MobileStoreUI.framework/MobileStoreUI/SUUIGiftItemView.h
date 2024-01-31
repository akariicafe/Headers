@class NSString, SUUIItemState, UIImage, SUUIItem, SUUIItemArtworkContext, SUUIItemOfferButton, SUUIGiftTheme, SUUIClientContext, UIImageView, UILabel;

@interface SUUIGiftItemView : UIView {
    SUUIClientContext *_clientContext;
    UIImageView *_itemImageView;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    UILabel *_titleLabel;
    UILabel *_userRatingCountLabel;
}

@property (nonatomic) BOOL leftToRight;
@property (readonly, nonatomic) long long giftItemStyle;
@property (readonly, nonatomic) SUUIItem *item;
@property (copy, nonatomic) SUUIGiftTheme *theme;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *price;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) float userRating;
@property (readonly, nonatomic) SUUIItemOfferButton *itemOfferButton;
@property (retain, nonatomic) SUUIItemState *itemState;
@property (retain, nonatomic) UIImage *itemImage;
@property (readonly, nonatomic) SUUIItemArtworkContext *artworkContext;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })_imageSize;
- (id)_newLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageEdgeInsets;
- (id)_titleColor;
- (id)_subtitleColor;
- (double)_paddingLeading;
- (void)_enumerateMetadataViewsUsingBlock:(id /* block */)a0;
- (void)_itemOfferConfirmAction:(id)a0;
- (double)_paddingTrailing;
- (void)_reloadItemState:(BOOL)a0;
- (void)_reloadSubtitles;
- (void)_reloadUserRatingViews;
- (id)_userRatingColor;
- (id)initWithStyle:(long long)a0 item:(id)a1 clientContext:(id)a2;
- (void)setItemState:(id)a0 animated:(BOOL)a1;

@end
