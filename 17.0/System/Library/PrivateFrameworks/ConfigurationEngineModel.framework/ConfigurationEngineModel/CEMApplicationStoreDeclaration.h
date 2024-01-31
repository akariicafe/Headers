@class NSSet, NSString, NSNumber;

@interface CEMApplicationStoreDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowAppInstallation;
@property (copy, nonatomic) NSNumber *payloadAllowAppClips;
@property (copy, nonatomic) NSNumber *payloadAllowUIAppInstallation;
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppDownloads;
@property (copy, nonatomic) NSNumber *payloadAllowSystemAppRemoval;
@property (copy, nonatomic) NSNumber *payloadAllowAppRemoval;
@property (copy, nonatomic) NSNumber *payloadAllowInAppPurchases;
@property (copy, nonatomic) NSNumber *payloadForceITunesStorePasswordEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowAppInstallation:(id)a1 withAllowAppClips:(id)a2 withAllowUIAppInstallation:(id)a3 withAllowAutomaticAppDownloads:(id)a4 withAllowSystemAppRemoval:(id)a5 withAllowAppRemoval:(id)a6 withAllowInAppPurchases:(id)a7 withForceITunesStorePasswordEntry:(id)a8;
+ (id)buildWithIdentifier:(id)a0 withAllowAppInstallation:(id)a1 withAllowUIAppInstallation:(id)a2 withAllowAutomaticAppDownloads:(id)a3 withAllowSystemAppRemoval:(id)a4 withAllowAppRemoval:(id)a5 withAllowInAppPurchases:(id)a6 withForceITunesStorePasswordEntry:(id)a7;
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
