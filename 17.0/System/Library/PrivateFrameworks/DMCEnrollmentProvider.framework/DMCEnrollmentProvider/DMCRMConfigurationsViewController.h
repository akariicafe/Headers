@class NSArray, RMConfigurationsSpecifierProvider;

@interface DMCRMConfigurationsViewController : DMCProfileTableViewController

@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmSpecifierProvider;
@property (retain, nonatomic) NSArray *rmTableSectionCells;
@property (retain, nonatomic) NSArray *rmSectionTitles;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_rmConfigsChanged:(id)a0;
- (void)_setSections;
- (id)initWithRMConfigurationsSpecifierProvider:(id)a0;

@end
