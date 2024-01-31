@class PSSpecifier, PSListController;

@interface PSUISubscriptionContextMenusProductionFactory : NSObject <PSUISubscriptionContextMenusFactory>

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (nonatomic) BOOL popViewControllerOnPlanRemoval;

- (void).cxx_destruct;
- (id)createCallCache;
- (id)createDataCache;
- (id)createCallingSubgroup;
- (id)createCarrierBundleCache;
- (id)createCarrierSpaceSubgroup;
- (id)createCellularPlanManager;
- (id)createCellularPlanManagerCache;
- (id)createDataModeSubgroupWithContext:(id)a0;
- (id)createMyNumberSubgroup;
- (id)createNetworkSelectionSubgroup;
- (id)createNetworkSettingsSubgroup;
- (id)createPasscodeStatusCache;
- (id)createRoamingSpecifiersSubgroupWithServiceDescriptor:(id)a0;
- (id)createSimStatusCache;
- (id)createSimSubgroup;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 groupSpecifier:(id)a2 popViewControllerOnPlanRemoval:(BOOL)a3;
- (BOOL)shouldPopViewControllerOnPlanRemoval;

@end
