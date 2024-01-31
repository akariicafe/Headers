@class NSArray, NSMutableArray, NSString;
@protocol ICDocCamThumbnailViewLayoutDelegate;

@interface ICDocCamReorderingThumbnailCollectionViewLayout : UICollectionViewLayout <UICollectionViewDelegate>

@property (nonatomic) double itemSpacing;
@property (nonatomic) double topBottomMargins;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double itemHeight;
@property (nonatomic) BOOL layoutCacheIsValid;
@property (nonatomic) struct CGSize { double width; double height; } cachedContentSize;
@property (copy, nonatomic) NSArray *itemAttributes;
@property (retain, nonatomic) NSMutableArray *imageSizeCache;
@property (nonatomic) unsigned long long currentItem;
@property (nonatomic) double currentInterPageScrollPosition;
@property (readonly, nonatomic) double extraSpacingForCurrentItem;
@property (retain, nonatomic) NSMutableArray *deleteIndexPaths;
@property (retain, nonatomic) NSMutableArray *insertIndexPaths;
@property (readonly, weak, nonatomic) id<ICDocCamThumbnailViewLayoutDelegate> delegate;
@property (nonatomic) BOOL movingItem;
@property (nonatomic) BOOL isScrollingBetweenPages;
@property (nonatomic) BOOL isScrubbing;
@property (nonatomic) BOOL isUndergoingOrientationChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)effectiveAspectRatioForSize:(struct CGSize { double x0; double x1; })a0;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)a0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })a1;
- (double)horizontalContentOffsetForItem:(unsigned long long)a0;
- (double)horizontalContentOffsetAdjustmentForItem:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })itemSizeForImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setContentOffsetForItem:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setCurrentItem:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setInterPageScrollPosition:(double)a0;
- (void)updateLayoutCacheIfNecessary;

@end
