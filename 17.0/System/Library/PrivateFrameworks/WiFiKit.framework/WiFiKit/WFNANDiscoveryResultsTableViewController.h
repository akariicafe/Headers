@class WiFiAwareSubscriber, NSOrderedSet, WFNANTableViewContext, NSString, WFNANDiscoveryResultsTableViewDataSource;

@interface WFNANDiscoveryResultsTableViewController : WFInsetTableViewController <WiFiAwareDataSessionDelegate>

@property (retain, nonatomic) NSOrderedSet *sections;
@property (retain, nonatomic) WFNANTableViewContext *context;
@property (retain, nonatomic) WiFiAwareSubscriber *subscriber;
@property (retain, nonatomic) NSString *passphrase;
@property (retain, nonatomic) WFNANDiscoveryResultsTableViewDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (void)dataSession:(id)a0 confirmedForPeerDataAddress:(id)a1 serviceSpecificInfo:(id)a2;
- (void)dataSession:(id)a0 failedToStartWithError:(long long)a1;
- (void)dataSession:(id)a0 terminatedWithReason:(long long)a1;
- (void)dataSessionRequestStarted:(id)a0;
- (void)_configureDataSource;
- (id)_defaultSections;
- (void)_handleDataSessionsChangedNotification:(id)a0;
- (void)_handleDiscoveryResultsChangedNotification:(id)a0;
- (id)initWithContext:(id)a0 forSubscriber:(id)a1;
- (void)passphraseTextFieldDidChange:(id)a0;

@end
