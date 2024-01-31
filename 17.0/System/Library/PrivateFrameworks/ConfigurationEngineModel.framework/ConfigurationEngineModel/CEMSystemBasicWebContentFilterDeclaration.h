@class NSSet, NSString, NSArray, NSNumber;

@interface CEMSystemBasicWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadRestrictWeb;
@property (copy, nonatomic) NSNumber *payloadUseContentFilter;
@property (copy, nonatomic) NSNumber *payloadWhiteListEnabled;
@property (copy, nonatomic) NSArray *payloadSiteWhiteList;
@property (copy, nonatomic) NSArray *payloadFilterWhiteList;
@property (copy, nonatomic) NSArray *payloadFilterBlackList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withRestrictWeb:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withRestrictWeb:(id)a1 withUseContentFilter:(id)a2 withWhiteListEnabled:(id)a3 withSiteWhiteList:(id)a4 withFilterWhiteList:(id)a5 withFilterBlackList:(id)a6;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;
- (id)synthesizeProfileOutUUIDs:(id)a0 withOldUUIDs:(id)a1 assetProviders:(id)a2;

@end
