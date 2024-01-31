@class UIView;

@interface SKUIRedeemResultSimpleTableViewSection : SKUITableViewSection {
    UIView *_view;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (long long)numberOfRowsInSection;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forIndexPath:(id)a2;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;

@end
