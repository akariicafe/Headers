@class UILabel, NSMutableArray;

@interface STStorageTipInfoCell : PSTableCell {
    NSMutableArray *_constraints;
    UILabel *_infoLabel;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
