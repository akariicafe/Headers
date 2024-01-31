@class NSSet, NSString, NSNumber;

@interface CEMPasscodeLockscreenSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadAllowVoiceDialing;
@property (copy, nonatomic) NSNumber *payloadAllowAssistantWhileLocked;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenTodayView;
@property (copy, nonatomic) NSNumber *payloadAllowPassbookWhileLocked;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenNotificationsView;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenControlCenter;
@property (copy, nonatomic) NSNumber *payloadAllowLockScreenWiFiModification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withAllowVoiceDialing:(id)a1 withAllowAssistantWhileLocked:(id)a2 withAllowLockScreenTodayView:(id)a3 withAllowPassbookWhileLocked:(id)a4 withAllowLockScreenNotificationsView:(id)a5 withAllowLockScreenControlCenter:(id)a6 withAllowLockScreenWiFiModification:(id)a7;
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
