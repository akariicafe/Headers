@class NSArray, NSString, UITabBarItem;

@interface TeaUI.TabBarNavigationController : TeaUI.NavigationController <UINavigationControllerDelegate, UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ animateAlongsideTabBarSnapshot;
    void /* unknown type, empty encoding */ viewControllerDepth;
}

@property (nonatomic, copy) NSArray *viewControllers;
@property (nonatomic, retain) UITabBarItem *tabBarItem;
@property (nonatomic, readonly) NSString *description;

- (void)showViewController:(id)a0 sender:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLoad;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRootViewController:(id)a0;
- (id)initWithRootViewController:(id)a0 navigationBarClass:(Class)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
