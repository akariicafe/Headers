@class NSBundle, NSDictionary, NSString, NSArray;

@interface IMDService : NSObject <IMSystemMonitorListener> {
    Class _sessionClass;
    NSString *_internalName;
    NSDictionary *_accountDefaults;
    NSDictionary *_serviceDefaults;
    NSDictionary *_cachedServiceDefaults;
    NSDictionary *_cachedSetupServiceDefaults;
    BOOL _blockPrefWriting;
}

@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (readonly, weak, nonatomic) Class sessionClass;
@property (readonly, weak, nonatomic) Class accountClass;
@property (readonly, nonatomic) unsigned int idSensitivity;
@property (readonly, nonatomic) BOOL handleIDInsensitivityIsCarrierBased;
@property (readonly, nonatomic) unsigned long long caseInsensitivityByHandleType;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) NSString *serviceDomain;
@property (readonly, nonatomic, getter=isIDSBased) BOOL idsBased;
@property (readonly, nonatomic, getter=isLegacy) BOOL legacy;
@property (readonly, nonatomic, getter=isDiscontinued) BOOL discontinued;
@property (readonly, nonatomic) NSDictionary *serviceDefaults;
@property (readonly, nonatomic) NSDictionary *serviceDefaultsForSetup;
@property (readonly, nonatomic) NSDictionary *defaultAccountSettings;
@property (readonly, nonatomic) BOOL requiresSingleAccount;
@property (readonly, nonatomic) BOOL shouldCreateActiveAccounts;
@property (readonly, nonatomic) BOOL wantsNullHostReachability;
@property (readonly, nonatomic) BOOL ignoresNetworkConnectivity;
@property (readonly, nonatomic) BOOL shouldForceAccountsActive;
@property (readonly, nonatomic) BOOL shouldForceAccountsConnected;
@property (readonly, nonatomic) BOOL needsLogin;
@property (readonly, nonatomic) BOOL needsPassword;
@property (readonly, nonatomic) BOOL shouldBeAlwaysLoggedIn;
@property (readonly, nonatomic) BOOL requiresHost;
@property (readonly, nonatomic) BOOL supportsRegistration;
@property (readonly, nonatomic) BOOL supportsAuthorization;
@property (readonly, nonatomic) BOOL chatsIgnoreLoginStatus;
@property (readonly, nonatomic) BOOL groupsMergeDisplayNames;
@property (readonly, nonatomic) BOOL supportsPresence;
@property (readonly, nonatomic) BOOL supportsOneSessionForAllAccounts;
@property (readonly, nonatomic) BOOL supportsDatabase;
@property (readonly, nonatomic) BOOL disallowDeactivation;
@property (readonly, nonatomic) NSArray *replicationServices;
@property (readonly, nonatomic) long long replicationSourceID;
@property (readonly, nonatomic) long long protocolVersion;
@property (readonly, nonatomic) BOOL supportsMutatingGroupMembers;

- (void)disableAccount:(id)a0;
- (id)oldInternalName;
- (void)synchronizeServiceDefaults;
- (id)mainService;
- (void)systemDidStartBackup;
- (void)accountAdded:(id)a0;
- (void)accountRemoved:(id)a0;
- (BOOL)clearOneTimeImportAccounts;
- (void)saveSettings;
- (id)_serviceDefaultsForDomain:(id)a0;
- (void)systemDidEnterMemoryPressure;
- (void)loadServiceBundle;
- (void)purgeMemoryCaches;
- (id)_copyServicePropertiesFromIMServiceBundle:(id)a0;
- (id)_defaultDefaults;
- (void)enableAccount:(id)a0;
- (id)initWithBundle:(id)a0;
- (id)newAccountWithAccountDefaults:(id)a0 accountID:(id)a1;
- (void)delayedSaveSettings;
- (void)dealloc;
- (id)_oldServiceDomain;
- (id)_serviceDomain;
- (void)_reallyUnloadServiceBundle;
- (id)createDiscontinuedAccount;
- (id)description;
- (void).cxx_destruct;

@end
