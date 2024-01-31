@class UIDragInteraction, NSArray, _UICollectionViewDragSourceControllerSessionState, UICollectionView, NSString, _UICollectionViewDragSourceControllerDragState, NSIndexPath;
@protocol _UICollectionViewDragSourceControllerDelegate, UIDragSession;

@interface _UICollectionViewDragSourceController : NSObject <UIDragInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id<_UICollectionViewDragSourceControllerDelegate> delegate;
@property (retain, nonatomic) _UICollectionViewDragSourceControllerSessionState *sessionState;
@property (retain, nonatomic) _UICollectionViewDragSourceControllerDragState *dragState;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL dragItemsCreatedForReordering;
@property (readonly, nonatomic) id<UIDragSession> dragSession;
@property (readonly, nonatomic) long long currentSessionItemCount;
@property (readonly, nonatomic) NSIndexPath *dragFromIndexPath;
@property (readonly, nonatomic) NSArray *dragFromIndexPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerForCollectionView:(id)a0 delegate:(id)a1;

- (long long)_dragInteraction:(id)a0 dataOwnerForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)dragInteraction:(id)a0 session:(id)a1 willAddItems:(id)a2 forInteraction:(id)a3;
- (id)_dragSourceDelegateActual;
- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)dragInteraction:(id)a0 prefersFullSizePreviewsForSession:(id)a1;
- (void)dealloc;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (id)_dragInteraction:(id)a0 sessionPropertiesForSession:(id)a1;
- (BOOL)dragInteraction:(id)a0 sessionAllowsMoveOperation:(id)a1;
- (long long)_dragInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)dragInteraction:(id)a0 sessionDidTransferItems:(id)a1;
- (void)setDragInteractionEnabled:(BOOL)a0;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (void)dragInteraction:(id)a0 session:(id)a1 didEndWithOperation:(unsigned long long)a2;
- (BOOL)_delegateImplementsDragSourceDidAddItem;
- (void)dragInteraction:(id)a0 sessionDidMove:(id)a1;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (BOOL)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;
- (id)_dragSourceDelegateProxy;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)a0;
- (BOOL)_delegateImplementsDragSourceItemsAtIndexPath;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (void)dragInteraction:(id)a0 willAnimateLiftWithAnimator:(id)a1 session:(id)a2;
- (id)_queryForItemsFromClientForSession:(id)a0 dataSourceIndexPath:(id)a1 location:(struct CGPoint { double x0; double x1; })a2 isInitialQuery:(BOOL)a3;
- (id)dragInteraction:(id)a0 sessionForAddingItems:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (BOOL)_delegateImplementsDragItemsForItemAtIndexPath;
- (void)_sessionWillBegin:(id)a0 forDragInteraction:(id)a1;
- (void).cxx_destruct;
- (id)_previewParametersForItemAtIndexPath:(id)a0;
- (id)_dragDelegateProxy;
- (id)_filterCandidateIndexPaths:(id)a0 forUserSelectedIndexPath:(id)a1 session:(id)a2;
- (void)_addDragItemsToExistingSession:(id)a0 forDataSourceIndexPath:(id)a1;
- (id)_dragAndDropController;
- (id)initWithCollectionView:(id)a0 delegate:(id)a1;
- (id)_dragDelegateActual;
- (id)indexPathForDragItem:(id)a0;
- (void)deactivate;
- (BOOL)_delegateImplementsSelector:(SEL)a0;
- (void)_configureInteraction;
- (long long)_dataOwnerForDragSession:(id)a0 atIndexPath:(id)a1;

@end
