@class CMSNetworkActivity, NSMutableDictionary, NSDictionary, NSURL, NSDate, NSString, NSError;

@interface CMSCloudExtensionConfiguration : NSObject

@property (retain, nonatomic) NSMutableDictionary *endpointConfigs;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSDictionary *globalHeaders;
@property (retain, nonatomic) NSDate *configExpiry;
@property (retain, nonatomic) NSDictionary *configDictionary;
@property (readonly, nonatomic) CMSNetworkActivity *parentNetworkActivity;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSError *parsingError;
@property (readonly, nonatomic) NSURL *configUrl;
@property (readonly, nonatomic, getter=isExpiringSoon) BOOL expiringSoon;
@property (readonly, nonatomic) NSString *languageCode;

+ (void)configurationFromURL:(id)a0 forSession:(id)a1 usingAuth:(id)a2 authProvider:(id)a3 parentNetworkActivity:(id)a4 keyID:(id)a5 publicKey:(id)a6 URLSessionConfiguration:(id)a7 languageCode:(id)a8 completion:(id /* block */)a9;
+ (id)_configurationFromJWS:(id)a0 URL:(id)a1 parentNetworkActivity:(id)a2 keyID:(id)a3 publicKey:(id)a4 languageCode:(id)a5 error:(id *)a6;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)configForEndpoint:(id)a0;
- (void)_configureEndpoint:(id)a0 withDictionary:(id)a1 headers:(id)a2;
- (id)initWithDictionary:(id)a0 fromURL:(id)a1 parentNetworkActivity:(id)a2 languageCode:(id)a3;

@end
