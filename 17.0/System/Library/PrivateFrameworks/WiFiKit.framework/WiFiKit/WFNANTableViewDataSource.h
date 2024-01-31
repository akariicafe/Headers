@class NSOrderedSet;

@interface WFNANTableViewDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) NSOrderedSet *sections;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithTableView:(id)a0 sections:(id)a1 cellProvider:(id /* block */)a2;

@end
