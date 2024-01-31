@class POLoginConfiguration, NSString, PODeviceConfiguration, POKeychainHelper, NSDate, PODaemonConnection, POUserConfiguration, PODirectoryServices, POConfigurationVersion;

@interface POConfigurationManager : NSObject {
    PODaemonConnection *_serviceConnection;
}

@property (retain) PODirectoryServices *directoryServices;
@property (readonly) NSString *userIdentifier;
@property (retain) POConfigurationVersion *userConfigurationVersion;
@property (retain) POConfigurationVersion *loginConfigurationVersion;
@property (retain) POConfigurationVersion *deviceConfigurationVersion;
@property (retain) POKeychainHelper *keychainHelper;
@property (readonly) NSString *userName;
@property BOOL sharedOnly;
@property (readonly) POUserConfiguration *currentUserConfiguration;
@property (readonly) PODeviceConfiguration *currentDeviceConfiguration;
@property (readonly) POLoginConfiguration *currentLoginConfiguration;
@property (readonly) PODeviceConfiguration *userDeviceConfiguration;
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithUserName:(id)a0;
- (id)deviceConfiguration;
- (id)currentRefreshToken;
- (void)enablePlatformSSORulesIfNeeded:(id /* block */)a0;
- (void)restorePlatformSSORulesIfNeeded;
- (BOOL)__removeDeviceConfigurationWithIdentifier:(id)a0;
- (BOOL)__removeLoginConfigurationForIdentifier:(id)a0;
- (id)initWithUserName:(id)a0 directoryServices:(id)a1 sharedOnly:(BOOL)a2;
- (id)loginConfiguration;
- (id)refreshTokenFromTokens:(id)a0;
- (BOOL)removeDeviceConfiguration;
- (BOOL)removeLoginConfiguration;
- (BOOL)removeUserConfigurationForUserName:(id)a0;
- (BOOL)removeUserDeviceConfiguration;
- (BOOL)removeUserLoginConfiguration;
- (BOOL)resetStoredConfiguration;
- (BOOL)saveAppSSOConfiguration:(id)a0;
- (BOOL)saveCurrentUserConfiguration;
- (BOOL)saveDeviceConfiguration:(id)a0;
- (BOOL)saveLoginConfiguration:(id)a0;
- (BOOL)saveUserConfiguration:(id)a0 forUserName:(id)a1;
- (id)userConfigurationForUserName:(id)a0;

@end
