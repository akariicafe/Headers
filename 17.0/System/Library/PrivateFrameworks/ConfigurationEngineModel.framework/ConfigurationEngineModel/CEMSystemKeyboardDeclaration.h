@class NSSet, NSString, NSNumber;

@interface CEMSystemKeyboardDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowPredictiveKeyboard;
@property (copy, nonatomic) NSNumber *payloadAllowAutoCorrection;
@property (copy, nonatomic) NSNumber *payloadAllowSpellCheck;
@property (copy, nonatomic) NSNumber *payloadAllowKeyboardShortcuts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowPredictiveKeyboard:(id)a1 withAllowAutoCorrection:(id)a2 withAllowSpellCheck:(id)a3 withAllowKeyboardShortcuts:(id)a4;
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
