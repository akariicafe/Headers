@class UITableView, NSString, UIMultiSelectInteraction, UIMultiSelectInteractionState;

@interface _UITableViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction;
@property (retain, nonatomic) UIMultiSelectInteractionState *currentSelectionState;
@property (readonly, nonatomic, getter=isInMultiselectInteraction) BOOL inMultiselectInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)multiSelectInteraction:(id)a0 appendSelectionAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)didEndMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)uninstallFromTableView;
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
- (id)initWithTableView:(id)a0;
- (id)keyCommandsForSelectionExtension;
- (BOOL)shouldAllowSelectionAppendageAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)toggleSelectionStateUpToIndexPath:(id)a0;
- (BOOL)_isPointInsideEditControl:(struct CGPoint { double x0; double x1; })a0;
- (void)willBeginMultiSelectInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 keepCurrentSelection:(BOOL)a2;
- (void)_adjustSelectionRangeToIndexPath:(id)a0 isDeselecting:(BOOL)a1;
- (void)_endAutoScroll;
- (void)_selectIndexPaths:(id)a0;
- (void)_handleAutoScrollFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldBeginInteractionAtIndexPath:(id)a0;
- (id)_tableViewDelegate;
- (void)_deselectIndexPaths:(id)a0;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)a0;
- (void)selectedIndexPathsChanged:(id)a0;
- (void)_updateSelectedIndexPathsForCurrentSelection;
- (BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)a0;
- (BOOL)shouldBeginMultiSelectInteraction:(id)a0 ofType:(long long)a1 atPoint:(struct CGPoint { double x0; double x1; })a2 withVelocity:(struct CGPoint { double x0; double x1; })a3;
- (void)clearSelectionState;
- (void)_updateSelectedIndexPaths:(id)a0;
- (void)willBeginExtendingSelectionAtIndexPath:(id)a0 keepingSelection:(BOOL)a1;

@end
