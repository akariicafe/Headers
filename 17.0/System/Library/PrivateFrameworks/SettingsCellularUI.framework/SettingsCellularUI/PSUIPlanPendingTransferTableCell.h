@class UIImageView, CTCellularPlanPendingTransfer;

@interface PSUIPlanPendingTransferTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) UIImageView *view;
@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
