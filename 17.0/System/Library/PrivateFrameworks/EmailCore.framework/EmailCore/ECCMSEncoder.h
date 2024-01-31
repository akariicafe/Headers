@class NSString, NSOrderedSet;

@interface ECCMSEncoder : NSObject

@property (class, readonly, copy, nonatomic) NSString *oidStringForEncryptedSubject;
@property (class, readonly, copy, nonatomic) NSOrderedSet *oidStringsForAuthenticatedEncryption;

+ (id)encryptedDataFromContentData:(id)a0 senderCertificate:(struct __SecCertificate { } *)a1 senderCapabilities:(id)a2 recipients:(id)a3 outIsAuthenticated:(BOOL *)a4 outError:(id *)a5;
+ (id)oidsForEncryptWithGCM:(BOOL)a0 encryptSubject:(BOOL)a1;
+ (id)signatureDataFromNetworkContentData:(id)a0 forSender:(id)a1 identity:(struct __SecIdentity { } *)a2 encryptionCertificate:(struct __SecCertificate { } *)a3 capabilities:(id)a4 outError:(id *)a5;
+ (id)signedDataFromNetworkContentData:(id)a0 forSender:(id)a1 identity:(struct __SecIdentity { } *)a2 encryptionCertificate:(struct __SecCertificate { } *)a3 capabilities:(id)a4 outError:(id *)a5;

@end
