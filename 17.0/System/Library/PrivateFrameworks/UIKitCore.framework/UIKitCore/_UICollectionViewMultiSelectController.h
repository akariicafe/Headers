@class NSMapTable, UIMultiSelectInteraction, UICollectionView, NSString, UIMultiSelectInteractionState;

@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate_Internal> {
    long long _computedAxisConstraint;
    struct { unsigned char visibleCellsDirtied : 1; unsigned char prewarmingCellCache : 1; } _flags;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction;
@property (retain, nonatomic) UIMultiSelectInteractionState *selectionState;
@property (retain, nonatomic) NSMapTable *contentMaskCache;
@property (readonly, nonatomic, getter=isInMultiselectInteraction) BOOL inMultiselectInteraction;
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
- (id)targetForKeyCommands;
- (void)didCancelMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)keyCommandsForSelectionExtension;
- (BOOL)shouldAllowSelectionAppendageAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (id)initWithCollectionView:(id)a0;
- (void)willBeginMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 keepCurrentSelection:(BOOL)a2;
- (void)_selectIndexPaths:(id)a0;
- (void)_performWithPrewarmingCache:(id /* block */)a0;
- (BOOL)_point:(struct CGPoint { double x0; double x1; })a0 liesBeyondFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inDirection:(double)a2;
- (id)_indexPathsWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSelectedIndexPaths:(id)a0;
- (BOOL)_shouldBeginInteractionAtIndexPath:(id)a0;
- (void)uninstallFromCollectionView;
- (BOOL)_allowsBandSelectionStartingAtPoint:(struct CGPoint { double x0; double x1; })a0 multiSelectInteraction:(id)a1;
- (BOOL)multiSelectInteraction:(id)a0 shouldStartBandSelectionAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_boundingScrollViewForIndexPath:(id)a0;
- (BOOL)_testTouchPolicyAtPoint:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateContentMasksForVisibleCells;
- (void)_deselectIndexPaths:(id)a0;
- (void)_extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)a0;
- (id)selectionStartIndexPath;
- (BOOL)_isUsingTableLayoutSPI;
- (long long)axisConstraintForSingleFingerPanGestureAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)collectionViewDidUpdateVisibleCells;
- (void)selectedIndexPathsChanged:(id)a0;
- (void)multiSelectInteraction:(id)a0 selectItemsWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 leadingPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)childScrollViewAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)multiSelectInteraction:(id)a0 shouldShowBandForSelectionStartingAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)a0;
- (long long)axisConstraintAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldBeginMultiSelectInteraction:(id)a0 ofType:(long long)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 withVelocity:(struct CGPoint { double x0; double x1; })a3;
- (id)_autoScrollAssistantForIndexPaths:(id)a0;
- (void)clearSelectionState;
- (id)indexPathsBetweenIndexPath:(id)a0 andIndexPath:(id)a1;
- (id)_collectionViewDelegate;
- (id)_antecedentIndexPathsForLayoutAttributes:(id)a0 inDirection:(double)a1;
- (void)_autoScrollAtIndexPaths:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1;
- (long long)axisConstraintAtIndexPath:(id)a0;
- (BOOL)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)selectionEndIndexPath;
- (long long)_hitTestForSystemEditControlAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)multiSelectInteraction:(id)a0 toggleSelectionWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 leadingPoint:(struct CGPoint { double x0; double x1; })a2;

@end
