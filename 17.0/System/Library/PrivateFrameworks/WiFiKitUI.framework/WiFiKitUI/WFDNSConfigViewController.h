@class WFAppearanceProxy, NSArray, NSMutableArray, UIBarButtonItem;

@interface WFDNSConfigViewController : WFInsetTableViewController

@property (nonatomic) long long originalDNSConfig;
@property (nonatomic) long long dnsConfig;
@property (retain, nonatomic) NSArray *originalServers;
@property (retain, nonatomic) NSMutableArray *servers;
@property (retain, nonatomic) NSArray *originalDomains;
@property (retain, nonatomic) NSMutableArray *domains;
@property (retain, nonatomic) UIBarButtonItem *saveButton;
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy;
@property (nonatomic) BOOL shouldShowPrivacyRelayHeader;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) id /* block */ saveHandler;

- (void)save:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_updateSaveEnabled;
- (id)initWithConfig:(id)a0 appearanceProxy:(id)a1;
- (void)_addDomainAtIndexPath:(id)a0;
- (void)_addServerAtIndexPath:(id)a0;
- (double)_configCellLeadingInset;
- (BOOL)_isChinaDevice;
- (long long)sectionForSectionNumber:(long long)a0;
- (long long)sectionNumberForSection:(long long)a0;

@end
