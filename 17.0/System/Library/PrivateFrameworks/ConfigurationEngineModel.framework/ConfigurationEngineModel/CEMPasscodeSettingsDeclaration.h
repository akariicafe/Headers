@class NSSet, NSString, NSNumber;

@interface CEMPasscodeSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowSimple;
@property (copy, nonatomic) NSNumber *payloadForcePIN;
@property (copy, nonatomic) NSNumber *payloadMaxFailedAttempts;
@property (copy, nonatomic) NSNumber *payloadMaxInactivity;
@property (copy, nonatomic) NSNumber *payloadMaxPINAgeInDays;
@property (copy, nonatomic) NSNumber *payloadMinComplexChars;
@property (copy, nonatomic) NSNumber *payloadMinLength;
@property (copy, nonatomic) NSNumber *payloadRequireAlphanumeric;
@property (copy, nonatomic) NSNumber *payloadPinHistory;
@property (copy, nonatomic) NSNumber *payloadMaxGracePeriod;
@property (copy, nonatomic) NSNumber *payloadMinutesUntilFailedLoginReset;
@property (copy, nonatomic) NSNumber *payloadChangeAtNextAuth;
@property (copy, nonatomic) NSNumber *payloadManualFetchingWhenRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowFingerprintForUnlock;
@property (copy, nonatomic) NSNumber *payloadAllowFingerprintModification;
@property (copy, nonatomic) NSNumber *payloadAllowPasscodeModification;
@property (copy, nonatomic) NSNumber *payloadAllowAutoUnlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowSimple:(id)a1 withForcePIN:(id)a2 withMaxFailedAttempts:(id)a3 withMaxInactivity:(id)a4 withMaxPINAgeInDays:(id)a5 withMinComplexChars:(id)a6 withMinLength:(id)a7 withRequireAlphanumeric:(id)a8 withPinHistory:(id)a9 withMaxGracePeriod:(id)a10 withMinutesUntilFailedLoginReset:(id)a11 withChangeAtNextAuth:(id)a12 withManualFetchingWhenRoaming:(id)a13 withAllowFingerprintForUnlock:(id)a14 withAllowFingerprintModification:(id)a15 withAllowPasscodeModification:(id)a16 withAllowAutoUnlock:(id)a17;
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
