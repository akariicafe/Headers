@class UIImage, SUUIItemOfferButton, SUUIBadgeLabel, UILabel, SUUIContentRatingArtworkResourceLoader, SUUIClientContext, UIButton, SUUIColorScheme, NSString, SUUIItemOffer, SUUIItemContentRating, SUUIItemState, SUUIProductPageHeaderLabel, UIImageView;

@interface SUUIProductPageHeaderView : UIView <SUUIItemOfferButtonDelegate, SUUIContentRatingArtworkLoaderObserver> {
    UILabel *_ageBandLabel;
    SUUIBadgeLabel *_editorialBadgeLabel;
    SUUIClientContext *_clientContext;
    UIImageView *_headerImageView;
    UIImageView *_iconImageView;
    UILabel *_inAppPurchasesLabel;
    UILabel *_itemOfferExplanationLabel;
    UILabel *_itemOfferExplanationTitleLabel;
    BOOL _needsLayoutAfterButtonAnimation;
    SUUIProductPageHeaderLabel *_titleLabel;
    UILabel *_userRatingLabel;
    UIImageView *_userRatingStarsView;
}

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *inAppPurchasesString;
@property (copy, nonatomic) NSString *editorialBadge;
@property (readonly, nonatomic) UIButton *artistButton;
@property (retain, nonatomic) SUUIContentRatingArtworkResourceLoader *contentRatingArtworkLoader;
@property (retain, nonatomic) SUUIItemContentRating *contentRating;
@property (retain, nonatomic) SUUIItemContentRating *secondaryContentRating;
@property (copy, nonatomic) NSString *ageBandString;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;
@property (retain, nonatomic) UIImage *headerImage;
@property (nonatomic) double headerImageHeight;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) SUUIItemOffer *itemOffer;
@property (readonly, nonatomic) SUUIItemOfferButton *itemOfferButton;
@property (copy, nonatomic) NSString *itemOfferExplanationText;
@property (copy, nonatomic) NSString *itemOfferExplanationTitle;
@property (nonatomic, getter=isRestricted) BOOL restricted;
@property (copy, nonatomic) SUUIItemState *itemState;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic) double userRating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void)sizeToFit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_cancelConfirmationAction:(id)a0;
- (void)_finishButtonAnimation;
- (void)_getBottomLayoutProperties:(struct **)a0 origins:(double **)a1 height:(double *)a2 forWidth:(double)a3;
- (void)_getTopLayoutProperties:(struct **)a0 origins:(double **)a1 height:(double *)a2 forWidth:(double)a3;
- (void)_reloadItemOfferButton:(BOOL)a0;
- (void)_showConfirmationAction:(id)a0;
- (void)contentRatingArtworkLoader:(id)a0 didLoadImage:(id)a1 forContentRating:(id)a2;
- (id)contentRatingName;
- (id)initWithClientContext:(id)a0;
- (void)itemOfferButtonDidAnimateTransition:(id)a0;
- (void)itemOfferButtonWillAnimateTransition:(id)a0;
- (void)setItemState:(id)a0 animated:(BOOL)a1;

@end
