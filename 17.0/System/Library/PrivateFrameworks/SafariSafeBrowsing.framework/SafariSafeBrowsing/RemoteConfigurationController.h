@class ProviderConfiguration, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RemoteConfigurationController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_currentConfiguration;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _googleConfigurationDidChange;
    BOOL _tencentConfigurationDidChange;
    BOOL _appleConfigurationDidChange;
}

@property (readonly, nonatomic, getter=isSafeBrowsingOff) BOOL safeBrowsingOff;
@property (readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration;
@property (readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration;
@property (readonly, nonatomic) ProviderConfiguration *appleProviderConfiguration;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (id)_lastConfigurationUpdateAttemptDate;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)a0;
- (void).cxx_destruct;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (void)_setCurrentConfiguration:(id)a0;
- (void)_simplifyProviderConfigurations;
- (void)_updateConfigurationIfNecessary;
- (void)_didReceiveConfigurationData:(id)a0;
- (void)_downloadConfigurationWithCompletionHandler:(id /* block */)a0;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)a0;
- (void)_initializeToDefaultProviderConfigurations;
- (void)_loadConfigurationFromDiskIfNecessary;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (id)_providerToTurnOffFromProviderDictionary:(id)a0;
- (void)_resetProviderConfigurationsDidChange;
- (void)_scheduleConfigurationUpdateDaily;
- (id)_urlOfDownloadedConfiguration;
- (void)_writeConfigurationToDisk:(id)a0;
- (BOOL)forceLoadConfigurationFromDisk;
- (BOOL)forceUpdateConfigurationFromServer;

@end
