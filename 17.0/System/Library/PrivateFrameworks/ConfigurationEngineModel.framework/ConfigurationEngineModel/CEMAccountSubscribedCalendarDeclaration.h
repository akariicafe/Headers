@class NSSet, NSString, NSNumber;

@interface CEMAccountSubscribedCalendarDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadSubCalAccountDescription;
@property (copy, nonatomic) NSString *payloadSubCalAccountHostName;
@property (copy, nonatomic) NSNumber *payloadSubCalAccountUseSSL;
@property (copy, nonatomic) NSString *payloadSubCalAccountCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withSubCalAccountHostName:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withSubCalAccountDescription:(id)a1 withSubCalAccountHostName:(id)a2 withSubCalAccountUseSSL:(id)a3 withSubCalAccountCredentials:(id)a4;
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
