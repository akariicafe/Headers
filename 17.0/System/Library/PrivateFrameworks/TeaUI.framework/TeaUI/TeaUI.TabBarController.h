@class NSArray;

@interface TeaUI.TabBarController : UITabBarController <UITabBarControllerDelegate> {
    void /* unknown type, empty encoding */ barView;
    void /* unknown type, empty encoding */ tabBarOrder;
    void /* unknown type, empty encoding */ primaryTabBarItemIdentifier;
    void /* unknown type, empty encoding */ extendedDelegate;
    void /* unknown type, empty encoding */ styler;
}

@property (nonatomic, copy) NSArray *viewControllers;

- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (BOOL)tabBarController:(id)a0 shouldSelectViewController:(id)a1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
