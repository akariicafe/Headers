@class VUISeparatorView, VUILabel, VUIRoundButton, VUIImageView, VUIImageProxy, UIView, NSString, VUIRentalExpirationLabel, NSNumber, FocusableTextView, NSArray, VUIMediaTagsView, UIImage;
@protocol VUILibraryProductLockupViewLayout, VUIProductLockupViewDelegate;

@interface VUIProductLockupView : UIView <VUIRentalExpirationLabelDelegate>

@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (retain, nonatomic) VUIImageView *coverArtImageView;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) FocusableTextView *descriptionTextView;
@property (nonatomic) BOOL contentDescriptionExpanded;
@property (nonatomic) BOOL didSetUpViews;
@property (retain, nonatomic) VUIRentalExpirationLabel *expirationLabel;
@property (retain, nonatomic) UIImage *contentRatingImage;
@property (retain, nonatomic) VUIMediaTagsView *mediaInfoTagsView;
@property (retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView;
@property (retain, nonatomic) id<VUILibraryProductLockupViewLayout> layout;
@property (readonly, nonatomic) VUIImageProxy *coverArtImageProxy;
@property (readonly, nonatomic) UIImage *coverArtPlaceholderImage;
@property (retain, nonatomic) VUIRoundButton *leftButton;
@property (retain, nonatomic) UIView *downloadView;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *contentDescription;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *releaseYear;
@property (copy, nonatomic) NSString *availabilityText;
@property (copy, nonatomic) NSArray *badgeResources;
@property (weak, nonatomic) id<VUIProductLockupViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productLockupViewWithMedia:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_contentDescriptionAttributedString;
- (id)_contentDescriptionFont;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)a0;
- (double)_descriptionTopMarginWithBaselineMargin:(double)a0 otherFont:(id)a1;
- (struct CGSize { double x0; double x1; })_layoutForCategoryAccessibility:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutForCompact:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutForStacked:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_sizeOfDescriptionLabel:(double)a0;
- (void)_updateSubtitleLabelForWindowWidth:(double)a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (void)setCoverArtImageProxy:(id)a0 placeholderImage:(id)a1;
- (void)updateWithMediaEntity:(id)a0;

@end
