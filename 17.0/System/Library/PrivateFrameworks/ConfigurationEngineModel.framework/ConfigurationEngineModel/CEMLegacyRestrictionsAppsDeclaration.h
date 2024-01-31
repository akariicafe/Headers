@class NSSet, NSString, NSArray, NSNumber;

@interface CEMLegacyRestrictionsAppsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowChat;
@property (copy, nonatomic) NSNumber *payloadAllowiTunes;
@property (copy, nonatomic) NSNumber *payloadAllowNews;
@property (copy, nonatomic) NSNumber *payloadAllowPodcasts;
@property (copy, nonatomic) NSNumber *payloadAllowSafari;
@property (copy, nonatomic) NSNumber *payloadAllowVideoConferencing;
@property (copy, nonatomic) NSArray *payloadBlacklistedAppBundleIDs;
@property (copy, nonatomic) NSNumber *payloadAllowGroupActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowChat:(id)a1 withAllowiTunes:(id)a2 withAllowNews:(id)a3 withAllowPodcasts:(id)a4 withAllowSafari:(id)a5 withAllowVideoConferencing:(id)a6 withBlacklistedAppBundleIDs:(id)a7 withAllowCopresence:(id)a8;
+ (id)buildWithIdentifier:(id)a0 withAllowChat:(id)a1 withAllowiTunes:(id)a2 withAllowNews:(id)a3 withAllowPodcasts:(id)a4 withAllowSafari:(id)a5 withAllowVideoConferencing:(id)a6 withBlacklistedAppBundleIDs:(id)a7 withAllowGroupActivity:(id)a8;
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
