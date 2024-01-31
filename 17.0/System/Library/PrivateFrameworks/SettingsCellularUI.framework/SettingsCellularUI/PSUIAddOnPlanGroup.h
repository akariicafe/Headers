@class TSSIMSetupFlow, NSString, PSSpecifier, CTCellularPlanManager, NSMutableArray, PSListController, PSUICellularPlanManagerCache;

@interface PSUIAddOnPlanGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup> {
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
    NSString *_carrierName;
    NSMutableArray *_remotePlansSpecifiers;
}

@property (weak, nonatomic) PSListController *listController;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)_addButtonPressed:(id)a0;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void)_handleAddRemotePlan:(id)a0;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 planManager:(id)a2 ctPlanManager:(id)a3;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (id)specifiersForRemotePlans;

@end
