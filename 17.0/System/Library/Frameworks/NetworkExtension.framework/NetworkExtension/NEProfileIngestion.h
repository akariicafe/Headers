@class NSString, NEConfigurationManager, NEConfiguration, NSMutableArray;

@interface NEProfileIngestion : NSObject <NEProfileIngestionDelegate>

@property (readonly) NSString *clientName;
@property (readonly) NSString *payloadType;
@property (readonly) NEConfigurationManager *manager;
@property (retain) NSMutableArray *currentConfigurations;
@property (retain) NEConfiguration *ingestedConfiguration;

+ (id)getServiceIDForPayload:(id)a0;
+ (void)profileMigrationComplete;

- (BOOL)removeConfigurationWithIdentifier:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeConfiguration:(id)a0;
- (id)findConfigurationByPayloadUUID:(id)a0;
- (id)copyManagedConfigurationIDs;
- (BOOL)createConfigurationFromPayload:(id)a0 payloadType:(id)a1;
- (BOOL)enableAlwaysOnVpn;
- (void)enableDefaultService;
- (id)findConfigurationByConfigurationID:(id)a0;
- (id)findConfigurationByName:(id)a0;
- (id)getCertificatesForConfigurationWithIdentifier:(id)a0;
- (id)initWithNameAndType:(id)a0 payloadType:(id)a1;
- (BOOL)isInstalled:(id)a0;
- (BOOL)loadConfigurationsForceReloadFromDisk;
- (BOOL)lockConfigurations;
- (void)removeAllConfigurationsWithPayload:(id)a0 profile:(id)a1;
- (BOOL)removeIngestedConfiguration;
- (BOOL)saveIngestedConfiguration;
- (BOOL)saveIngestedConfiguration:(id *)a0;
- (id)setAsideConfigurationName:(id)a0 unsetAside:(BOOL)a1;
- (void)unlockConfigurations;
- (BOOL)updateAccountIdentifiers:(id)a0;
- (BOOL)updateAppLayerVPNMappingRules:(id)a0;
- (BOOL)updateDefaultAfterAddingConfiguration;
- (BOOL)updateDefaultAfterDeletingConfiguration;
- (BOOL)updateManagedAppRules:(id)a0;
- (BOOL)updatePerAppMappingRules:(id)a0;

@end
