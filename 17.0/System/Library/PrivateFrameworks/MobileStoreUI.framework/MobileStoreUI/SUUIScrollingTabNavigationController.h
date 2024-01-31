@class NSString;
@protocol SUUINavigationStackObserver;

@interface SUUIScrollingTabNavigationController : SUUINavigationController <SUUIScrollingTabBarBottomInsetAwareContent, SUUIObservableNavigationStack>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SUUINavigationStackObserver> navigationStackObserver;
@property (nonatomic, getter=isShowingNavigationStackRootContent) BOOL showingNavigationStackRootContent;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (double)_scrollViewBottomContentInsetForViewController:(id)a0;
- (void)_observedNavigationStackDidChange;
- (void)popToNavigationStackRootContentAnimated:(BOOL)a0 withBehavior:(long long)a1;
- (void)scrollingTabBarBottomInsetAdjustmentDidChange;

@end
