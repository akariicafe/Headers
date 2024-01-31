@class NSSet, NSString, NSArray, NSNumber, CEMAccountLDAPDeclaration_CommunicationServiceRules;

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadLDAPAccountDescription;
@property (copy, nonatomic) NSString *payloadLDAPAccountHostName;
@property (copy, nonatomic) NSNumber *payloadLDAPAccountUseSSL;
@property (copy, nonatomic) NSArray *payloadLDAPSearchSettings;
@property (copy, nonatomic) CEMAccountLDAPDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (copy, nonatomic) NSString *payloadLDAPCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withLDAPAccountHostName:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withLDAPAccountDescription:(id)a1 withLDAPAccountHostName:(id)a2 withLDAPAccountUseSSL:(id)a3 withLDAPSearchSettings:(id)a4 withCommunicationServiceRules:(id)a5 withLDAPCredentials:(id)a6;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
