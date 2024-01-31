@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController

@property (retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus;

- (id)init;
- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (void)cellularPlanChanged;

@end
