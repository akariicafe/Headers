@class UIColor, NSString, ASCLockupDisplayContext, ASCArtworkView, ASCOfferButton, ASCSkeletonLabel, UILabel, ASCOfferTheme;
@protocol ASCLockupTheme;

@interface ASCLockupContentView : UIControl <ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView>

@property (readonly, nonatomic) BOOL isOfferButtonOnlyLockup;
@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext;
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel;
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel;
@property (readonly, nonatomic) ASCOfferButton *offerButton;
@property (readonly, nonatomic) UILabel *headingLabelIfLoaded;
@property (readonly, nonatomic) UILabel *headingLabel;
@property (readonly, nonatomic) UILabel *offerStatusLabelIfLoaded;
@property (readonly, nonatomic) UILabel *offerStatusLabel;
@property (retain, nonatomic) NSString *size;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (retain, nonatomic) id<ASCLockupTheme> lockupTheme;
@property (copy, nonatomic) UIColor *loadingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconSize;

+ (BOOL)isOfferButtonFixedHeightForSize:(id)a0;
+ (BOOL)isSmallOfferButtonLockupForSize:(id)a0;
+ (BOOL)offerButtonShouldExpandBackgroundForSize:(id)a0;
+ (BOOL)offerButtonShouldTopAlignForSize:(id)a0;
+ (double)offerButtonTopPaddingForSize:(id)a0;

- (void)setLoading:(BOOL)a0;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)setHeading:(id)a0;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setDisplayContext:(id)a0;
- (id)makeLayout;
- (void)setOfferStatus:(id)a0;
- (BOOL)shouldHideTitle;
- (void)addOfferTarget:(id)a0 action:(SEL)a1;
- (void)beginOfferModalStateWithCancelBlock:(id /* block */)a0;
- (void)endOfferModalState;
- (BOOL)isMiniLockup;
- (BOOL)isSmallOfferButtonOnlyLockup;
- (double)minimumLockupHeight;
- (void)offerButton:(id)a0 willTransitionToMetadata:(id)a1 usingAnimator:(id)a2;
- (void)onPreferredContentSizeCategoryChange;
- (void)removeOfferTarget:(id)a0 action:(SEL)a1;
- (id)saveOfferState;
- (void)setIconImage:(id)a0 withDecoration:(id)a1;
- (void)setOfferEnabled:(BOOL)a0;
- (void)setOfferInteractive:(BOOL)a0;
- (void)setOfferMetadata:(id)a0;
- (void)setPrefersRightToLeftLayout:(BOOL)a0;
- (BOOL)shouldHideHeading;
- (BOOL)shouldHideIconArtwork;
- (BOOL)shouldHideOfferStatus;
- (BOOL)shouldHideSubtitle;

@end
