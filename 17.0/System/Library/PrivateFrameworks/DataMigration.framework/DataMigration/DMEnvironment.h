@interface DMEnvironment : NSObject

@property (nonatomic) BOOL testMigrationInfrastructureOnly;

+ (id)sharedInstance;
+ (BOOL)isBuildVersion:(id)a0 equalToBuildVersion:(id)a1;

- (BOOL)deviceModeIsSharediPad;
- (unsigned long long)migrationRebootCount;
- (id)buildVersion;
- (id)migrationRebootCountPref;
- (BOOL)shouldImposePluginArtificialHang;
- (id)lastMigrationResultsPref;
- (void)setLastBuildVersionPref:(id)a0;
- (void)setMigrationRebootCount:(unsigned long long)a0;
- (void)setUserDataDispositionPref:(id)a0;
- (void)clearContext;
- (void)setLastMigrationResultsPref:(id)a0;
- (id)lastBuildVersionPref;
- (id)context;
- (BOOL)suppressMigrationPluginWrapperExitMarkerPref;
- (id)userDataDispositionPref;
- (BOOL)isDeviceUsingEphemeralStorage;
- (void)setContext:(id)a0;
- (BOOL)implementMigrationPluginResults;
- (id)migrationPluginResultsPref;
- (BOOL)shouldWatchdogPluginsAfterTimeout;
- (id)continuousIntegrationMarkerPref;
- (BOOL)waitForExecutePluginsSignalMarkerPref;
- (void)blockUntilPreferencesFlush;
- (id)contextPath;
- (BOOL)userSessionIsLoginWindow;
- (void)setMigrationRebootCountPref:(id)a0;
- (void)setMigrationPluginResultsPref:(id)a0;

@end
