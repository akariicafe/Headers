@class UIControl, NSString, SUUINavigationBarMenusView, NSArray, SUUIMenuPopoverController;

@interface SUUINavigationBarMenusController : SUUINavigationBarSectionController <SUUIMenuPopoverDelegate> {
    UIControl *_focusedMenuButton;
    SUUINavigationBarMenusView *_menusView;
    NSArray *_menuViewElements;
    SUUIMenuPopoverController *_popoverController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)view;
- (void).cxx_destruct;
- (void)_destroyPopover;
- (void)_menuButtonAction:(id)a0;
- (id)_menuViewElementForView:(id)a0;
- (id)initWithMenuViewElements:(id)a0;
- (void)menuPopover:(id)a0 didSelectMenuItemAtIndex:(long long)a1;
- (void)menuPopover:(id)a0 willRepositionToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)menuPopoverDidCancel:(id)a0;
- (void)reloadSectionViews;
- (void)willAppearInNavigationBar;

@end
