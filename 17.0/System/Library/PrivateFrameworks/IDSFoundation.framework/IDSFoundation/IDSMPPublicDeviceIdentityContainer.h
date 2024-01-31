@class IDSMPPublicLegacyIdentity, IDSNGMPublicDeviceIdentity, NSNumber;

@interface IDSMPPublicDeviceIdentityContainer : NSObject

@property (readonly, nonatomic) IDSMPPublicLegacyIdentity *legacyPublicIdentity;
@property (readonly, nonatomic) IDSNGMPublicDeviceIdentity *ngmPublicDeviceIdentity;
@property (readonly, nonatomic) NSNumber *ngmVersion;

+ (id)identityWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)identityWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2 error:(id *)a3;

- (unsigned long long)hash;
- (id)sealMessage:(id)a0 withEncryptedAttributes:(id)a1 signedByFullIdentity:(id)a2 usingIdentitiesWithIdentifier:(id)a3 error:(id *)a4;
- (id)sealMessage:(id)a0 forceSizeOptimizations:(BOOL)a1 resetState:(BOOL)a2 withEncryptedAttributes:(id)a3 signedByFullIdentity:(id)a4 usedIdentityWithIdentifier:(id *)a5 error:(id *)a6 additionalResult:(id *)a7;
- (id)initWithLegacyPublicIdentity:(id)a0 ngmPublicDeviceIdentity:(id)a1 ngmVersion:(id)a2;
- (id)_legacySealMessage:(id)a0 signedWithFullIdentity:(id)a1 error:(id *)a2;
- (id)_ngmSealMessage:(id)a0 forceSizeOptimizations:(BOOL)a1 resetState:(BOOL)a2 withEncryptedAttributes:(id)a3 signedWithFullIdentity:(id)a4 error:(id *)a5 additionalResult:(id *)a6;
- (id)dataRepresentationWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
