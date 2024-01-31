@class HUSideBarItemManager, NSString, HUDashboardContext, HFItem, HUSideBarViewController;
@protocol HFHomeKitObject, HMApplicationData, HUSideBarSelectionManagerDelegate;

@interface HUSideBarSelectionManager : NSObject

@property (retain, nonatomic) HUSideBarViewController *sideBarViewController;
@property (retain, nonatomic) HUSideBarItemManager *sideBarItemManager;
@property (retain, nonatomic) id<HUSideBarSelectionManagerDelegate> delegate;
@property (retain, nonatomic) NSString *currentTabIdentifier;
@property (retain, nonatomic) HUDashboardContext *currentContext;
@property (readonly, nonatomic) id<HFHomeKitObject, HMApplicationData> dashboarHomeKitObject;
@property (readonly, nonatomic) HFItem *currentSelectedItem;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)initForTest;
- (void)_didUpdateToAutomationTab;
- (void)_didUpdateToDiscoverTab;
- (void)_didUpdateToHomeTab;
- (void)_didUpdateToTabForCategory:(id)a0;
- (void)_didUpdateToTabForRoom:(id)a0;
- (void)_updateAppearanceForSidebar;
- (void)_updateSidebarSelection;
- (id)initWithSideBarViewController:(id)a0 sideBarItemManager:(id)a1 delegate:(id)a2;
- (void)updateWithSideBarViewController:(id)a0 sideBarItemManager:(id)a1;

@end
