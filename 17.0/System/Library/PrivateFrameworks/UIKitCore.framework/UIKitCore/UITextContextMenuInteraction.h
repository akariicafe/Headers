@class UIContextMenuInteraction, NSString, UIEditMenuInteraction, UIContextMenuConfiguration, UIEditMenuConfiguration;
@protocol UIContextMenuInteractionDelegate;

@interface UITextContextMenuInteraction : UITextInteraction <UIContextMenuInteractionDelegate_Private, UIContextMenuInteractionDelegate_ForWebKitOnly, _UIContextMenuInteractionDelegateInternal, _UIEditMenuInteractionDelegateInternal> {
    struct { BOOL previewForHighlighting_DEPR; BOOL previewForDismissing_DEPR; BOOL highlightPreviewForItem; BOOL dismissalPreviewForItem; BOOL willPerformPreviewAction; BOOL willDisplay; BOOL willEndForConfiguration; BOOL styleForMenu; BOOL accessoriesForMenu; BOOL shouldBeDelayedByGestureRecognizer; BOOL asyncConfigurationForMenuAtLocation; BOOL overrideSuggestedActions; BOOL shouldAttemptToPresent; BOOL interactionEffectForTargetedPreview; } _externalDelegateImplements;
    UIEditMenuConfiguration *_currentInputUIConfiguration;
    UIEditMenuConfiguration *_currentSelectionCommandsConfiguration;
    BOOL _isPresentingOrDismissingContextMenu;
}

@property (readonly, nonatomic) UIEditMenuInteraction *editMenuInteraction;
@property (readonly, nonatomic) UIContextMenuConfiguration *externallyManagedConfiguration;
@property (weak, nonatomic) id<UIContextMenuInteractionDelegate> externalContextMenuDelegate;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, nonatomic) BOOL dismissedRecently;
@property (readonly, nonatomic) BOOL isDisplayingMenu;
@property (readonly, nonatomic) BOOL dismissedByActionSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 dismissalPreviewForItemWithIdentifier:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;
- (id)init;
- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)editMenuInteraction:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)_contextMenuInteraction:(id)a0 configuration:(id)a1 interactionEffectForTargetedPreview:(id)a2;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)_logDeprecatedMenuControllerUsageIfNeeded;
- (void)_contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (id)_contextMenuInteraction:(id)a0 accessoriesForMenuWithConfiguration:(id)a1;
- (void)presentMenuForInputUI:(id)a0;
- (void)editMenuInteraction:(id)a0 willPresentMenuForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)_contextMenuInteraction:(id)a0 shouldBeDelayedByGestureRecognizer:(id)a1;
- (BOOL)_isExternalConfiguration:(id)a0;
- (void)_editMenuInteraction:(id)a0 didPerformMenuLeaf:(id)a1 target:(id)a2;
- (BOOL)_shouldBridgeMenuControllerItems;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)didMoveToView:(id)a0;
- (void)_editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2 completionHandler:(id /* block */)a3;
- (void)willMoveToView:(id)a0;
- (void)_presentEditMenuForInputUI;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)isDisplayingMenuForSelectionCommands;
- (void)presentSelectionCommandsWithConfiguration:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInTextInputViewForLocationInView:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_textInputIsSecure;
- (id)_editMenuForCurrentSelectionWithSuggestedActions:(id)a0 isEditMenu:(BOOL)a1;
- (id)_editMenuInteraction:(id)a0 titleViewForMenu:(id)a1 configuration:(id)a2;
- (void)_didPerformMenuLeaf:(id)a0 target:(id)a1;
- (void).cxx_destruct;
- (void)_contextMenuInteraction:(id)a0 didPerformMenuLeaf:(id)a1 target:(id)a2;
- (id)_editMenuForSuggestedActions:(id)a0 rvItem:(id)a1 isEditMenu:(BOOL)a2;
- (void)dismissMenuForInputUI;
- (void)updateVisibleMenuPosition;
- (void)_querySelectionCommandsForConfiguration:(id)a0 suggestedActions:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissSelectionCommandsWithReason:(long long)a0;
- (id)_currentInputUIMenuElements;
- (BOOL)isDisplayingMenuForInputUI;
- (void)prepareForContextMenuAtLocationInView:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (BOOL)_contextMenuInteraction:(id)a0 shouldAttemptToPresentConfiguration:(id)a1;
- (id)_targetedPreviewForCurrentSelection;
- (id)_suggestedActionsForContextMenuInteraction:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;

@end
