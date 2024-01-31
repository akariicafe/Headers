@class NSOrderedSet, WFNANTableViewContext, NSString, WFNANSubscribeTableViewDataSource;

@interface WFNANSubscribeTableViewController : WFInsetTableViewController

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;
@property (retain, nonatomic) WFNANSubscribeTableViewDataSource *dataSource;
@property (retain, nonatomic) NSString *serviceName;

- (void)dismissKeyboard;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleAddSubscriber;
- (void)_handleDiscoveryResultsChangedNotification:(id)a0;
- (void)_handleSubscribersChangedNotification:(id)a0;
- (void)clearInputFields;

@end
