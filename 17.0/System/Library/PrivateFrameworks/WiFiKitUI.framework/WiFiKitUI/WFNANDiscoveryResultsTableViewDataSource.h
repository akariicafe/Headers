@class NSOrderedSet, WiFiAwareSubscriber, WFNANTableViewContext;

@interface WFNANDiscoveryResultsTableViewDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;
@property (retain, nonatomic) WiFiAwareSubscriber *subscriber;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)initWithTableView:(id)a0 context:(id)a1 subscriber:(id)a2 sections:(id)a3 cellProvider:(id /* block */)a4;

@end
