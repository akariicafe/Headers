@protocol HUTableViewDiffableDataSourceDelegate;

@interface HUTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) id<HUTableViewDiffableDataSourceDelegate> delegate;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithTableView:(id)a0 cellProvider:(id /* block */)a1 delegate:(id)a2;

@end
