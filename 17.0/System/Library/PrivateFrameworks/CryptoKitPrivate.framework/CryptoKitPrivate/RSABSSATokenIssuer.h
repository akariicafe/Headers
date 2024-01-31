@class NSData;

@interface RSABSSATokenIssuer : NSObject {
    const struct ccrsabssa_ciphersuite { } *_ciphersuite;
    unsigned long long _ciphersuiteModulusByteCount;
    struct ccrsa_full_ctx { unsigned long long pb_n; unsigned long long pb_bitlen; struct cczp_funcs *pb_funcs; unsigned long long pb_ccn[0]; } _rsaPrivateKey[167];
}

@property (retain, nonatomic) NSData *publicKey;
@property (readonly, retain, nonatomic) NSData *keyId;

- (id)init;
- (void).cxx_destruct;
- (id)blindSign:(id)a0 error:(id *)a1;
- (id)initWithKeyByteCount:(unsigned long long)a0;

@end
