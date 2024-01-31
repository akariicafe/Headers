@class NSData;

@interface MKCertificate : NSObject

@property (nonatomic) struct __SecIdentity { } *identity;
@property (retain, nonatomic) NSData *certificate;
@property (retain, nonatomic) NSData *digest;

- (id)init;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void).cxx_destruct;
- (void)_appendBase64Data:(id)a0 toString:(id)a1;
- (id)dataFromPEMFormattedData:(id)a0;
- (id)encodedCertificate;
- (void)generateCertificate;
- (id)initWithPEM:(id)a0;
- (id)pemFormattedCertificateData:(id)a0;

@end
