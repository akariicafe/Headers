@class _UIFocusRegionMapSnapshot, UIFocusSystem, UIView;

@interface _UIFocusRegionMap : NSObject

@property (retain, nonatomic) _UIFocusRegionMapSnapshot *lastSnapshot;
@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIFocusSystem *focusSystem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } minimumSearchArea;

- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewSearchRectForSnapshotRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_closestFocusableRegionInArray:(id)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 usingHeading:(unsigned long long)a2 withFocusedView:(id)a3 consideringFavoredRegion:(BOOL)a4 includingFocusedView:(BOOL)a5;
- (BOOL)_containsFocusableRegionForView:(id)a0;
- (id)_contextWithSourceView:(id)a0 focusedContainerGuide:(id)a1 movement:(id)a2;
- (id)_contextWithSourceView:(id)a0 focusedRegion:(id)a1 movement:(id)a2;
- (struct CGPoint { double x0; double x1; })_focusCandidateSearchOriginForFocusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 heading:(unsigned long long)a1 minimumSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_focusCandidateSearchRectForFocusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 heading:(unsigned long long)a1 minimumSearchArea:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_nearestCandidateForFocusMovement:(id)a0 fromFocusedView:(id)a1 withFocusedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 includingFocusedView:(BOOL)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectThatJustBarelyIntersectsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 startingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewSearchRectForFocusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 focusCandidateSearchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 includesFocusedFrame:(BOOL)a2;
- (id)initWithRootView:(id)a0 focusSystem:(id)a1;
- (id)linearlyOrderedCandidatesForFocusMovement:(id)a0 fromView:(id)a1 indexForFocusedView:(unsigned long long *)a2;
- (id)linearlyOrderedFocusRegionMapEntriesForFocusMovement:(id)a0 fromView:(id)a1;
- (id)nearestCandidateFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
