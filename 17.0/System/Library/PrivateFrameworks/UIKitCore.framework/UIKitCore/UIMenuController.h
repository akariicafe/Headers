@class NSArray;

@interface UIMenuController : NSObject

@property (class, readonly, nonatomic) UIMenuController *sharedMenuController;

@property (nonatomic, getter=isMenuVisible) BOOL menuVisible;
@property (nonatomic) long long arrowDirection;
@property (copy, nonatomic) NSArray *menuItems;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } menuFrame;

- (id)init;
- (id)menuItems;
- (void)update;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setMenuItems:(id)a0;
- (void)showMenuFromView:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setMenuVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)hideMenu;
- (void)hideMenuFromView:(id)a0;
- (id)_asCalloutBarDelegate;

@end
