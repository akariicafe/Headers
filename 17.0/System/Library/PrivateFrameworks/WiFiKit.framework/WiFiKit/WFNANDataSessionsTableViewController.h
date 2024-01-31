@class NSOrderedSet, WFNANTableViewContext, WiFiAwarePublisher, WFNANDataSessionsTableViewDataSource;

@interface WFNANDataSessionsTableViewController : WFInsetTableViewController

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;
@property (retain, nonatomic) WiFiAwarePublisher *publisher;
@property (retain, nonatomic) WFNANDataSessionsTableViewDataSource *dataSource;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleDataSessionsChangedNotification:(id)a0;
- (id)initWithContext:(id)a0 forPublisher:(id)a1;

@end
