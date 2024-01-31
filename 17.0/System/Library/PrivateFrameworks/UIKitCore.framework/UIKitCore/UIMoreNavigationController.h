@class UIViewController, NSArray, UINavigationController, UIMoreListController;

@interface UIMoreNavigationController : UINavigationController {
    UINavigationController *_originalNavigationController;
    UIViewController *_originalRootViewController;
}

@property (readonly, nonatomic) UIMoreListController *moreListController;
@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) UIViewController *displayedViewController;
@property (nonatomic) BOOL moreViewControllersChanged;

+ (Class)_moreListControllerClass;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_ensureChildrenHaveParentViewController;
- (id)_preparedViewController:(id)a0;
- (void)_redisplayMoreTableView;
- (void)_restoreOriginalNavigationController;
- (id)_stateRestorationParentForChildViewController:(id)a0 index:(unsigned long long *)a1;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;
- (void)restoreOriginalNavigationControllerIfNecessary:(id)a0;

@end
