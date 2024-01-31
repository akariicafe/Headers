@class NSString, HUDataAnalyticsModuleController, HUActivityLoadingView;
@protocol HFMediaProfileContainer;

@interface HUDataAnalyticsLogListViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUDataAnalyticsModuleControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HUActivityLoadingView *activityLoadingView;
@property (readonly, nonatomic) HUDataAnalyticsModuleController *analyticsModuleController;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_watchForReload;
- (void)_kickoffReload;
- (BOOL)bypassInitialItemUpdateReload;
- (void)dataAnalyticsModuleController:(id)a0 didSelectItem:(id)a1;
- (id)hu_preloadContent;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithMediaProfileContainer:(id)a0;
- (id)itemModuleControllers;

@end
