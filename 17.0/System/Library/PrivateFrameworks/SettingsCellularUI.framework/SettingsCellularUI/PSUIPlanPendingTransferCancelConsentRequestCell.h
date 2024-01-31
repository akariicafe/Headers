@class CTCellularPlanManager, CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)getLogger;
- (void).cxx_destruct;
- (void)cancelPressed;

@end
