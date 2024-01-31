@class NSSet, NSString, NSNumber;

@interface CEMNetworkVPNDeclaration_SecurityAssociationParameters : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadEncryptionAlgorithm;
@property (copy, nonatomic) NSString *payloadIntegrityAlgorithm;
@property (copy, nonatomic) NSNumber *payloadDiffieHellmanGroup;
@property (copy, nonatomic) NSNumber *payloadLifeTimeInMinutes;

+ (id)buildRequiredOnly;
+ (id)buildWithEncryptionAlgorithm:(id)a0 withIntegrityAlgorithm:(id)a1 withDiffieHellmanGroup:(id)a2 withLifeTimeInMinutes:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
