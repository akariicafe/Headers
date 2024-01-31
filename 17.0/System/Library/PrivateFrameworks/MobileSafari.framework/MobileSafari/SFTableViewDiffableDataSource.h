@protocol SFTableViewDiffableDataSourceDelegate;

@interface SFTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (weak, nonatomic) id<SFTableViewDiffableDataSourceDelegate> delegate;

- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;

@end
