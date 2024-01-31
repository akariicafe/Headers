@class UIColor, NSString, SUUIClientContext, UIImageView, UILabel, SUUIBadgeLabel;

@interface SUUILockupMetadataView : UIView {
    UILabel *_artistNameLabel;
    UILabel *_categoryLabel;
    SUUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_itemCountLabel;
    UILabel *_itemOfferLabel;
    UILabel *_releaseDateLabel;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
}

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (nonatomic) unsigned long long visibleFields;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *editorialBadgeString;
@property (copy, nonatomic) NSString *categoryString;
@property (copy, nonatomic) NSString *itemCountString;
@property (copy, nonatomic) NSString *itemOfferString;
@property (copy, nonatomic) NSString *releaseDateString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) float userRating;
@property (readonly, nonatomic) UIColor *primaryTextColor;

+ (double)maximumHeightWithVisibleFields:(unsigned long long)a0;

- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_decimalNumberFormatter;
- (id)_newDefaultLabel;
- (void)_reloadUserRatingViews;
- (void)setColoringWithColorScheme:(id)a0;

@end
