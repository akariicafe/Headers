@class NSArray;

@interface PXTimelineContentModeTableViewController : UITableViewController

@property (retain, nonatomic) NSArray *dataSource;
@property (readonly, nonatomic) unsigned long long contentMode;
@property (readonly, nonatomic) unsigned long long widgetSizeClass;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)_fetchAssetSourcesForContentMode:(unsigned long long)a0;
- (id)initWithContentMode:(unsigned long long)a0 widgetSizeClass:(unsigned long long)a1;

@end
