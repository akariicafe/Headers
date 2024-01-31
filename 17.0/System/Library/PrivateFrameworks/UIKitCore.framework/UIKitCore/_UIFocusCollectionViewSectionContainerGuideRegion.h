@class UICollectionView;

@interface _UIFocusCollectionViewSectionContainerGuideRegion : _UIFocusContainerGuideRegion

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sectionFrame;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1 withSnapshot:(id)a2;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 coordinateSpace:(id)a1;

@end
