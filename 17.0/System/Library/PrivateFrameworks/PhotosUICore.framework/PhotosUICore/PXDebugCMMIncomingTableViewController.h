@class PXCMMInvitationsDataSource, PXCMMInvitationsDataSourceManager, NSString;

@interface PXDebugCMMIncomingTableViewController : UITableViewController <PXChangeObserver, PXSectionedDataSourceManagerObserver>

@property (retain, nonatomic) PXCMMInvitationsDataSource *dataSource;
@property (readonly, nonatomic) PXCMMInvitationsDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)a0;
- (void).cxx_destruct;

@end
