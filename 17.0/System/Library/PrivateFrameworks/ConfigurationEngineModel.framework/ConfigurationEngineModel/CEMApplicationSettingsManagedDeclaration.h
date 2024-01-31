@class NSSet, NSString, NSNumber;

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowOpenFromManagedToUnmanaged;
@property (copy, nonatomic) NSNumber *payloadAllowOpenFromUnmanagedToManaged;
@property (copy, nonatomic) NSNumber *payloadForceAirDropUnmanaged;
@property (copy, nonatomic) NSNumber *payloadAllowManagedAppsCloudSync;
@property (copy, nonatomic) NSNumber *payloadAllowManagedToWriteUnmanagedContacts;
@property (copy, nonatomic) NSNumber *payloadAllowUnmanagedToReadManagedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowOpenFromManagedToUnmanaged:(id)a1 withAllowOpenFromUnmanagedToManaged:(id)a2 withForceAirDropUnmanaged:(id)a3 withAllowManagedAppsCloudSync:(id)a4 withAllowManagedToWriteUnmanagedContacts:(id)a5 withAllowUnmanagedToReadManagedContacts:(id)a6;
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
