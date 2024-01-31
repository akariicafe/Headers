@class NSCollectionLayoutSection, _UICollectionPreferredSizes, _UICollectionLayoutSectionDescriptor;
@protocol _UICollectionLayoutSectionSolver, _UIContentInsetsEnvironment;

@interface _UICollectionSectionSolutionBookmark : NSObject {
    id<_UICollectionLayoutSectionSolver> _solution;
    NSCollectionLayoutSection *_section;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _globalFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _globalPinningFrame;
    id<_UIContentInsetsEnvironment> _insetEnvironment;
    id<_UIContentInsetsEnvironment> _supplementaryInsetEnvironment;
    _UICollectionPreferredSizes *_preferredSizes;
    _UICollectionLayoutSectionDescriptor *_memoizedDescriptor;
}

- (id)description;
- (void).cxx_destruct;

@end
