@class NSSet, NSString, NSArray, NSNumber;

@interface CEMSystemXsanVolumePreferencesDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSArray *payloadOnlyMount;
@property (copy, nonatomic) NSArray *payloadDenyMount;
@property (copy, nonatomic) NSArray *payloadDenyDLC;
@property (copy, nonatomic) NSArray *payloadPreferDLC;
@property (copy, nonatomic) NSNumber *payloadUseDLC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withOnlyMount:(id)a1 withDenyMount:(id)a2 withDenyDLC:(id)a3 withPreferDLC:(id)a4 withUseDLC:(id)a5;
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
