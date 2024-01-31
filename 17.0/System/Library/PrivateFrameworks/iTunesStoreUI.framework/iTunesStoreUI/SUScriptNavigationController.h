@class SUScriptViewController, UINavigationController, SUScriptNavigationBar;

@interface SUScriptNavigationController : SUScriptViewController {
    UINavigationController *_navController;
}

@property (readonly) SUScriptNavigationBar *navigationBar;
@property BOOL navigationBarHidden;
@property (copy) id toolbarHidden;
@property (readonly) SUScriptViewController *topViewController;
@property (retain) id viewControllers;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)popViewControllerAnimated:(BOOL)a0;
- (void)setNavigationBar:(id)a0;
- (void)dealloc;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)_className;
- (id)_navigationController;
- (void)_setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)popToRootViewControllerAnimated:(BOOL)a0;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setToolbarHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)attributeKeys;
- (void)_popViewControllerAnimated:(BOOL)a0;
- (id)scriptAttributeKeys;
- (void)setTopViewController:(id)a0;
- (id)_copyNativeViewControllersFromScriptViewControllers:(id)a0;
- (id)_filteredViewControllers;
- (void)_popToRootViewControllerAnimated:(BOOL)a0;
- (void)_pushViewController:(id)a0 animated:(BOOL)a1;
- (void)didPerformBatchedInvocations;
- (id)initWithRootScriptViewController:(id)a0 clientInterface:(id)a1;
- (id)newNativeViewController;
- (void)willPerformBatchedInvocations;

@end
