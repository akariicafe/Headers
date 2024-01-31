@class UIDragInteraction, NSMapTable, UITableViewCell, NSMutableOrderedSet, NSString, NSIndexPath, UITableView;
@protocol UIDragSession, _UITableViewDragControllerDelegate;

@interface _UITableViewDragController : NSObject <UIDragInteractionDelegate_Internal>

@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) UITableView<_UITableViewDragControllerDelegate> *tableView;
@property (retain, nonatomic) UITableViewCell *initiatingCell;
@property (retain, nonatomic) NSIndexPath *initiatingIndexPath;
@property (retain, nonatomic) NSMutableOrderedSet *indexPaths;
@property (retain, nonatomic) UITableViewCell *tentativeInitiatingCell;
@property (retain, nonatomic) NSIndexPath *tentativeInitiatingIndexPath;
@property (retain, nonatomic) NSMutableOrderedSet *tentativeIndexPaths;
@property (retain, nonatomic) id<UIDragSession> dragSession;
@property (retain, nonatomic) NSMapTable *cellsAnimatingCancel;
@property (nonatomic) long long clientEnabledState;
@property (nonatomic) BOOL forceEnabledForReordering;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) UITableViewCell *draggedCell;
@property (readonly, nonatomic) NSIndexPath *draggedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabledByDefault;

- (void)uninstallFromTableView;
- (long long)_dragInteraction:(id)a0 dataOwnerForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)dragInteraction:(id)a0 session:(id)a1 willAddItems:(id)a2 forInteraction:(id)a3;
- (id)initWithTableView:(id)a0;
- (void)setupDragInteraction;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)dragInteraction:(id)a0 prefersFullSizePreviewsForSession:(id)a1;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (void)clearTentativeRows;
- (id)_dragInteraction:(id)a0 sessionPropertiesForSession:(id)a1;
- (BOOL)dragInteraction:(id)a0 sessionAllowsMoveOperation:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (void)resetDragState;
- (BOOL)canProvideItemsForDragAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (void)forceReset;
- (void)addTentativeRowAtIndexPath:(id)a0;
- (void)beginDragForTentativeRows;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (id)dragInteraction:(id)a0 sessionForAddingItems:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)beginDragOfRowsForSession:(id)a0 notifyDelegate:(BOOL)a1;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (void)immediatelyBeginDragWithTouch:(id)a0;
- (void).cxx_destruct;
- (BOOL)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(id)a0;
- (void)updateDragInteractionEnabledState;

@end
