@class UINavigationController, NSString, NSHashTable, UIViewController;

@interface _VUITVAppNavigationController : UINavigationController <UINavigationControllerDelegate, VUITVAppRootViewController>

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) unsigned long long maxNavControllerStackDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;

- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)loadView;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)setTitle:(id)a0;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)_handleMaxStackDepth;
- (void)_notifyObserversOfViewControllerChange:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)dismissAllModals:(id /* block */)a0;
- (void)vui_addControllerObserver:(id)a0;
- (id)vui_popToRootViewControllerAnimated:(BOOL)a0;
- (id)vui_popViewControllerAnimated:(BOOL)a0;
- (void)vui_pushViewController:(id)a0 animated:(BOOL)a1;
- (id)vui_rootViewController;
- (void)vui_setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)vui_topViewController;
- (id)vui_viewControllers;
- (id)vui_visibleViewController;

@end
