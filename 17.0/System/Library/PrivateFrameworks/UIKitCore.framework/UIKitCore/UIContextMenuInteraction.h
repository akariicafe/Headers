@class UIGestureRecognizer, _UIContextMenuAnimator, _UIClickPresentationInteraction, UIContextMenuConfiguration, NSSet, NSMutableDictionary, NSString, UIView, _UIContextMenuPresentation;
@protocol UIMenuLeaf, UIContextMenuInteractionDelegate, NSCopying;

@interface UIContextMenuInteraction : NSObject <_UIContextMenuPresentationDelegate, UIDeferredMenuElementDelegate, _UIVisualStyleStylable, _UIClickPresentationInteractionDelegateInternal, _UIWindowSceneActivator_Internal, UIInteraction> {
    struct { BOOL highlightPreviewForItemWithIdentifier; BOOL dismissalPreviewForItemWithIdentifier; BOOL willPerformPreviewAction; BOOL willDisplay; BOOL willEndForConfiguration; BOOL styleForMenu; BOOL accessoriesForMenu; BOOL shouldByDelayedByGestureRecognizer; BOOL asyncConfigurationForMenuAtLocation; BOOL overrideSuggestedActions; BOOL shouldPresent; BOOL shouldAllowDragAfterDismiss; BOOL shouldAllowSwipeToDismiss; BOOL interactionEffectForTargetedPreview; BOOL shouldAttemptToPresentConfiguration; BOOL didPerformMenuLeaf; BOOL previewForHighlighting; BOOL previewForDismissing; BOOL _dci_secondaryHighlightPreview; BOOL _dci_secondaryDismissalPreview; BOOL willCommit; } _delegateImplements;
}

@property (class, readonly, nonatomic) id<NSCopying> visualStyleRegistryIdentity;

@property (retain, nonatomic) UIContextMenuConfiguration *pendingConfiguration;
@property (retain, nonatomic) NSMutableDictionary *configurationsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *presentationsByIdentifier;
@property (retain, nonatomic) _UIContextMenuPresentation *outgoingPresentation;
@property (readonly, nonatomic) _UIClickPresentationInteraction *presentationInteraction;
@property (retain, nonatomic) _UIContextMenuAnimator *pendingCommitAnimator;
@property (nonatomic) BOOL _requiresTouchAuthentication;
@property (nonatomic) BOOL allowSimultaneousRecognition;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForFailureRelationships;
@property (readonly, nonatomic, getter=_reachedForceThreshold) BOOL reachedForceThreshold;
@property (readonly, nonatomic) BOOL _hasVisibleMenu;
@property (readonly, nonatomic) unsigned long long _inputPrecision;
@property (readonly, nonatomic) UIGestureRecognizer *_gestureRecognizerForBeginningDragRelationships;
@property (weak, nonatomic, setter=_setProxySender:) id _proxySender;
@property (readonly, nonatomic) NSSet *_internalIdentifiersForDismissingMenu;
@property (nonatomic) BOOL _useSenderAsResponderSender;
@property (weak, nonatomic) id<UIMenuLeaf> _selectedMenuLeaf;
@property (readonly, weak, nonatomic) id<UIContextMenuInteractionDelegate> delegate;
@property (readonly, nonatomic) long long menuAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (void)_setDefaultDriverClasses:(id)a0 forIdiom:(long long)a1;

- (void)dealloc;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)a0;
- (void)_willBeginWithConfiguration:(id)a0;
- (void)deferredMenuElementWasFulfilled:(id)a0;
- (void).cxx_destruct;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)setDrivers:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)updateVisibleMenuWithBlock:(id /* block */)a0;
- (void)dismissMenu;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (id)gestureRecognizerForExclusionRelationships;
- (unsigned long long)_actualLayoutForPreferredLayout:(unsigned long long)a0 withConfiguration:(id)a1;
- (void)_clickPresentationInteraction:(id)a0 dragSessionDidEndForItems:(id)a1;
- (id)_clickPresentationInteraction:(id)a0 interactionEffectForTargetedPreview:(id)a1;
- (void)_clickPresentationInteraction:(id)a0 item:(id)a1 willAnimateDragCancelWithAnimator:(id)a2;
- (id)_clickPresentationInteraction:(id)a0 liveDragPreviewForPresentation:(id)a1 dragItem:(id)a2;
- (id)_clickPresentationInteraction:(id)a0 previewForCancellingDragItem:(id)a1;
- (BOOL)_clickPresentationInteraction:(id)a0 shouldBeDelayedByGestureRecognizer:(id)a1;
- (void)_clickPresentationInteraction:(id)a0 shouldBeginWithTouch:(id)a1 completion:(id /* block */)a2;
- (void)_clickPresentationInteraction:(id)a0 shouldPresentWithCompletion:(id /* block */)a1;
- (void)_clickPresentationInteractionEnded:(id)a0 forPresentation:(id)a1 reason:(unsigned long long)a2;
- (BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)a0;
- (BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(id)a0;
- (BOOL)_clickPresentationInteractionShouldAssociateWithDrag:(id)a0;
- (void)_contextMenuPresentationPreviewWasTapped:(id)a0;
- (id)_delegate_configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_delegate_contextMenuInteractionWillDisplayForConfiguration:(id)a0;
- (id)_delegate_contextMenuInteractionWillEndForConfiguration:(id)a0 presentation:(id)a1;
- (id)_delegate_getAccessoryViewsForConfiguration:(id)a0;
- (id)_delegate_previewForDismissingForConfiguration:(id)a0 clientReturnedPreview:(BOOL *)a1;
- (id)_delegate_previewForHighlightingForConfiguration:(id)a0;
- (void)_delegate_tappedPreviewForConfiguration:(id)a0 withAnimator:(id)a1;
- (id)_fulfilledConfigurationForConfiguration:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_interactionShouldBeginAtPlatformPoint:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_menuPreparedForDisplayWithMenu:(id)a0 firstResponder:(id)a1;
- (void)_performCleanupForConfigurationWithIdentifier:(id)a0;
- (void)_prepareSceneActivationConfiguration:(id)a0;
- (void)_presentMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_presentMenuAtPlatformPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_requestSceneActivationWithConfiguration:(id)a0 animated:(BOOL)a1 sender:(id)a2 errorHandler:(id /* block */)a3;
- (void)_retargetDismissingMenuWithInternalIdentifier:(id)a0 toPreview:(id)a1 force:(BOOL)a2;
- (id)_secondaryPreviewsForClickPresentationInteraction:(id)a0;
- (BOOL)_shouldKeepInputViewVisibleForStyle:(id)a0;
- (id)_suggestedMenuForConfiguration:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })_testing_metdataForMenuElements:(id)a0;
- (void)contextMenuPresentation:(id)a0 didBeginDragWithTouch:(id)a1;
- (void)contextMenuPresentation:(id)a0 didRequestDismissalWithReason:(unsigned long long)a1 alongsideActions:(id /* block */)a2 completion:(id /* block */)a3;
- (void)contextMenuPresentation:(id)a0 didSelectMenuLeaf:(id)a1;
- (id)contextMenuPresentation:(id)a0 dismissalPreviewForItem:(id)a1 clientReturnedPreview:(BOOL *)a2;
- (id)contextMenuPresentation:(id)a0 willDisplayMenu:(id)a1;
- (void)contextMenuPresentationDidEndPanInteraction:(id)a0;
- (BOOL)contextMenuPresentationShouldAllowSwipeToDismissForBeginningPanInteraction:(id)a0;

@end
