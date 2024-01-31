@class NSString, UIView;

@interface _UICalloutBarMenuController : UIMenuController <UICalloutBarDelegate> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetRect;
    UIView *_targetView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMenuVisible;
- (void)dealloc;
- (id)menuItems;
- (id)_targetView;
- (void)update;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setMenuItems:(id)a0;
- (void)showMenuFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setMenuVisible:(BOOL)a0 animated:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_targetRect;
- (void).cxx_destruct;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (void)hideMenu;
- (void)hideMenuFromView:(id)a0;
- (void)_removeWindowWillRotateObserver;
- (id)_asCalloutBarDelegate;
- (void)_hideMenuAnimated:(BOOL)a0;
- (BOOL)_menuHidden;
- (void)_reparentCalloutBarIfNeeded;
- (void)_showMenuAnimated:(BOOL)a0;
- (BOOL)_updateAnimated:(BOOL)a0 checkVisible:(BOOL)a1;
- (void)_windowWillRotate:(id)a0;
- (void)calloutBar:(id)a0 didFinishAnimation:(id)a1;
- (void)calloutBar:(id)a0 willStartAnimation:(id)a1;

@end
