@class UINavigationBar, HUDashboardFilterBarController, NSString;
@protocol HUDashboardNavigator;

@interface HUDashboardNavigationController : UINavigationController <HUDashboardNavigationBarDelegate, HUVendsDashboardNavigator, HUDashboardFilterBarDelegate, HUEditActionDelegate>

@property (readonly, nonatomic) HUDashboardFilterBarController *filterBarController;
@property (retain, nonatomic) UINavigationBar *displayedNavigationBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HUDashboardNavigator> dashboardNavigator;
@property (readonly, nonatomic) NSString *editActionTitle;
@property (readonly, nonatomic) NSString *editActionTitleLocalizationKey;
@property (readonly, nonatomic) BOOL supportsEditing;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewLayoutMarginsDidChange;
- (void)endEditing;
- (long long)preferredStatusBarStyle;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)splitViewController;
- (id)_targetNavigationBarForUISplitViewControllerSidebarButton;
- (void)navigationBar:(id)a0 didPushItem:(id)a1;
- (BOOL)navigationBar:(id)a0 shouldPopItem:(id)a1;
- (BOOL)navigationBar:(id)a0 shouldPushItem:(id)a1;
- (void)startEditing;
- (void)_customAnimationForHomeVCToDetailVC:(id)a0 detailVCWallpaper:(id)a1;
- (void)_customAnimationForPoppingBackToHomeVCWithHomeVCWallpaper:(id)a0;
- (id)_editActionDelegate;
- (id)_loadWallpaperForViewController:(id)a0;
- (BOOL)_shouldDisableAnimationForViewController:(id)a0;
- (void)dashboardFilterBarController:(id)a0 didUpdatePreferredHeight:(double)a1;
- (void)navigationBar:(id)a0 didChangeBackgroundVisibility:(BOOL)a1;
- (BOOL)popToBottomNavigationControllerWithCustomAnimation;
- (void)sendContextMenuMetricsWithTitleLocalizationKey:(id)a0;

@end
