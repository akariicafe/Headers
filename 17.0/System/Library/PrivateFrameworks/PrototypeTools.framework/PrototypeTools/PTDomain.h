@class PTSettings, NSString, PTDomainInfo, NSXPCConnection, NSMutableDictionary, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient> {
    NSXPCConnection *_serverConnection;
    PTDomainInfo *_domainInfo;
    NSString *_domainID;
    PTSettings *_rootSettings;
    NSMutableDictionary *_testRecipesByIdentifier;
    PTTestRecipe *_activeTestRecipe;
    BOOL _registrationRequested;
    BOOL _registrationCompleted;
    BOOL _haveSentProxyDefinition;
    double _delayBeforeRegisteringAfterInterruption;
    BOOL _archiveIsApplied;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)domainGroupName;
+ (Class)rootSettingsClass;
+ (id)rootSettings;
+ (id)_sharedInstance;
+ (id)domainName;
+ (void)registerTestRecipe:(id)a0;

- (void)dealloc;
- (id)_init;
- (void)_handleConnectionInvalidated;
- (void)_createConnection;
- (void)_handleConnectionInterrupted;
- (void).cxx_destruct;
- (id)_domainID;
- (id)_rootSettings;
- (void)_sendProxyDefinitionIfNecessary;
- (void)_applyArchive:(id)a0;
- (void)_applyArchiveValue:(id)a0 forKeyPath:(id)a1;
- (void)_disableObservationIfNecessary;
- (id)_domainInfo;
- (void)_noteRegistrationCompleted;
- (void)_registerTestRecipe:(id)a0;
- (void)_registerWithServerIfNecessary;
- (void)_restoreDefaultSettings;
- (void)_tearDownConnection;
- (void)_updateActiveTestRecipe;
- (void)_updateServerConnectionStatusIfNecessary;
- (void)invokeOutletAtKeyPath:(id)a0;
- (void)restoreDefaultSettings;
- (void)sendActiveTestRecipeEvent:(long long)a0;
- (void)setArchiveValue:(id)a0 forKeyPath:(id)a1;
- (void)updateSettingsFromArchive:(id)a0;

@end
