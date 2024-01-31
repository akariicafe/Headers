@class NSSet, NSString, RMModelPasscodeSettingsDeclaration_CustomRegex, NSNumber;

@interface RMModelPasscodeSettingsDeclaration : RMModelConfigurationBase <RMModelRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadRequirePasscode;
@property (copy, nonatomic) NSNumber *payloadRequireAlphanumericPasscode;
@property (copy, nonatomic) NSNumber *payloadRequireComplexPasscode;
@property (copy, nonatomic) NSNumber *payloadMinimumLength;
@property (copy, nonatomic) NSNumber *payloadMinimumComplexCharacters;
@property (copy, nonatomic) NSNumber *payloadMaximumFailedAttempts;
@property (copy, nonatomic) NSNumber *payloadFailedAttemptsResetInMinutes;
@property (copy, nonatomic) NSNumber *payloadMaximumGracePeriodInMinutes;
@property (copy, nonatomic) NSNumber *payloadMaximumInactivityInMinutes;
@property (copy, nonatomic) NSNumber *payloadMaximumPasscodeAgeInDays;
@property (copy, nonatomic) NSNumber *payloadPasscodeReuseLimit;
@property (copy, nonatomic) NSNumber *payloadChangeAtNextAuth;
@property (copy, nonatomic) RMModelPasscodeSettingsDeclaration_CustomRegex *payloadCustomRegex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)assetTypes;
+ (id)buildWithIdentifier:(id)a0 requirePasscode:(id)a1 requireAlphanumericPasscode:(id)a2 requireComplexPasscode:(id)a3 minimumLength:(id)a4 minimumComplexCharacters:(id)a5 maximumFailedAttempts:(id)a6 failedAttemptsResetInMinutes:(id)a7 maximumGracePeriodInMinutes:(id)a8 maximumInactivityInMinutes:(id)a9 maximumPasscodeAgeInDays:(id)a10 passcodeReuseLimit:(id)a11 changeAtNextAuth:(id)a12 customRegex:(id)a13;
+ (id)combineConfigurations:(id)a0;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)assetReferences;
- (void)combineWithOther:(id)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
