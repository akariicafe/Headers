@interface CKSpamExtensionCell : PSTableCell

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void)setChecked:(BOOL)a0;
- (BOOL)usesStandardBackgroundImage;

@end
