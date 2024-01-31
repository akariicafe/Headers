@class NSOrderedSet, WiFiAwarePublisher, WFNANTableViewContext;

@interface WFNANDataSessionsTableViewDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;
@property (retain, nonatomic) WiFiAwarePublisher *publisher;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithTableView:(id)a0 context:(id)a1 publisher:(id)a2 sections:(id)a3 cellProvider:(id /* block */)a4;

@end
