@class UITabBarItem;

@interface SUMoreListController : UIMoreListController {
    UITabBarItem *_tabBarItem;
}

- (id)tabBarItem;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)_reloadPreviewOverlayVisibility;
- (long long)ITunesStoreUIBarStyle;
- (void)_badgeDidChangeNotification:(id)a0;

@end
