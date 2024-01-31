@class NSSet, NSString, CEMAccountGoogleDeclaration_CommunicationServiceRules;

@interface CEMAccountGoogleDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadAccountDescription;
@property (copy, nonatomic) NSString *payloadAccountName;
@property (copy, nonatomic) NSString *payloadEmailAddress;
@property (copy, nonatomic) CEMAccountGoogleDeclaration_CommunicationServiceRules *payloadCommunicationServiceRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withEmailAddress:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withAccountDescription:(id)a1 withAccountName:(id)a2 withEmailAddress:(id)a3 withCommunicationServiceRules:(id)a4;
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
