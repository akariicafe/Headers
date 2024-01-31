@class CEMAnyPayload, NSSet, NSString, NSArray, NSNumber;

@interface CEMSystemWebContentFilterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadFilterType;
@property (copy, nonatomic) NSNumber *payloadAutoFilterEnabled;
@property (copy, nonatomic) NSArray *payloadPermittedURLs;
@property (copy, nonatomic) NSArray *payloadBlacklistedURLs;
@property (copy, nonatomic) NSArray *payloadWhitelistedBookmarks;
@property (copy, nonatomic) NSString *payloadUserDefinedName;
@property (copy, nonatomic) NSString *payloadPluginBundleID;
@property (copy, nonatomic) NSString *payloadServerAddress;
@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadCertificate;
@property (copy, nonatomic) NSString *payloadOrganization;
@property (copy, nonatomic) CEMAnyPayload *payloadVendorConfig;
@property (copy, nonatomic) NSNumber *payloadFilterBrowsers;
@property (copy, nonatomic) NSNumber *payloadFilterSockets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withFilterType:(id)a1 withAutoFilterEnabled:(id)a2 withPermittedURLs:(id)a3 withBlacklistedURLs:(id)a4 withWhitelistedBookmarks:(id)a5 withUserDefinedName:(id)a6 withPluginBundleID:(id)a7 withServerAddress:(id)a8 withUserName:(id)a9 withPassword:(id)a10 withCertificate:(id)a11 withOrganization:(id)a12 withVendorConfig:(id)a13 withFilterBrowsers:(id)a14 withFilterSockets:(id)a15;
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
