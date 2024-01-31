@class _UIDragDestinationControllerSessionState, _UIDragDestinationControllerDropProposalState, CADisplayLink, _UIDragDestinationControllerReorderingState, UIDropInteraction, UICollectionViewDropProposal, NSString, UICollectionView, NSIndexPath;
@protocol _UICollectionViewDragDestinationControllerDelegate, UIDropSession;

@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIDropInteraction *dropInteraction;
@property (weak, nonatomic) id<_UICollectionViewDragDestinationControllerDelegate> delegate;
@property (retain, nonatomic) CADisplayLink *reorderDisplayLink;
@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState;
@property (retain, nonatomic) _UIDragDestinationControllerReorderingState *reorderingState;
@property (retain, nonatomic) _UIDragDestinationControllerDropProposalState *dropProposalState;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL supportsLocalSessionReordering;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, nonatomic) UICollectionViewDropProposal *currentDropProposal;
@property (readonly, nonatomic) id<UIDropSession> currentDropSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerForCollectionView:(id)a0 delegate:(id)a1;

- (void)_cancelInteractiveReorderingIfNeeded;
- (void)_commitCurrentInteractiveReordering;
- (void)dealloc;
- (id)_dragDestinationDelegateActual;
- (void)_cancelCurrentInteractiveReorder;
- (void)dragSourceSelectedItemCountDidChangeWithCount:(long long)a0;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)a0 withCurrentDragLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_resumeReorderingDisplayLink;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)a0;
- (BOOL)_shouldPerformMovementForProposal:(id)a0;
- (id)_dropDelegateProxy;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (BOOL)_isLocalInteractiveMove;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)a0;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (BOOL)hasPerformedReordering;
- (BOOL)_shouldQueryDropActionForIndexPath:(id)a0;
- (BOOL)_isMultiItemSource;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (id)_dragDestinationDelegateProxy;
- (void).cxx_destruct;
- (void)_reorderingDisplayLinkDidTick;
- (id)_dropDelegateActual;
- (void)_commitCurrentDragAndDropSession;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)a0 indicatorLayoutAttributes:(id)a1;
- (void)dropWasCancelled;
- (BOOL)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)a0 proposedNextItemAttributes:(id)a1;
- (void)_pauseReorderingDisplayLink;
- (id)_dragAndDropController;
- (id)_effectiveDropProposalForProposal:(id)a0;
- (void)_configureReorderingDisplayLinkIfNeeded;
- (id)initWithCollectionView:(id)a0 delegate:(id)a1;
- (void)deactivate;
- (void)_configureInteraction;
- (void)_endInteractiveReorderingIfNeeded;

@end
