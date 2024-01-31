@class NSSet, NSString, NSArray;

@interface CEMSecuritySingleSignOnDeclaration_Kerberos : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadPrincipalName;
@property (copy, nonatomic) NSString *payloadPayloadCertificateUUID;
@property (copy, nonatomic) NSString *payloadRealm;
@property (copy, nonatomic) NSArray *payloadURLPrefixMatches;
@property (copy, nonatomic) NSArray *payloadAppIdentifierMatches;

+ (id)buildRequiredOnlyWithRealm:(id)a0;
+ (id)buildWithPrincipalName:(id)a0 withPayloadCertificateUUID:(id)a1 withRealm:(id)a2 withURLPrefixMatches:(id)a3 withAppIdentifierMatches:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
