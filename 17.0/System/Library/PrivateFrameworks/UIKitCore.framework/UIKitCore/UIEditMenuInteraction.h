@class _UIEditMenuPresentation, UIContextMenuInteraction, NSString, UIView, UIEditMenuConfiguration;
@protocol UIEditMenuInteractionDelegate, UIMenuLeaf, NSCopying, UIInteractionEffect;

@interface UIEditMenuInteraction : NSObject <UIDeferredMenuElementDelegate, _UIEditMenuPresentationDelegate, UIInteraction_Internal, _UIVisualStyleStylable, UIInteraction> {
    struct { unsigned char menuForSuggestedActions : 1; unsigned char targetRectForConfiguration : 1; unsigned char willPresentAnimator : 1; unsigned char willDismissAnimator : 1; unsigned char asyncMenuForSuggestedActions : 1; unsigned char didTransition : 1; unsigned char titleView : 1; unsigned char firstResponderTarget : 1; unsigned char didPerformMenuLeaf : 1; } _delegateImplements;
    double _lastDismissalTime;
    BOOL _dismissedByMenuAction;
}

@property (class, readonly, nonatomic) BOOL _isOutOfProcessEditMenusEnabled;
@property (class, readonly, nonatomic) id<NSCopying> visualStyleRegistryIdentity;

@property (retain, nonatomic) UIEditMenuConfiguration *pendingConfiguration;
@property (retain, nonatomic) UIEditMenuConfiguration *activeConfiguration;
@property (readonly, nonatomic) _UIEditMenuPresentation *activeEditMenuPresentation;
@property (readonly, nonatomic) _UIEditMenuPresentation *_outgoingPresentation;
@property (nonatomic) BOOL _includeMenuControllerItems;
@property (readonly, nonatomic) BOOL _dismissedRecently;
@property (readonly, nonatomic) BOOL _dismissedByActionSelection;
@property (nonatomic, getter=isDisplayingMenu) BOOL displayingMenu;
@property (weak, nonatomic) id<UIMenuLeaf> _selectedMenuLeaf;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (weak, nonatomic, setter=_setProxySender:) id _proxySender;
@property (nonatomic, setter=_setUseSenderAsResponderSender:) BOOL _useSenderAsResponderSender;
@property (nonatomic, setter=_setEnforcesMenuControllerLifecycle:) BOOL _enforcesMenuControllerLifecycle;
@property (nonatomic) BOOL presentsContextMenuAsSecondaryAction;
@property (readonly, weak, nonatomic) id<UIEditMenuInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<UIInteractionEffect> interactionEffect;
@property (readonly, weak, nonatomic) UIView *view;

- (id)_menuForSuggestedActions:(id)a0 configuration:(id)a1;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void)_prepareMenuAtLocation:(struct CGPoint { double x0; double x1; })a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
- (void)_contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)_editMenuPresentation:(id)a0 didTransitionMenuForConfiguration:(id)a1;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)_editMenuPresentation:(id)a0 titleViewForMenu:(id)a1 configuration:(id)a2;
- (void)didMoveToView:(id)a0;
- (void)_updateVisibleMenuWithReason:(long long)a0 updateBlock:(id /* block */)a1;
- (void)_dismissMenuWithPresentationType:(long long)a0;
- (void)_willDismissMenuForConfiguration:(id)a0 animator:(id)a1;
- (struct { unsigned long long x0; unsigned long long x1; double x2; double x3; long long x4; })_anchorForPreferredArrowDirection:(long long)a0;
- (void)willMoveToView:(id)a0;
- (void)updateVisibleMenuPositionAnimated:(BOOL)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)reloadVisibleMenu;
- (id)_menuPreparationContextForConfiguration:(id)a0;
- (void)_editMenuPresentation:(id)a0 willPresentMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)_willPresentMenuForConfiguration:(id)a0 animator:(id)a1;
- (void)deferredMenuElementWasFulfilled:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrameInCoordinateSpace:(id)a0;
- (id)firstResponderTargetForConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_updateContextMenuInteractionDrivers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetRectForConfiguration:(id)a0;
- (void)_didMoveFromWindow:(id)a0 toWindow:(id)a1;
- (void)presentEditMenuWithConfiguration:(id)a0;
- (id)_defaultSuggestedActionsAtLocation:(struct CGPoint { double x0; double x1; })a0 configuration:(id)a1;
- (void)_editMenuPresentation:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)dismissMenu;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editMenuPresentation:(id)a0 targetRectForConfiguration:(id)a1;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)_editMenuPresentation:(id)a0 didSelectMenuLeaf:(id)a1 completion:(id /* block */)a2;
- (void)_editMenuPresentation:(id)a0 preparedMenuForDisplay:(id)a1 completion:(id /* block */)a2;

@end
