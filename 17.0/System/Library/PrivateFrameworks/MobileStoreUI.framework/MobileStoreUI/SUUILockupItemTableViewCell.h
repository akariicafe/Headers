@class SUUILockupItemCellLayout;

@interface SUUILockupItemTableViewCell : SUUIItemTableViewCell

@property (readonly, nonatomic) SUUILockupItemCellLayout *layout;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureForItem:(id)a0 clientContext:(id)a1 rowIndex:(long long)a2;

@end
