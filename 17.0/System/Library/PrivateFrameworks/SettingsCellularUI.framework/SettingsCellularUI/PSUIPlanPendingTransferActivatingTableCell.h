@class CTCellularPlanPendingTransfer, UIActivityIndicatorView;

@interface PSUIPlanPendingTransferActivatingTableCell : PSUIDanglingPlanTableCell

@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;

- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_setStatusLabelText;

@end
