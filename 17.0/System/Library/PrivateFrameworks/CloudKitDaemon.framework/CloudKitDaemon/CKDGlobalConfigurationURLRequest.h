@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDServerConfiguration *configuration;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (long long)partitionType;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (long long)serverType;
- (id)url;
- (id)httpMethod;
- (BOOL)hasRequestBody;
- (void)requestDidParsePlistObject:(id)a0;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;

@end
