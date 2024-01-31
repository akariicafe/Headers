@class UILabel;

@interface PSUIConvertedCellularPlanTableCell : PSTableCell

@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *statusLabel;

+ (long long)cellStyle;

- (id)textLabel;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)canReload;
- (id)detailTextLabel;
- (BOOL)canBeChecked;
- (void)_setLabel:(id)a0 andDescription:(id)a1;

@end
