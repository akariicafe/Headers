@class NSArray, NSData;

@interface CIDCBuilderSignatureDetails : NSObject

@property (nonatomic) long long signingAlgorithm;
@property (retain, nonatomic) NSArray *issuerCertificate;
@property (retain, nonatomic) NSData *issuerKey;
@property (retain, nonatomic) NSData *signature;

- (void).cxx_destruct;
- (id)initWithSigningAlgorithm:(long long)a0 issuerKey:(id)a1 signature:(id)a2;
- (id)initWithSigningAlgorithm:(long long)a0 issuerCertificate:(id)a1 issuerKey:(id)a2 signature:(id)a3;
- (id)initWithSigningAlgorithm:(long long)a0 issuerCertificate:(id)a1 signature:(id)a2;

@end
