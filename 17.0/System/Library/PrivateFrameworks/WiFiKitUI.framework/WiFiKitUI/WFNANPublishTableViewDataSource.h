@class NSOrderedSet, WFNANTableViewContext;

@interface WFNANPublishTableViewDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithTableView:(id)a0 context:(id)a1 sections:(id)a2 cellProvider:(id /* block */)a3;

@end
