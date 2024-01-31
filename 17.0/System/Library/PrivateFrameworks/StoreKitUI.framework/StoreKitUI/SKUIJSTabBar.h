@class SKUIJSTabBarItem, NSArray, SKUIApplicationController;

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar> {
    SKUIApplicationController *_applicationController;
}

@property (retain, nonatomic) SKUIJSTabBarItem *selectedTab;
@property (readonly, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) SKUIJSTabBarItem *transientTab;

- (void).cxx_destruct;
- (void)_reloadTabBarItemsWithPreludeMainThreadWork:(id /* block */)a0;
- (id)_selectedTabBarItemForIndex:(long long)a0;
- (id)initWithAppContext:(id)a0 controller:(id)a1;
- (void)sendOnNeedsContentForTabBarItem:(id)a0;
- (void)sendOnUpdate;
- (void)sendOnUpdateWithCompletion:(id /* block */)a0;

@end
