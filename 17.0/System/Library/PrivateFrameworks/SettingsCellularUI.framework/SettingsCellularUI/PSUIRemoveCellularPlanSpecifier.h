@class CTCellularPlanManager, PSUICellularPlanUniversalReference, PSListController, PSUICellularPlanManagerCache;

@interface PSUIRemoveCellularPlanSpecifier : PSConfirmationSpecifier

@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (weak, nonatomic) PSListController *hostController;
@property (nonatomic) BOOL popViewControllerOnPlanDeletion;

- (void)prepareToShowRemap:(id)a0 completion:(id /* block */)a1;
- (id)getLogger;
- (void)alignLeft;
- (void)removeCellularPlanConfirmed:(id)a0;
- (id)initWithPlanUniversalReference:(id)a0 cellularPlanManager:(id)a1 planManagerCache:(id)a2 hostController:(id)a3 popViewControllerOnPlanDeletion:(BOOL)a4;
- (void).cxx_destruct;
- (void)removeCellularPlan:(id)a0;
- (void)_didRemoveSessionComplete;
- (void)showRemapFor:(id)a0 withList:(id)a1 completion:(id /* block */)a2;
- (void)remap:(id)a0 to:(id)a1 completion:(id /* block */)a2;

@end
