@class NSURLSession, NSString, POLoginConfiguration, NSURL, NSMutableData, PODeviceConfiguration;
@protocol POJWKSStorageProvider;

@interface POAuthenticationContext : NSObject

@property (retain, nonatomic) POLoginConfiguration *loginConfiguration;
@property (retain, nonatomic) PODeviceConfiguration *deviceConfiguration;
@property (retain, nonatomic) id<POJWKSStorageProvider> jwksStorageProvider;
@property (retain, nonatomic) NSString *refreshToken;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableData *password;
@property (nonatomic) struct __SecKey { } *embeddedAssertionSigningKey;
@property (nonatomic) struct __SecCertificate { } *embeddedAssertionCertificate;
@property (retain, nonatomic) NSString *encryptionContext;
@property (retain, nonatomic) NSString *serverNonce;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *apv;
@property (retain, nonatomic) NSURLSession *urlSession;
@property unsigned long long loginType;
@property (nonatomic) BOOL federated;
@property unsigned long long wsTrustVersion;
@property (retain, nonatomic) NSURL *wsTrustFederationMexURL;
@property (retain, nonatomic) NSURL *wsTrustFederationURL;
@property (retain, nonatomic) NSString *wsTrustFederationNonce;
@property (retain, nonatomic) NSString *tokenTypeNamespace;

- (id)init;
- (void).cxx_destruct;
- (void)addRequiredScope:(id)a0;

@end
