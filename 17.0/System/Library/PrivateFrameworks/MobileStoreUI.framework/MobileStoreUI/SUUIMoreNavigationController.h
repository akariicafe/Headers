@class UINavigationController, UIViewController;
@protocol SUUIMoreNavigationControllerDelegate;

@interface SUUIMoreNavigationController : UIMoreNavigationController {
    UINavigationController *_displayedViewController;
    UIViewController *_firstActualViewController;
}

@property (weak, nonatomic) id<SUUIMoreNavigationControllerDelegate> storeKitDelegate;

+ (Class)_moreListControllerClass;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (id)displayedViewController;
- (void)setDisplayedViewController:(id)a0;

@end
