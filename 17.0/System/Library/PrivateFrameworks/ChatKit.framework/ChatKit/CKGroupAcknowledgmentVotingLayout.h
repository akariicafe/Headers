@class NSArray;

@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout

@property (copy, nonatomic) NSArray *ballotItems;
@property (nonatomic) long long expandedSection;
@property (nonatomic) BOOL isAnimatedLayoutChange;
@property (retain, nonatomic) NSArray *fromBallotItems;
@property (nonatomic) struct CGSize { double width; double height; } fromContentSize;
@property (nonatomic) struct CGPoint { double x; double y; } fromContentOffset;
@property (nonatomic) unsigned long long layoutMode;
@property (nonatomic) struct CGPoint { double x; double y; } previousCollapsedContentOffset;

- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (void)finalizeAnimatedBoundsChange;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_initializeBallotItems;
- (long long)_numberOfBallots;
- (void)_setupAnimatedCollapsedLayout;
- (void)_setupCollapsedLayout;
- (void)_setupExpandedLayout;
- (BOOL)_shouldFillInFromCenter;
- (double)_totalBallotContainersWidth;
- (void)cleanupAnimationCache;
- (void)preapareForLayoutAnimationAroundSection:(long long)a0;

@end
