@class NSSet, NSString, NSNumber;

@interface CEMSystemWebDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadForceLimitAdTracking;
@property (copy, nonatomic) NSNumber *payloadSafariAllowAutoFill;
@property (copy, nonatomic) NSNumber *payloadSafariForceFraudWarning;
@property (copy, nonatomic) NSNumber *payloadSafariAllowJavaScript;
@property (copy, nonatomic) NSNumber *payloadSafariAllowPopups;
@property (copy, nonatomic) NSNumber *payloadSafariAcceptCookies;
@property (copy, nonatomic) NSNumber *payloadForceAuthenticationBeforeAutoFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withForceLimitAdTracking:(id)a1 withSafariAllowAutoFill:(id)a2 withSafariForceFraudWarning:(id)a3 withSafariAllowJavaScript:(id)a4 withSafariAllowPopups:(id)a5 withSafariAcceptCookies:(id)a6 withForceAuthenticationBeforeAutoFill:(id)a7;
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
