@class WFNetworkSettingsCellFactory, NSOrderedSet, WFNANTableViewContext, NSString, WFNANPublishTableViewDataSource;

@interface WFNANPublishTableViewController : WFInsetTableViewController

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;
@property (retain, nonatomic) WFNetworkSettingsCellFactory *cellFactory;
@property (retain, nonatomic) WFNANPublishTableViewDataSource *dataSource;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) long long serviceType;
@property (retain, nonatomic) NSString *instanceName;
@property (retain, nonatomic) NSString *serviceSpecificInfo;
@property (nonatomic) BOOL isServiceSpecificInfoHex;
@property (nonatomic) NSString *portNumber;
@property (nonatomic) long long protocolType;
@property (nonatomic) NSString *passphrase;

- (void)dismissKeyboard;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleAddPublisher;
- (void)_handleDataSessionsChangedNotification:(id)a0;
- (void)_handlePublishersChangedNotification:(id)a0;
- (void)clearInputFields;
- (id)createTextFieldCellWithTableView:(id)a0 indexPath:(id)a1 text:(id)a2 placeholder:(id)a3 keyboardType:(long long)a4 textChangedHandler:(id /* block */)a5;
- (id)serviceSpecificInfoFromString;

@end
