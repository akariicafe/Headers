@class UIMenu, NSTimer, NSArray, UIView, UITextInteractionAssistant, UIWindow, UITextContextMenuInteraction, NSNumber;

@interface _UITextInteractionEditMenuAssistant : NSObject {
    NSTimer *_delayedEditMenuTimer;
    NSNumber *_interactionAssistantViewRespondsShouldShowEditMenu;
    BOOL _wasShowingEditMenuBeforeScroll;
}

@property (readonly, weak, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (retain, nonatomic) UITextContextMenuInteraction *menuInteraction;
@property (readonly, nonatomic) NSArray *replacements;
@property (readonly, nonatomic) UIMenu *overrideMenu;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _editMenuTargetRect;
@property (readonly, nonatomic) BOOL _editMenuIsVisible;
@property (readonly, nonatomic) BOOL _editMenuIsVisibleOrDismissedRecently;
@property (readonly, nonatomic) BOOL _editMenuDismissedRecently;
@property (readonly, nonatomic) BOOL _editMenuDismissedByActionSelection;
@property (readonly, nonatomic) BOOL _hasTextReplacements;
@property (readonly, nonatomic) UIWindow *_editMenuSourceWindow;
@property (readonly, nonatomic) UIView *_selectionView;

- (void)showSelectionCommands;
- (void)_showCommandsWithReplacements:(id)a0 forDictation:(BOOL)a1 afterDelay:(double)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBoundingBox;
- (void)hideSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)a0;
- (void)cancelDelayedCommandRequests;
- (void)_showSelectionCommandsForContextMenu:(BOOL)a0;
- (void)showReplacementsWithGenerator:(id)a0 forDictation:(BOOL)a1 afterDelay:(double)a2;
- (void)_presentEditMenuWithPreferredDirection:(long long)a0 replacements:(id)a1;
- (void)showCalloutBarAfterDelay:(double)a0;
- (void)showCommandsWithReplacements:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBoundingBoxForRects:(id)a0;
- (id)_screenCoordinateSpace;
- (void).cxx_destruct;
- (void)calculateReplacementsWithGenerator:(id)a0 andShowAfterDelay:(double)a1;
- (id)initWithInteractionAssistant:(id)a0;
- (BOOL)_updateEditMenuPositionForPreferredArrowDirection:(long long)a0 replacements:(id)a1;
- (void)_showCommandsWithReplacements:(id)a0 isForContextMenu:(BOOL)a1 forDictation:(BOOL)a2 arrowDirection:(long long)a3;
- (void)_hideSelectionCommandsWithReason:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clippedTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didReceiveSelectionDidScrollNotification:(id)a0;
- (void)_didReceiveSelectionWillScrollNotification:(id)a0;
- (id)_editMenuConfigurationForCurrentSelectionWithPreferredArrowDirection:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_editMenuRawTargetRect;
- (BOOL)_isAffectedByScrollNotification:(id)a0;
- (void)_presentEditMenuWithPreferredDirection:(long long)a0 overrideMenu:(id)a1;
- (void)_presentEditMenuWithPreferredDirection:(long long)a0 replacements:(id)a1 overrideMenu:(id)a2;
- (id)_selectionViewCoordinateSpace;
- (id)_textViewCoordinateSpace;
- (id)_windowCoordinateSpace;
- (id)menuElementsForReplacements:(id)a0;

@end
