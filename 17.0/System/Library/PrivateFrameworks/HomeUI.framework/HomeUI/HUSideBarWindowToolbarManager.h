@class HUDashboardContext, NSString, HOAppNavigator, NSArray;
@protocol HUSideBarWindowToolbarManagerDelegate;

@interface HUSideBarWindowToolbarManager : NSObject <HUNavigationBarButtonOwner, HFHomeManagerObserver, HFHomeObserver, CAAnimationDelegate>

@property (retain, nonatomic) HOAppNavigator *appNavigator;
@property (retain, nonatomic) NSString *tabIdentifier;
@property (retain, nonatomic) HUDashboardContext *dashboardContext;
@property (retain, nonatomic) NSArray *dashboardStatusItems;
@property (nonatomic) unsigned long long discoverTabStyle;
@property (nonatomic) unsigned long long discoverTabPosition;
@property (nonatomic) unsigned long long viewStyle;
@property (weak, nonatomic) id<HUSideBarWindowToolbarManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldIncludeRoomsInHomeMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedToolbarManager;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (id)currentHome;
- (void).cxx_destruct;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)home:(id)a0 didUpdateNameForRoom:(id)a1;
- (void)homeDidUpdateName:(id)a0;
- (void)homeManager:(id)a0 didUpdateStateForIncomingInvitations:(id)a1;
- (id)windowTitle;
- (id)initForTest;
- (SEL)actionForToolbarItemIdentifier:(id)a0;
- (void)_dashboardTabBackButton;
- (void)_discoverTabBackButton;
- (id)accessibilityLabelForToolbarItemIdentifier:(id)a0;
- (id)addActionDelegateForNavigationBarButton:(id)a0;
- (id)editActionDelegateForNavigationBarButton:(id)a0;
- (id)homeForNavigationBarButton:(id)a0;
- (id)imageForToolbarItemIdentifier:(id)a0;
- (id)initWithAppNavigator:(id)a0;
- (id)itemIdentifiersForToolbar;
- (id)navigationActionDelegateForNavigationBarButton:(id)a0;
- (id)navigationBarButtonForToolbarItemIdentifier:(id)a0;
- (id)roomForNavigationBarButton:(id)a0;
- (BOOL)shouldUseDarkWindowAppearance;
- (id)statusItemsForNavigationBarButton:(id)a0 inHome:(id)a1;
- (unsigned long long)toolbarItemStyleForToolbarItemIdentifier:(id)a0;

@end
