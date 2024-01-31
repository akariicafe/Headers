@class UINavigationController, NSArray, NSString, UIViewController;
@protocol VUITabBarControllerUpdatingDelegate;

@interface VUITabBarController : UITabBarController <UITabBarControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AMSUIMessageViewControllerDelegate, VUITVAppRootViewController, VUITabBarProtocol, VUITabBarChildViewControllerInteraction>

@property (copy, nonatomic) id /* block */ longPressHandler;
@property (nonatomic) unsigned long long previousSelectedIndex;
@property (nonatomic) BOOL hasSetTabBarIndex;
@property (retain, nonatomic) NSArray *tabBarItems;
@property (weak, nonatomic) id<VUITabBarControllerUpdatingDelegate> updatingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UINavigationController *currentNavigationController;
@property (readonly, nonatomic) UIViewController *currentViewController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, getter=isTabBarHidden) BOOL tabBarHidden;

+ (id)_tabBarImageForResource:(id)a0;
+ (BOOL)shouldIgnoreLastSelectedTabIndex;

- (id)init;
- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (void)dealloc;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)viewDidLoad;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)_setSelectedViewController:(id)a0;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)a0;
- (void)setVuiSelectedIndex:(unsigned long long)a0;
- (void)_addAndPresentBubbleTipIfAny:(id)a0;
- (void)_handleSelectedViewControllerDidChange;
- (void)_saveLastSelectedAndScrollToTop:(id)a0 selectedIndex:(unsigned long long)a1 previousSelectedIndex:(unsigned long long)a2;
- (id)_tabBarChildViewControllerWithIdentifier:(id)a0 documentRef:(id)a1 isNonServerTab:(BOOL)a2 title:(id)a3 isSelectedTab:(BOOL)a4 appContext:(id)a5 iconResource:(id)a6 contextData:(id)a7 childItems:(id)a8 uiConfigDict:(id)a9;
- (void)_updateTabBarChildViewController:(id)a0 withTitle:(id)a1;
- (void)_updateTabbarChildViewController:(id)a0 withTitle:(id)a1 iconResource:(id)a2;
- (unsigned long long)indexForTabBarItemIdentifier:(id)a0;
- (void)removeAllChildViewControllers;
- (void)setSelectedIndexForTabBarItemIdentifier:(id)a0;
- (void)updateWithTabBarItems:(id)a0 setSelectedIdentifierFromDefaults:(BOOL)a1 appContext:(id)a2;
- (id)viewControllerWithTabIdentifier:(id)a0;

@end
