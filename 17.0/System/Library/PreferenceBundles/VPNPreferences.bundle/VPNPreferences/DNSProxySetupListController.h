@class NSUUID, NSString, NSDictionary;

@interface DNSProxySetupListController : PSListController

@property unsigned long long vpnGrade;
@property (retain) NSUUID *serviceID;
@property (retain) NSString *displayName;
@property (retain) NSString *appName;
@property (retain) NSString *organization;
@property (retain) NSDictionary *includedBundleIDs;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)bundle;
- (void)loadView;
- (id)connection;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)appWillEnterForeground:(id)a0;
- (id)displayNameForSpecifier:(id)a0;
- (id)getDescriptionForApp:(id)a0;
- (void)setStateForServiceID:(id)a0;
- (id)statusForConnection:(id)a0;
- (void)vpnConfigurationChanged:(id)a0;
- (id)vpnGradeNameForSpecifier:(id)a0;
- (void)vpnStatusChanged:(id)a0;

@end
