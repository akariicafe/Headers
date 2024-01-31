@class _UICollectionLayoutItemSolver;
@protocol _UICollectionLayoutAuxillaryOffsets;

@interface _UICollectionEstimatedSolutionBookmark : NSObject {
    _UICollectionLayoutItemSolver *_solution;
    id<_UICollectionLayoutAuxillaryOffsets> _supplementaryOffsets;
    struct _NSRange { unsigned long long location; unsigned long long length; } _itemRange;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _solutionFrame;
}

- (id)description;
- (void).cxx_destruct;

@end
