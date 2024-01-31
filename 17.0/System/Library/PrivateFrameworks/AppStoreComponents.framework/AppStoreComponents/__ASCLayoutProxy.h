@class NSString;

@interface __ASCLayoutProxy : NSObject {
    void /* unknown type, empty encoding */ base;
}

@property (nonatomic, readonly) NSString *description;

+ (double)lockupHeadingPointSizeProvider:(id)a0;
+ (double)offerButtonRegularWidthForSize:(id)a0;
+ (id)adLockupLayoutWithTraitCollection:(id)a0 artworkView:(id)a1 headingText:(id)a2 titleText:(id)a3 subtitleText:(id)a4 offerText:(id)a5 offerButton:(id)a6 starRatingView:(id)a7 ratingCountLabel:(id)a8 adTransparencyButton:(id)a9 editorsChoiceView:(id)a10 descriptionLabel:(id)a11;
+ (double)adTransparencyButtonScaledCapInset:(double)a0 in:(id)a1;
+ (double)adTransparencyButtonTitlePointSizeProvider:(id)a0;
+ (double)adTransparencyDeveloperNamePointSizeProvider:(id)a0;
+ (id)artworkFrom:(id)a0 and:(id)a1;
+ (double)axOfferButtonHeightForSize:(id)a0;
+ (double)containerViewRotationAngleFor:(id)a0 screenshots:(id)a1 trailers:(id)a2;
+ (struct CGSize { double x0; double x1; })estimatedMediaContentSizeFor:(id)a0 screenshots:(id)a1 trailers:(id)a2 fitting:(struct CGSize { double x0; double x1; })a3 in:(id)a4;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutMarginsFor:(id)a0 existingLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (id)lockupLayoutOfSize:(id)a0 traitCollection:(id)a1 artworkView:(id)a2 headingText:(id)a3 titleText:(id)a4 subtitleText:(id)a5 offerText:(id)a6 offerButton:(id)a7;
+ (id)lockupMediaLayoutFor:(id)a0 screenshots:(id)a1 trailers:(id)a2 containerView:(id)a3 mediaViews:(id)a4;
+ (struct CGSize { double x0; double x1; })lockupMediaPreferredMediaSizeWithFitting:(struct CGSize { double x0; double x1; })a0 for:(id)a1 with:(id)a2 and:(id)a3 in:(id)a4;
+ (id)lockupMediaSizingLayoutFor:(id)a0 screenshots:(id)a1 trailers:(id)a2 containerView:(id)a3 mediaViews:(id)a4;
+ (double)lockupSubtitlePointSizeProvider:(id)a0;
+ (double)lockupTitlePointSizeProvider:(id)a0;
+ (struct CGSize { double x0; double x1; })mediumLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })mediumOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })miniLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (long long)numberOfViewsInLockupMediaLayoutFor:(id)a0 with:(id)a1 and:(id)a2;
+ (double)offerButtonFixedHeightForSize:(id)a0;
+ (double)offerButtonHeightForSize:(id)a0;
+ (id)offerDisclosureLayoutWithDisclosureIndicator:(id)a0;
+ (id)offerEmptyLayoutWithImageView:(id)a0 titleView:(id)a1 subtitleView:(id)a2;
+ (id)offerIconLayoutForSize:(id)a0 imageView:(id)a1 titleView:(id)a2 subtitleView:(id)a3 hasTrailingSubtitle:(BOOL)a4 shouldTopAlign:(BOOL)a5 topPadding:(double)a6;
+ (double)offerProgressDiameterForSize:(id)a0;
+ (id)offerTextLayoutForSize:(id)a0 titleBackgroundView:(id)a1 titleView:(id)a2 subtitleView:(id)a3 hasTrailingSubtitle:(BOOL)a4 shouldTopAlign:(BOOL)a5 topPadding:(double)a6 shouldExpandBackground:(BOOL)a7;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectWithLayoutDirectionForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1 relativeTo:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGSize { double x0; double x1; })smallLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })smallOfferButtonLockupEstimatedSizeFittingSize:(struct CGSize { double x0; double x1; })a0 compatibleWithTraitCollection:(id)a1;
+ (id)traitEnvironmentWithTraitCollection:(id)a0;
+ (id)tvTextPillOverlayWithBackgroundView:(id)a0 textView:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentInsetsInTraitEnvironment:(id)a0;
- (struct CGSize { double x0; double x1; })measuredSizeFittingSize:(struct CGSize { double x0; double x1; })a0 inTraitEnvironment:(id)a1;
- (void)placeChildrenRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inTraitEnvironment:(id)a1;

@end
