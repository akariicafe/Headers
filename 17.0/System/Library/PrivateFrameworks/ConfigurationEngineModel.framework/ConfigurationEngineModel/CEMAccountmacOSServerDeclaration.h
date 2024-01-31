@class NSSet, NSString, NSArray;

@interface CEMAccountmacOSServerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSString *payloadAccountDescription;
@property (copy, nonatomic) NSArray *payloadConfiguredAccounts;
@property (copy, nonatomic) NSString *payloadCredentials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withHostName:(id)a1 withConfiguredAccounts:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withHostName:(id)a1 withAccountDescription:(id)a2 withConfiguredAccounts:(id)a3 withCredentials:(id)a4;
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
