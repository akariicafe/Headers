@interface _UICollectionLayoutSectionDescriptor : NSObject {
    BOOL _clipsContentToBounds;
    BOOL _excludesBoundarySupplementariesFromClipping;
    unsigned long long _axis;
    long long _orthogonalScrollingBehavior;
    double _orthogonalScrollingDecelerationRate;
    long long _orthogonalScrollingBounce;
    double _cornerRadius;
    double _pagingDimension;
    double _groupDimension;
    double _interPageDimension;
    struct CGVector { double dx; double dy; } _scrollingUnitVector;
    struct CGPoint { double x; double y; } _contentOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrame;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _contentInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _orthogonalScrollViewLayoutFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerLayoutFrame;
}

@end
