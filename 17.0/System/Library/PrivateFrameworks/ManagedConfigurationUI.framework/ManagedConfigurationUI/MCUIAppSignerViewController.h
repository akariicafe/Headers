@class MCUIAppSigner, NSObject;
@protocol OS_dispatch_group, MCUIAppSignerUninstaller;

@interface MCUIAppSignerViewController : MCUITableViewController

@property (nonatomic) BOOL isNetworkReachable;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup;
@property (retain, nonatomic) id<MCUIAppSignerUninstaller> uninstaller;
@property (readonly, nonatomic) MCUIAppSigner *appSigner;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_setup;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)networkReachabilityChanged:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_trustAppSigner;
- (BOOL)isFreeDeveloper;
- (BOOL)_isTrustPreventedByLockdownMode;
- (void)_appSignerWasAddedOnlineRequired:(BOOL)a0;
- (void)_appSignerWasRemoved;
- (void)_appSignersUpdated:(id)a0;
- (BOOL)_isEnterpriseAppTrustAllowed;
- (void)_presentAppRemovalAlert;
- (void)_presentNetworkRequiredAlert;
- (void)_presentTrustAlert;
- (void)_presentVerifyAppAlert;
- (void)_removeAppSignerApps;
- (BOOL)_showTrustUntrustRow;
- (BOOL)_showVerifyRowIncludeAlmostUntrustedApps:(BOOL)a0;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(BOOL)a0;
- (void)_verifyApps;
- (id)initWithAppSigner:(id)a0;
- (id)initWithAppSigner:(id)a0 uninstaller:(id)a1;
- (void)setAppSigner:(id)a0;

@end
