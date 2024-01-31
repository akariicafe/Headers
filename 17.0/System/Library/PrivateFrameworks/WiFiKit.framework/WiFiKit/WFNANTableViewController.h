@class NSOrderedSet, WFNANTableViewDataSource, WFNANTableViewContext;

@interface WFNANTableViewController : WFInsetTableViewController

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;
@property (retain, nonatomic) WFNANTableViewDataSource *dataSource;

- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handlePublishersChangedNotification:(id)a0;
- (void)_handleSubscribersChangedNotification:(id)a0;
- (BOOL)_isNANEnabled;

@end
