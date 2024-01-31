@interface IDSNGMPublicDeviceIdentity : NSObject

+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;
+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)prekeyData;
- (id)identityData;
- (id)sealMessage:(id)a0 forceSizeOptimizations:(BOOL)a1 resetState:(BOOL)a2 encryptedAttributes:(id)a3 signedByFullIdentity:(id)a4 errors:(id *)a5;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)dataRepresentationWithError:(id *)a0;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;

@end
