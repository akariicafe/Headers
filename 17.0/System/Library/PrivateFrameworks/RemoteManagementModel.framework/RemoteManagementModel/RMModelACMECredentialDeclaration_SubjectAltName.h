@class NSSet, NSString;

@interface RMModelACMECredentialDeclaration_SubjectAltName : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRfc822Name;
@property (copy, nonatomic) NSString *payloadDNSName;
@property (copy, nonatomic) NSString *payloadUniformResourceIdentifier;
@property (copy, nonatomic) NSString *payloadNtPrincipalName;

+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:(id)a0 dnsName:(id)a1 uniformResourceIdentifier:(id)a2 ntPrincipalName:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
