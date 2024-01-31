@interface PassbookTableCell : PSTableCell

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (BOOL)canReload;
- (void)_updateActivityIndicatorForSpecifier:(id)a0;

@end
