@class MCDPCContainer, NSString, CPUINowPlayingButtonWrapperView, UITabBarController, NSObject, MCDPCModel;
@protocol OS_dispatch_queue;

@interface MCDBrowsableContentNavigationController : UITabBarController <UITabBarControllerDelegate, MCDPCContainerDelegate>

@property (retain, nonatomic) UITabBarController *tabBarController;
@property (retain, nonatomic) MCDPCModel *model;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) CPUINowPlayingButtonWrapperView *nowPlayingButtonView;
@property (nonatomic) BOOL hasCarScreen;
@property (retain, nonatomic) MCDPCContainer *container;
@property (nonatomic) BOOL didFinishInitialLoad;
@property (nonatomic) BOOL didFinishInitialViewAppear;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL hasInvalidatedDummyTabs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)tabBarController:(id)a0 didSelectViewController:(id)a1;
- (void)_nowPlayingButtonTapped:(id)a0;
- (void)_appRegisteredForContent:(id)a0;
- (id)_hostTabAtIndex:(unsigned long long)a0 dummyTab:(BOOL)a1;
- (void)_loadAllHostTabs;
- (void)_nowPlayingDidChange:(id)a0;
- (id)_tabBarItemForViewController:(id)a0 fromItem:(id)a1;
- (void)_updateNowPlayingButtonVisibility;
- (void)container:(id)a0 didInvalidateIndicies:(id)a1;
- (id)initWithBundleID:(id)a0 model:(id)a1;
- (void)invalidateAndReloadTabsWithCompletion:(id /* block */)a0;
- (void)updateTitleAndTabBarItemsAtIndexes:(id)a0;

@end
