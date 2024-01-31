@class NSString, _UICollectionLayoutSupplementaryEnroller, UITraitCollection, _UICollectionLayoutItemSolver, NSCollectionLayoutSection, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutAuxillaryItemSolver, NSIndexSet;
@protocol NSCollectionLayoutContainer;

@interface _UICollectionLayoutSectionFixedSolver : NSObject <_UICollectionLayoutSectionSolver, _UICollectionLayoutAuxillaryHosting> {
    _UICollectionLayoutItemSolver *_solution;
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;
    _UICollectionLayoutSupplementaryEnroller *_sectionSupplementaryEnroller;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    id<NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _overrideContentRectForPinning;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> container;
@property (retain, nonatomic) id<NSCollectionLayoutContainer> supplementaryContainer;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) BOOL layoutRTL;
@property (nonatomic) unsigned long long layoutAxis;
@property (nonatomic) unsigned long long containerLayoutAxis;
@property (nonatomic) long long frameCount;
@property (nonatomic) struct CGVector { double dx; double dy; } orthogonalScrollingPrefetchingUnitVector;
@property (readonly, nonatomic) unsigned long long containerSizeDependentAxes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrameIncludingAuxiliaries;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } primaryContentFrame;
@property (readonly, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (readonly, nonatomic) NSString *errorDescription;
@property (nonatomic) BOOL shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint { double x; double y; } orthogonalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3 preferredSizes:(id)a4;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (id)auxillaryHostPreferredSizes;
- (id)supplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (id)auxillaryHostContainer;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostSupplementaryEnroller;
- (id)frameForIndex:(long long)a0;
- (id)auxillaryHostTraitCollection;
- (unsigned long long)auxillaryHostLayoutAxis;
- (id)visualDescription;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (id)sectionSupplementaryFrameForIndex:(long long)a0;
- (id)auxillaryHostAuxillaryItems;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 frameOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)solveForContainer:(id)a0 supplementaryContainer:(id)a1 traitCollection:(id)a2 layoutAxis:(unsigned long long)a3 frameCount:(long long)a4 preferredSizes:(id)a5 layoutRTL:(BOOL)a6;
- (id)resolveWithParameters:(id)a0 preferredSizes:(id)a1;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overrideContentRectForPinning:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })preferredSizeGroupingRangeForItemAtIndex:(long long)a0;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)queryFramesIntersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)auxillaryHostPaddingBeforeBoundarySupplementaries;
- (id)unpinnedSectionSupplementaryFrameForIndex:(long long)a0;
- (id)sectionSupplementaryFrameWithKind:(id)a0 index:(long long)a1;
- (double)_dimensionForRootGroupAlongAxis:(unsigned long long)a0;
- (void)solveForContainer:(id)a0 traitCollection:(id)a1 layoutAxis:(unsigned long long)a2 frameCount:(long long)a3;

@end
