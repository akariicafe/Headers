@class SUUIGiftConfiguration, UILabel, UIImageView, SUUIGift, UIImage, SUUIGiftItemView, SUUIGiftTheme;

@interface SUUIGiftThemeCollectionViewCell : UICollectionViewCell {
    UIImageView *_headerImageView;
    SUUIGiftItemView *_itemView;
    UILabel *_messageLabel;
    UILabel *_priceLabel;
    UILabel *_senderNameLabel;
    UILabel *_senderNameLabelLabel;
}

@property (retain, nonatomic) SUUIGiftConfiguration *giftConfiguration;
@property (retain, nonatomic) SUUIGift *gift;
@property (retain, nonatomic) SUUIGiftTheme *theme;
@property (retain, nonatomic) UIImage *itemImage;

- (void)setBackgroundColor:(id)a0;
- (void)_setPrice:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_itemView;
- (void)_setMessage:(id)a0;
- (void)_setSenderName:(id)a0;
- (void)_reloadItemView;
- (void)_setHeaderImage:(id)a0;
- (void)reloadThemeHeaderImage;

@end
