@class NSSet, NSString, NSArray, NSNumber;

@interface CEMDeviceDockDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadOrientation;
@property (copy, nonatomic) NSNumber *payloadPositionImmutable;
@property (copy, nonatomic) NSNumber *payloadAutohide;
@property (copy, nonatomic) NSNumber *payloadAutohideImmutable;
@property (copy, nonatomic) NSNumber *payloadMinimizeToApplication;
@property (copy, nonatomic) NSNumber *payloadMinimizeToApplicationImmutable;
@property (copy, nonatomic) NSNumber *payloadMagnification;
@property (copy, nonatomic) NSNumber *payloadMagnifyImmutable;
@property (copy, nonatomic) NSNumber *payloadLargesize;
@property (copy, nonatomic) NSNumber *payloadMagsizeImmutable;
@property (copy, nonatomic) NSNumber *payloadShowProcessIndicators;
@property (copy, nonatomic) NSNumber *payloadLaunchanim;
@property (copy, nonatomic) NSNumber *payloadLaunchanimImmutable;
@property (copy, nonatomic) NSString *payloadMineffect;
@property (copy, nonatomic) NSNumber *payloadMineffectImmutable;
@property (copy, nonatomic) NSNumber *payloadTilesize;
@property (copy, nonatomic) NSNumber *payloadSizeImmutable;
@property (copy, nonatomic) NSArray *payloadMCXDockSpecialFolders;
@property (copy, nonatomic) NSNumber *payloadAllowDockFixupOverride;
@property (copy, nonatomic) NSNumber *payloadStaticOnly;
@property (copy, nonatomic) NSArray *payloadStaticOthers;
@property (copy, nonatomic) NSArray *payloadStaticApps;
@property (copy, nonatomic) NSNumber *payloadContentsImmutable;
@property (copy, nonatomic) NSNumber *payloadWindowtabbingImmutable;
@property (copy, nonatomic) NSNumber *payloadDblclickbehaviorImmutable;
@property (copy, nonatomic) NSNumber *payloadShowindicatorsImmutable;
@property (copy, nonatomic) NSNumber *payloadShowRecents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withOrientation:(id)a1 withPositionImmutable:(id)a2 withAutohide:(id)a3 withAutohideImmutable:(id)a4 withMinimizeToApplication:(id)a5 withMinimizeToApplicationImmutable:(id)a6 withMagnification:(id)a7 withMagnifyImmutable:(id)a8 withLargesize:(id)a9 withMagsizeImmutable:(id)a10 withShowProcessIndicators:(id)a11 withLaunchanim:(id)a12 withLaunchanimImmutable:(id)a13 withMineffect:(id)a14 withMineffectImmutable:(id)a15 withTilesize:(id)a16 withSizeImmutable:(id)a17 withMCXDockSpecialFolders:(id)a18 withAllowDockFixupOverride:(id)a19 withStaticOnly:(id)a20 withStaticOthers:(id)a21 withStaticApps:(id)a22 withContentsImmutable:(id)a23 withWindowtabbingImmutable:(id)a24 withDblclickbehaviorImmutable:(id)a25 withShowindicatorsImmutable:(id)a26 withShowRecents:(id)a27;
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
