@class NSSet, NSString, NSArray, NSNumber;

@interface CEMNetworkDirectoryServiceDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadClientID;
@property (copy, nonatomic) NSString *payloadDescription;
@property (copy, nonatomic) NSString *payloadADOrganizationalUnit;
@property (copy, nonatomic) NSString *payloadADMountStyle;
@property (copy, nonatomic) NSNumber *payloadADCreateMobileAccountAtLoginFlag;
@property (copy, nonatomic) NSNumber *payloadADCreateMobileAccountAtLogin;
@property (copy, nonatomic) NSNumber *payloadADWarnUserBeforeCreatingMAFlag;
@property (copy, nonatomic) NSNumber *payloadADWarnUserBeforeCreatingMA;
@property (copy, nonatomic) NSNumber *payloadADForceHomeLocalFlag;
@property (copy, nonatomic) NSNumber *payloadADForceHomeLocal;
@property (copy, nonatomic) NSNumber *payloadADUseWindowsUNCPathFlag;
@property (copy, nonatomic) NSNumber *payloadADUseWindowsUNCPath;
@property (copy, nonatomic) NSNumber *payloadADAllowMultiDomainAuthFlag;
@property (copy, nonatomic) NSNumber *payloadADAllowMultiDomainAuth;
@property (copy, nonatomic) NSNumber *payloadADDefaultUserShellFlag;
@property (copy, nonatomic) NSString *payloadADDefaultUserShell;
@property (copy, nonatomic) NSNumber *payloadADMapUIDAttributeFlag;
@property (copy, nonatomic) NSString *payloadADMapUIDAttribute;
@property (copy, nonatomic) NSNumber *payloadADMapGIDAttributeFlag;
@property (copy, nonatomic) NSString *payloadADMapGIDAttribute;
@property (copy, nonatomic) NSNumber *payloadADMapGGIDAttributeFlag;
@property (copy, nonatomic) NSString *payloadADMapGGIDAttribute;
@property (copy, nonatomic) NSNumber *payloadADPreferredDCServerFlag;
@property (copy, nonatomic) NSString *payloadADPreferredDCServer;
@property (copy, nonatomic) NSNumber *payloadADDomainAdminGroupListFlag;
@property (copy, nonatomic) NSArray *payloadADDomainAdminGroupList;
@property (copy, nonatomic) NSNumber *payloadADNamespaceFlag;
@property (copy, nonatomic) NSString *payloadADNamespace;
@property (copy, nonatomic) NSNumber *payloadADPacketSignFlag;
@property (copy, nonatomic) NSString *payloadADPacketSign;
@property (copy, nonatomic) NSNumber *payloadADPacketEncryptFlag;
@property (copy, nonatomic) NSString *payloadADPacketEncrypt;
@property (copy, nonatomic) NSNumber *payloadADRestrictDDNSFlag;
@property (copy, nonatomic) NSArray *payloadADRestrictDDNS;
@property (copy, nonatomic) NSNumber *payloadADTrustChangePassIntervalDaysFlag;
@property (copy, nonatomic) NSNumber *payloadADTrustChangePassIntervalDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withHostName:(id)a1;
+ (id)buildWithIdentifier:(id)a0 withHostName:(id)a1 withUserName:(id)a2 withPassword:(id)a3 withClientID:(id)a4 withDescription:(id)a5 withADOrganizationalUnit:(id)a6 withADMountStyle:(id)a7 withADCreateMobileAccountAtLoginFlag:(id)a8 withADCreateMobileAccountAtLogin:(id)a9 withADWarnUserBeforeCreatingMAFlag:(id)a10 withADWarnUserBeforeCreatingMA:(id)a11 withADForceHomeLocalFlag:(id)a12 withADForceHomeLocal:(id)a13 withADUseWindowsUNCPathFlag:(id)a14 withADUseWindowsUNCPath:(id)a15 withADAllowMultiDomainAuthFlag:(id)a16 withADAllowMultiDomainAuth:(id)a17 withADDefaultUserShellFlag:(id)a18 withADDefaultUserShell:(id)a19 withADMapUIDAttributeFlag:(id)a20 withADMapUIDAttribute:(id)a21 withADMapGIDAttributeFlag:(id)a22 withADMapGIDAttribute:(id)a23 withADMapGGIDAttributeFlag:(id)a24 withADMapGGIDAttribute:(id)a25 withADPreferredDCServerFlag:(id)a26 withADPreferredDCServer:(id)a27 withADDomainAdminGroupListFlag:(id)a28 withADDomainAdminGroupList:(id)a29 withADNamespaceFlag:(id)a30 withADNamespace:(id)a31 withADPacketSignFlag:(id)a32 withADPacketSign:(id)a33 withADPacketEncryptFlag:(id)a34 withADPacketEncrypt:(id)a35 withADRestrictDDNSFlag:(id)a36 withADRestrictDDNS:(id)a37 withADTrustChangePassIntervalDaysFlag:(id)a38 withADTrustChangePassIntervalDays:(id)a39;
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
