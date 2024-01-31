@interface MFSMIMEConfigurationProvider : NSObject <EDSMIMEConfigurationProvider>

@property (readonly, nonatomic) BOOL signingIsConfigured;
@property (readonly, nonatomic) BOOL signingEnabledByDefault;
@property (readonly, nonatomic) BOOL encryptionIsConfigured;
@property (readonly, nonatomic) BOOL encryptionIsEnabledByDefault;

@end
