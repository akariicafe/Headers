@class NSMutableDictionary, NSDictionary, SFFluidCollectionViewUpdate, NSArray;

@interface SFFluidTabOverviewGridLayout : SFFluidCollectionViewLayout {
    BOOL _animatingBoundsSizeChange;
    NSMutableDictionary *_cachedLayoutAttributes;
    NSDictionary *_previousCachedLayoutAttributes;
    BOOL _usesAccessibilityContentSizeCategory;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousBounds;
    SFFluidCollectionViewUpdate *_update;
    NSArray *_sectionInfos;
    NSArray *_previousSectionInfos;
}

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } sectionInsets;
@property (nonatomic) struct CGPoint { double x; double y; } itemSpacing;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double minimumItemAspectRatio;
@property (nonatomic) double maximumItemAspectRatio;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)finalizeLayout;
- (void).cxx_destruct;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finalizeAnimatedBoundsChange;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)finalLayoutAttributesForItemAtIndexPath:(id)a0;
- (void)finalizeFluidCollectionUpdate;
- (id)initialLayoutAttributesForItemAtIndexPath:(id)a0;
- (void)prepareForFluidCollectionUpdate:(id)a0;
- (BOOL)shouldInvalidateLayoutForTraitCollectionChange:(id)a0;

@end
