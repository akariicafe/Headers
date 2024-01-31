@class NSSet, NSString;

@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRfc822Name;
@property (copy, nonatomic) NSString *payloadDNSName;
@property (copy, nonatomic) NSString *payloadUniformResourceIdentifier;
@property (copy, nonatomic) NSString *payloadNtPrincipalName;

+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:(id)a0 withDNSName:(id)a1 withUniformResourceIdentifier:(id)a2 withNtPrincipalName:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
