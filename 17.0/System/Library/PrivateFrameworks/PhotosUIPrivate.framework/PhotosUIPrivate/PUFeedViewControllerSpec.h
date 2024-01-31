@class NSIndexSet, PUPhotosGridViewControllerSpec;

@interface PUFeedViewControllerSpec : NSObject {
    unsigned short _squareThumbnailFastImageFormat;
    unsigned short _squareThumbnailQualityImageFormat;
    unsigned short _smallTileFastImageFormat;
    unsigned short _smallTileQualityImageFormat;
    unsigned short _smallTilePanoQualityImageFormat;
    unsigned short _mediumTileFastImageFormat;
    unsigned short _mediumTileQualityImageFormat;
    unsigned short _largeTileFastImageFormat;
    unsigned short _largeTileQualityImageFormat;
    unsigned short _veryLargeTileFastImageFormat;
    unsigned short _veryLargeTileQualityImageFormat;
    struct CGSize { double width; double height; } _squareThumbnailMaximumSize;
    struct CGSize { double width; double height; } _smallTileMaximumFittingSize;
    double _smallTilePanoAspectRatio;
    struct CGSize { double width; double height; } _mediumTileMaximumFillingSize;
    struct CGSize { double width; double height; } _largeTileMaximumFillingSize;
}

@property (copy, nonatomic, setter=_setQualityImageFormats:) NSIndexSet *qualityImageFormats;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minimumVideoTileSize;
@property (readonly, nonatomic) long long largeNumberOfSubjectsForLikes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (readonly, nonatomic) BOOL shouldUseAspectThumbnails;
@property (readonly, nonatomic) BOOL shouldHideBarsInLandscape;
@property (readonly, nonatomic) BOOL shouldShowInvitationsInPopover;
@property (readonly, nonatomic) PUFeedViewControllerSpec *popoverFeedViewControllerSpec;
@property (readonly, nonatomic) PUPhotosGridViewControllerSpec *gridSpec;
@property (readonly, nonatomic) long long promptStyle;
@property (readonly, nonatomic) BOOL shouldUseFullscreenLayout;
@property (readonly, nonatomic) double standardSideMargins;

- (id)init;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textInsetsForHeadersAndFootersInSectionType:(long long)a0 collectionViewType:(long long)a1;
- (BOOL)canUseSimplePreheatManager;
- (long long)configurationForSectionHeaderType:(long long)a0 collectionViewType:(long long)a1;
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } *)a0;
- (void)configureFeedCollectionViewLayout:(id)a0 forCollectionViewType:(long long)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2 collectionViewContentInset:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a3;
- (void)configureGradientCell:(id)a0 forSectionHeaderBackgroundInCollectionViewType:(long long)a1;
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; } *)a0 betweenSectionWithInfo:(id)a1 andSectionWithInfo:(id)a2 joined:(BOOL)a3 collectionViewType:(long long)a4;
- (void)configureTextCell:(id)a0 forCaption:(id)a1 date:(id)a2;
- (void)configureTextCell:(id)a0 forCommentWithDescriptionPhrase:(id)a1 date:(id)a2;
- (void)configureTextCell:(id)a0 forEventWithDescriptionPhrase:(id)a1;
- (void)configureTextCell:(id)a0 forLikesWithDescriptionPhrase:(id)a1 date:(id)a2;
- (void)configureTextCell:(id)a0 forSectionFooterWithActionText:(id)a1 collectionViewType:(long long)a2;
- (void)configureTextCell:(id)a0 forSectionFooterWithDateText:(id)a1 collectionViewType:(long long)a2;
- (void)configureTextCell:(id)a0 forSectionGroupHeaderWithText:(id)a1 collectionViewType:(long long)a2;
- (void)configureTextCell:(id)a0 forSectionHeaderWithDescriptionPhrase:(id)a1 streamDisclosureLabel:(id)a2 actionText:(id)a3 buttonType:(long long)a4 collectionViewType:(long long)a5 animated:(BOOL)a6;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForSectionType:(long long)a0 collectionViewType:(long long)a1;
- (id)defaultSubTitleTextAttributesForCollectionViewType:(long long)a0;
- (id)defaultTextAttributesForCollectionViewType:(long long)a0;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)a0;
- (void)getFastImageFormat:(out unsigned short *)a0 qualityImageFormat:(out unsigned short *)a1 forSourceSize:(struct CGSize { double x0; double x1; })a2 destinationSize:(struct CGSize { double x0; double x1; })a3 allowCrop:(BOOL)a4;
- (void)getReferenceMaximumLength:(double *)a0 minimumNumberOfTilesToOmit:(long long *)a1 forSectionType:(long long)a2 collectionViewType:(long long)a3;
- (void)setLayoutReferenceWidth:(double)a0;
- (BOOL)shouldShowCommentBadgesInCollectionViewType:(long long)a0;
- (double)spacingBetweenSectionWithInfo:(id)a0 andHeaderWithGroupID:(id)a1;
- (double)textSpacingBetweenText:(id)a0 detailText:(id)a1;
- (struct CGSize { double x0; double x1; })thumbnailSizeForImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateFormats;

@end
