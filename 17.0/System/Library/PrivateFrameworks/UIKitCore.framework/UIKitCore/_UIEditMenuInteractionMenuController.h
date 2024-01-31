@class NSString, NSArray, UIEditMenuInteraction, UIView;

@interface _UIEditMenuInteractionMenuController : UIMenuController <UIEditMenuInteractionDelegate> {
    UIEditMenuInteraction *_currentMenuInteraction;
    NSArray *_extraMenuItems;
    UIView *_targetView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    BOOL _menuNeedsUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (id)init;
- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)editMenuInteraction:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)isMenuVisible;
- (void)dealloc;
- (void)editMenuInteraction:(id)a0 willPresentMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)menuItems;
- (id)_targetView;
- (void)update;
- (long long)_resolvedEditMenuArrowDirection;
- (void)_prepareEditMenuInteractionIfNeeded;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setMenuItems:(id)a0;
- (void)showMenuFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)_shouldPassthroughInView;
- (void)setMenuVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_dismissEditMenu;
- (id)_editMenuInteraction:(id)a0 firstResponderTargetForConfiguration:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetRect;
- (void).cxx_destruct;
- (void)_presentEditMenu;
- (void)_applicationDidAddDeactivationReason:(id)a0;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (void)hideMenu;
- (void)hideMenuFromView:(id)a0;

@end
