@class SCLHistoryItemView;

@interface SCLUnlockHistoryTableViewCell : PSTableCell

@property (readonly, nonatomic) SCLHistoryItemView *historyItemView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;

@end
