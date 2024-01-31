@class _UIFulfilledContextMenuConfiguration, NSArray, _UIContextMenuUIController, NSString;
@protocol _UIContextMenuPresentationDelegate;

@interface _UIContextMenuPresentation : _UIClickPresentation <_UIContextMenuUIControllerDelegate, _UIContextMenuPreviewPresentationControllerDelegate>

@property (weak, nonatomic) id<_UIContextMenuPresentationDelegate> delegate;
@property (readonly, nonatomic) _UIContextMenuUIController *uiController;
@property (nonatomic) BOOL suppressInputViewDuringPresentation;
@property (readonly, nonatomic) _UIFulfilledContextMenuConfiguration *menuConfiguration;
@property (readonly, nonatomic) NSArray *visibleMenus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss;
- (void)present;
- (void).cxx_destruct;
- (id)_platformMetrics;
- (void)contextMenuPreviewPresentationController:(id)a0 didChangePreviewContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)contextMenuUIController:(id)a0 didBeginDragWithTouch:(id)a1;
- (void)contextMenuUIController:(id)a0 didRequestDismissalWithReason:(unsigned long long)a1 alongsideActions:(id /* block */)a2 completion:(id /* block */)a3;
- (void)contextMenuUIController:(id)a0 didSelectMenuLeaf:(id)a1;
- (id)contextMenuUIController:(id)a0 dismissalPreviewForItem:(id)a1 clientReturnedPreview:(BOOL *)a2;
- (id)contextMenuUIController:(id)a0 willDisplayMenu:(id)a1;
- (void)contextMenuUIControllerDidEndPanInteraction:(id)a0;
- (BOOL)contextMenuUIControllerShouldAllowSwipeToDismissForBeginningPanInteraction:(id)a0;
- (void)contextMenuUIControllerWillPerformLayout:(id)a0 withPreviewSize:(struct CGSize { double x0; double x1; })a1;
- (void)displayMenu:(id)a0 inPlaceOfMenu:(id)a1;
- (void)dragWillCancelWithAnimator:(id)a0;
- (id)initWithPresentingViewController:(id)a0 configuration:(id)a1 style:(id)a2;
- (id)livePreviewForDragItem:(id)a0 preferringFullSize:(BOOL)a1;
- (id)preferredFocusEnvironmentsForContextMenuPreviewPresentationController:(id)a0;
- (void)prepareToDismiss;
- (void)prepareToPresent;
- (id)previewForCancellingDragItem:(id)a0;
- (void)requestMenuDismissal;
- (void)retargetDismissingMenuToPreview:(id)a0;
- (void)setAlongsideAnimatorForDismissal:(id)a0;
- (void)setAlongsideAnimatorForPresentation:(id)a0;
- (void)viewTraitCollectionDidChange;
- (id)windowSceneActivationPreview;

@end
