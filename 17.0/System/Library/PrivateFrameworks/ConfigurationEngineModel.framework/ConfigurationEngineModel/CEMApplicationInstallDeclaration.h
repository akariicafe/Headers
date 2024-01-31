@class CEMAnyPayload, NSSet, NSString, NSNumber;

@interface CEMApplicationInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadApplication;
@property (copy, nonatomic) NSNumber *payloadMandatory;
@property (copy, nonatomic) NSNumber *payloadInstallWhenActivated;
@property (copy, nonatomic) NSNumber *payloadRemoveWhenDeactivated;
@property (copy, nonatomic) NSNumber *payloadManageData;
@property (copy, nonatomic) NSString *payloadVPNUUID;
@property (copy, nonatomic) NSString *payloadCellularSliceUUID;
@property (copy, nonatomic) NSString *payloadContentFilterUUID;
@property (copy, nonatomic) NSString *payloadDNSProxyUUID;
@property (copy, nonatomic) NSNumber *payloadPreventDataBackup;
@property (copy, nonatomic) CEMAnyPayload *payloadConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withApplication:(id)a1 withMandatory:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withApplication:(id)a1 withMandatory:(id)a2 withInstallWhenActivated:(id)a3 withRemoveWhenDeactivated:(id)a4 withManageData:(id)a5 withVPNUUID:(id)a6 withCellularSliceUUID:(id)a7 withPreventDataBackup:(id)a8 withConfiguration:(id)a9;
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
