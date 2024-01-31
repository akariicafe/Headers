@class NSArray, CKAttributionViewControllerDataModel, UICollectionViewLayoutAttributes;

@interface CKAttributionCollectionViewLayout : UICollectionViewLayout

@property (copy, nonatomic) NSArray *attributeCollections;
@property (nonatomic) long long expandedSection;
@property (nonatomic) BOOL isAnimatedLayoutChange;
@property (retain, nonatomic) NSArray *fromAttributeCollections;
@property (nonatomic) struct CGSize { double width; double height; } fromContentSize;
@property (nonatomic) struct CGPoint { double x; double y; } fromContentOffset;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *stickerDetailsLayoutAttributes;
@property (readonly, nonatomic) CKAttributionViewControllerDataModel *dataModel;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct CGPoint { double x; double y; } previousContentOffset;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataModel:(id)a0;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)finalizeAnimatedBoundsChange;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_initializeAttributeCollections;
- (void)_setupCollapsedLayout;
- (void)_setupExpandedLayout;
- (BOOL)_shouldFillInFromCenter;
- (double)_totalBallotContainersWidth;
- (void)cleanupAnimationCache;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1 fromAttributesCollection:(id)a2;
- (void)prepareForSectionLayoutAnimation:(long long)a0;
- (void)setupAnimatedCollapsedLayout;

@end
