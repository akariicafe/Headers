@class NSString, PKSecureElementCertificateSet;

@interface PKAccountAttestationRequest : NSObject

@property (retain, nonatomic) PKSecureElementCertificateSet *casdCertificate;
@property (copy, nonatomic) NSString *anonymizationSalt;

+ (id)_keychainItemWrapper;
+ (id)createAnonymizationSalt;
+ (id)defaultAnonymizationSaltWithError:(id *)a0;
+ (id)keychainDataWithError:(id *)a0;
+ (void)removeAccountAttesationData;
+ (void)removeLocalAccountAttesationData;
+ (id)setDefaultAnonymizationSalt:(id)a0;

- (void).cxx_destruct;

@end
