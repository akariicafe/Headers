@class NSDictionary, NSURLSession, CDPContext;

@interface CDPDSecureBackupConfiguration : NSObject {
    CDPContext *_context;
    NSDictionary *_configurationURLs;
    NSDictionary *_escrowConfigurationURLs;
    NSURLSession *_session;
}

+ (id)configurationWithContext:(id)a0;
+ (id)_configurationRequestWithURLString:(id)a0;
+ (id)configurationWithContext:(id)a0 andSession:(id)a1;

- (id)escrowAuthInfo;
- (id)_iCloudEnvironment;
- (id)_fetchEscrowConfigurationBag;
- (id)_fetchConfigurationWithRequest:(id)a0;
- (id)_escrowProxyURL;
- (id)_escrowProxyConfigurationURL;
- (void).cxx_destruct;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_escrowConfigurationBag;
- (id)_escrowConfigurationBagFull;
- (id)accountInfoFetchSetupDictionary;
- (id)_configurationInfoURLRequest;
- (id)_fetchConfigurationDictionary;
- (id)_setupConfigurationURLs;

@end
