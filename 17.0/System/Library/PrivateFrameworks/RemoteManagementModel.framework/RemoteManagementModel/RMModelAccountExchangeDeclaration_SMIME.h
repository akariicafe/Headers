@class NSSet, RMModelAccountExchangeDeclaration_SMIMEEncryption, RMModelAccountExchangeDeclaration_SMIMESigning;

@interface RMModelAccountExchangeDeclaration_SMIME : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) RMModelAccountExchangeDeclaration_SMIMESigning *payloadSigning;
@property (copy, nonatomic) RMModelAccountExchangeDeclaration_SMIMEEncryption *payloadEncryption;

+ (id)buildRequiredOnly;
+ (id)buildWithSigning:(id)a0 encryption:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
