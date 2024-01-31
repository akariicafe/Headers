@class PXSectionedSelectionManager, NSArray, UIMultiSelectInteraction, NSString, UIScrollView, PXIndexPathSet, PXUIAutoScroller;
@protocol PXSwipeSelectionManagerDelegate;

@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver, UIMultiSelectInteractionDelegate> {
    struct { BOOL selectedIndexPaths; } _needsUpdateFlags;
    struct { BOOL respondsToItemIndexPathAtLocation; BOOL respondsToItemIndexPathClosestLeadingLocation; BOOL respondsToItemIndexPathClosestAboveLocation; BOOL respondsToShouldSelectItemAtIndexPath; BOOL respondsToShouldBeginSelectionAtLocation; BOOL respondsToShouldAutomaticallyTransitionToMultiSelectModeAtPoint; BOOL respondsToAutomaticallyTransitionToMultiSelectMode; BOOL respondsToIndexPathSetFromIndexPathToIndexPath; BOOL respondsToExtendSelectionInDirection; BOOL respondsToDidAutoScroll; } _delegateFlags;
}

@property (nonatomic, setter=_setState:) unsigned long long state;
@property (nonatomic, setter=_setCurrentDataSourceIdentifier:) long long _currentDataSourceIdentifier;
@property (nonatomic, setter=_setStartingIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _startingIndexPath;
@property (nonatomic, setter=_setCurrentIndexPath:) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _currentIndexPath;
@property (retain, nonatomic, setter=_setSelectedIndexPathsBeforeSwipe:) PXIndexPathSet *_selectedIndexPathsBeforeSwipe;
@property (retain, nonatomic, setter=_setPausingChangesToken:) id _pausingChangesToken;
@property (readonly, nonatomic) PXUIAutoScroller *_autoScroller;
@property (readonly, nonatomic) UIMultiSelectInteraction *multiSelectInteraction;
@property (weak, nonatomic) id<PXSwipeSelectionManagerDelegate> delegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly, nonatomic) NSArray *keyCommandsForSelectionExtension;
@property (readonly, nonatomic) id targetForKeyCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)multiSelectInteraction:(id)a0 appendSelectionAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)didEndMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)interaction:(id)a0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x0; double x1; })a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)supportsMultiSelectInteraction:(id)a0;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)a0;
- (void)multiSelectInteraction:(id)a0 extendSelectionInDirection:(unsigned long long)a1;
- (BOOL)supportsKeyboardSelectionExtension;
- (void)multiSelectInteraction:(id)a0 toggleSelectionStateUpToPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isInMultiSelectMode;
- (BOOL)shouldBeginMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 withVelocity:(struct CGPoint { double x0; double x1; })a2;
- (void)didCancelMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_shouldBeginMultiSelectAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)removeFromView;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)sectionedDataSourceManagerInterestingObjectReferences:(id)a0;
- (BOOL)interaction:(id)a0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_endSelection;
- (BOOL)_isSelecting;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_itemIndexPathClosestLeadingLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_itemIndexPathClosestAboveLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_beginSelectionFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_invalidateSelectedIndexPaths;
- (void).cxx_destruct;
- (BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)a0;
- (void)_updateSelectionWithHitIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0 leadingClosestIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 aboveClosestIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)_updateWithDataSource:(id)a0 changeHistory:(id)a1;
- (void)autoScroller:(id)a0 didAutoscrollWithTimestamp:(double)a1;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_itemIndexPathAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)willBeginMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateSelectedIndexPaths;
- (id)initWithSelectionManager:(id)a0 scrollView:(id)a1;

@end
