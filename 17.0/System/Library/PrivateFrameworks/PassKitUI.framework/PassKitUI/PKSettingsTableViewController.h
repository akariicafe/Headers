@class PKSettingsTableViewConfiguration, PKTableViewDiffableDataSource;

@interface PKSettingsTableViewController : UITableViewController {
    PKTableViewDiffableDataSource *_dataSource;
    PKSettingsTableViewConfiguration *_currentConfiguration;
}

- (id)sections;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)applyConfiguration:(id)a0 animated:(BOOL)a1;
- (void)applyConfiguration:(id)a0 reconfigureItems:(BOOL)a1 animated:(BOOL)a2;
- (long long)indexOfSectionWithIdentifier:(id)a0;

@end
