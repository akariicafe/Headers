@interface PSUICellularDataPlanTableCell : PSUICarrierSpacePlanTableCell

- (id)primaryText;
- (id)detailText;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)planStatus;
- (BOOL)canBeChecked;
- (id)planDescription;
- (id)_cellularPlanItem;

@end
