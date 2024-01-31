@interface PSUICarrierSpacePlanTableCell : PSTableCell

+ (id)checkIcon;
+ (id)spacerIcon;

- (id)accessoryText;
- (id)primaryText;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (id)detailText;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setChecked:(BOOL)a0;
- (BOOL)canBeChecked;

@end
