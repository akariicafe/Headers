@class NSSet, NSString, NSNumber, CEMAccountCardDAVDeclaration_CommunicationServiceRules;

@interface CEMAccountCardDAVDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadCardDAVAccountDescription;
@property (copy, nonatomic) NSString *payloadCardDAVHostName;
@property (copy, nonatomic) NSString *payloadCardDAVPrincipalURL;
@property (copy, nonatomic) NSNumber *payloadCardDAVUseSSL;
@property (copy, nonatomic) NSNumber *payloadCardDAVPort;
@property (copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (copy, nonatomic) NSString *payloadCardDAVCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withCardDAVHostName:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withCardDAVAccountDescription:(id)a1 withCardDAVHostName:(id)a2 withCardDAVPrincipalURL:(id)a3 withCardDAVUseSSL:(id)a4 withCardDAVPort:(id)a5 withCommunicationServiceRules:(id)a6 withCardDAVCredentials:(id)a7;
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
