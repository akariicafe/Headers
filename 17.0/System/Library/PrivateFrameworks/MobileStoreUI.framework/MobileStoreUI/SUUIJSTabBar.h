@class NSArray, SUUIJSTabBarItem, SUUIApplicationController;

@interface SUUIJSTabBar : IKJSObject <SUUIJSTabBar> {
    SUUIApplicationController *_applicationController;
}

@property (retain, nonatomic) SUUIJSTabBarItem *selectedTab;
@property (readonly, nonatomic) NSArray *tabs;
@property (readonly, nonatomic) SUUIJSTabBarItem *transientTab;

- (void).cxx_destruct;
- (void)_reloadTabBarItemsWithPreludeMainThreadWork:(id /* block */)a0;
- (id)_selectedTabBarItemForIndex:(long long)a0;
- (id)initWithAppContext:(id)a0 controller:(id)a1;
- (void)sendOnNeedsContentForTabBarItem:(id)a0;
- (void)sendOnUpdate;
- (void)sendOnUpdateWithCompletion:(id /* block */)a0;

@end
