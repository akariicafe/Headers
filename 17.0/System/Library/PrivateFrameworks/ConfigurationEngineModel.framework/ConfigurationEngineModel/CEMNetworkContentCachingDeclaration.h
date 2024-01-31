@class NSSet, NSString, NSArray, NSNumber;

@interface CEMNetworkContentCachingDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowPersonalCaching;
@property (copy, nonatomic) NSNumber *payloadAllowSharedCaching;
@property (copy, nonatomic) NSNumber *payloadAutoActivation;
@property (copy, nonatomic) NSNumber *payloadCacheLimit;
@property (copy, nonatomic) NSString *payloadDataPath;
@property (copy, nonatomic) NSNumber *payloadDenyActivation;
@property (copy, nonatomic) NSNumber *payloadDenyTetheredCaching;
@property (copy, nonatomic) NSArray *payloadListenRanges;
@property (copy, nonatomic) NSNumber *payloadListenRangesOnly;
@property (copy, nonatomic) NSNumber *payloadListenWithPeersAndParents;
@property (copy, nonatomic) NSNumber *payloadLocalSubnetsOnly;
@property (copy, nonatomic) NSNumber *payloadLogClientIdentity;
@property (copy, nonatomic) NSArray *payloadParents;
@property (copy, nonatomic) NSString *payloadParentSelectionPolicy;
@property (copy, nonatomic) NSArray *payloadPeerFilterRanges;
@property (copy, nonatomic) NSArray *payloadPeerListenRanges;
@property (copy, nonatomic) NSNumber *payloadPeerLocalSubnetsOnly;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSArray *payloadPublicRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowPersonalCaching:(id)a1 withAllowSharedCaching:(id)a2 withAutoActivation:(id)a3 withCacheLimit:(id)a4 withDataPath:(id)a5 withDenyActivation:(id)a6 withDenyTetheredCaching:(id)a7 withListenRanges:(id)a8 withListenRangesOnly:(id)a9 withListenWithPeersAndParents:(id)a10 withLocalSubnetsOnly:(id)a11 withLogClientIdentity:(id)a12 withParents:(id)a13 withParentSelectionPolicy:(id)a14 withPeerFilterRanges:(id)a15 withPeerListenRanges:(id)a16 withPeerLocalSubnetsOnly:(id)a17 withPort:(id)a18 withPublicRanges:(id)a19;
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
