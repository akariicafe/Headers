@class NSSet, NSString, NSNumber;

@interface CEMAccountWebClipDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadPrecomposed;
@property (copy, nonatomic) NSNumber *payloadFullScreen;
@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) NSNumber *payloadIsRemovable;
@property (copy, nonatomic) NSString *payloadLabel;
@property (copy, nonatomic) NSString *payloadIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0 withURL:(id)a1 withLabel:(id)a2;
+ (id)buildWithIdentifier:(id)a0 withPrecomposed:(id)a1 withFullScreen:(id)a2 withURL:(id)a3 withIsRemovable:(id)a4 withLabel:(id)a5 withIcon:(id)a6;
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
