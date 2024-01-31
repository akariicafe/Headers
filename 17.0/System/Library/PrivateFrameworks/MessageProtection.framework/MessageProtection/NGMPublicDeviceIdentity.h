@class SigningPublicKey, NGMECDHPublicPreKey;

@interface NGMPublicDeviceIdentity : NSObject

@property (retain, nonatomic) SigningPublicKey *signingKey;
@property (retain, nonatomic) NGMECDHPublicPreKey *echnidaRegistration;

+ (id)identityWithIdentityData:(id)a0 prekeyData:(id)a1 error:(id *)a2;

- (id)prekeyData;
- (id)identityData;
- (BOOL)verifySignature:(id)a0 formatter:(id)a1;
- (id)sealMessage:(id)a0 forceSizeOptimizations:(BOOL)a1 resetState:(BOOL)a2 encryptedAttributes:(id)a3 signedByFullIdentity:(id)a4 errors:(id *)a5;
- (BOOL)isSecondaryCompatible;
- (BOOL)isValidSigningDestination;
- (id)sealMessage:(id)a0 signedByFullIdentity:(id)a1 error:(id *)a2;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 error:(id *)a3;
- (id)description;
- (BOOL)isValidSignature:(id)a0 forMessage:(id)a1 forType:(long long)a2 error:(id *)a3;
- (id)sealMessage:(id)a0 guid:(id)a1 sendingURI:(id)a2 sendingPushToken:(id)a3 receivingURI:(id)a4 receivingPushToken:(id)a5 forceSizeOptimizations:(BOOL)a6 resetState:(BOOL)a7 encryptedAttributes:(id)a8 signedByFullIdentity:(id)a9 errors:(id *)a10;
- (void).cxx_destruct;
- (id)initWithEchnidaRegistration:(id)a0 signingKey:(id)a1;

@end
