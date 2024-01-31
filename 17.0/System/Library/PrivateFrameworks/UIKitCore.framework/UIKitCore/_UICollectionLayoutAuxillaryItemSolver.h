@class NSArray, NSSet, NSIndexSet, _UICollectionLayoutAuxillaryOffsets, NSDictionary, _UIRTree;
@protocol _UICollectionLayoutAuxillaryHosting;

@interface _UICollectionLayoutAuxillaryItemSolver : NSObject {
    long long _memoizedSupplementaryKind;
    NSArray *_memoizedAuxillaryItems;
    NSSet *_elementKinds;
    BOOL _hasEstimatedSizes;
    NSIndexSet *_pinnedSupplementaryIndexes;
    _UICollectionLayoutAuxillaryOffsets *_supplementariesThatCanAffectContentSize;
    unsigned long long _containerSizeDependentAxes;
    id<_UICollectionLayoutAuxillaryHosting> _auxillaryHost;
    NSArray *_frames;
    NSArray *_unpinnedFrames;
    NSDictionary *_enrolledSupplementaryFramesDict;
    NSDictionary *_supplementaryFramesKeyedByKindIndex;
    _UIRTree *_supplementaryItemGeometricIndexer;
    struct CGSize { double width; double height; } _contentSize;
    struct CGPoint { double x; double y; } _hostContentOffset;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _hostContentSizeInsets;
}

- (void).cxx_destruct;

@end
