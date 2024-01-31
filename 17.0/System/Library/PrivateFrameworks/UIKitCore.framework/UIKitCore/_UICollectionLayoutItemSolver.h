@class NSString, NSCollectionLayoutItem, _UICollectionPreferredSizes, _UICollectionLayoutSupplementaryEnroller, _UICollectionLayoutItemSolverState, UITraitCollection;
@protocol NSCollectionLayoutContainer;

@interface _UICollectionLayoutItemSolver : NSObject <NSCopying, _UICollectionLayoutAuxillaryHosting> {
    BOOL _layoutRTL;
    BOOL _solvingConsumedDirtyPreferredSizes;
    NSCollectionLayoutItem *_item;
    id<NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    unsigned long long _containerSizeDependentLayoutAxes;
    _UICollectionLayoutItemSolverState *_solveResult;
    _UICollectionPreferredSizes *_preferredSizes;
    _UICollectionLayoutSupplementaryEnroller *_supplementaryEnroller;
    long long _solutionRecursionDepth;
    long long _maxFrameCount;
    unsigned long long _layoutAxis;
    struct CGSize { double width; double height; } _largestKnownItemSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _uncommittedSolvedItemFrame;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })auxillaryHostContentSize;
- (BOOL)auxillaryHostWantsOverlapAdjustmentForMatchingAlignmentsOnly;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })auxillaryHostPinningRect;
- (id)auxillaryHostPreferredSizes;
- (id)auxillaryHostContainer;
- (struct CGPoint { double x0; double x1; })auxillaryHostAdditionalFrameOffset;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostTraitCollection;
- (unsigned long long)auxillaryHostLayoutAxis;
- (BOOL)auxillaryHostShouldLayoutRTL;
- (id)auxillaryHostAuxillaryItems;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
