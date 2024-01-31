@class SOConfigurationVersion, NSMutableArray, SOConfiguration;

@interface SOConfigurationHost : NSObject {
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (readonly, nonatomic) long long configVersion;

+ (id)_loadProfilesFromDict:(id)a0;
+ (id)_loadProfilesFromURL:(id)a0 logFileError:(BOOL)a1;
+ (id)maskRegistrationTokenInConfigurationData:(id)a0;
+ (id)maskRegistrationTokenInProfileList:(id)a0;
+ (id)defaultManager;

- (id)_stringWithReason:(long long)a0;
- (id)_checkAssociatedDomainForProfiles:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_initDataVaultIfNeededWithError:(id *)a0;
- (long long)willHandleURL:(id)a0 responseCode:(long long)a1 callerBundleIdentifier:(id)a2;
- (id)configurationForClientWithError:(id *)a0;
- (id)profileForURL:(id)a0 responseCode:(long long)a1;
- (void)_extensionsLoaded:(id)a0;
- (id)_removeNotSupportedUserProfiles:(id)a0;
- (id)findProfileForExtension:(id)a0 profiles:(id)a1;
- (id)_defaultConfigurationFile;
- (id)validatedProfileForPlatformSSO;
- (BOOL)saveConfiguration:(id)a0 error:(id *)a1;
- (id)profilesWithExtensionBundleIdentifier:(id)a0;
- (BOOL)saveConfigurationData:(id)a0 error:(id *)a1;
- (id)removedProfileForExtensionBundleIdentifier:(id)a0;
- (void)_checkNewVersion;
- (void)_configurationLoadedWithReason:(long long)a0;
- (id)_mergeProfile:(id)a0 userProfiles:(id)a1;
- (id)realms;
- (void).cxx_destruct;
- (void)_loadConfigForFirstTime;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (id)_checkExtensionsExistenceForProfiles:(id)a0;
- (BOOL)hasAnyMDMProfileForExtension:(id)a0;
- (id)findPlatformSSOProfile:(id)a0;
- (BOOL)_isConfigFileAvailable;
- (BOOL)isPlatformSSOProfile:(id)a0;
- (BOOL)_saveConfigToFile:(id)a0 error:(id *)a1;
- (void)_reloadConfigWithReason:(long long)a0;
- (id)_defaultConfigurationPath;

@end
