@class NSString, FBKBugFormTableViewController;

@interface FBKBugFormDiffableDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) NSString *_attachmentSectionHeaderCached;
@property (weak, nonatomic) FBKBugFormTableViewController *thisViewController;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;

@end
