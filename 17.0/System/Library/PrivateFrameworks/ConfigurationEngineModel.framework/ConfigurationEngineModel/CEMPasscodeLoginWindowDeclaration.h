@class NSSet, NSString, NSArray, NSNumber;

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadSHOWFULLNAME;
@property (copy, nonatomic) NSNumber *payloadHideLocalUsers;
@property (copy, nonatomic) NSNumber *payloadIncludeNetworkUser;
@property (copy, nonatomic) NSNumber *payloadHideAdminUsers;
@property (copy, nonatomic) NSNumber *payloadSHOWOTHERUSERSMANAGED;
@property (copy, nonatomic) NSString *payloadAdminHostInfo;
@property (copy, nonatomic) NSArray *payloadAllowList;
@property (copy, nonatomic) NSArray *payloadDenyList;
@property (copy, nonatomic) NSNumber *payloadHideMobileAccounts;
@property (copy, nonatomic) NSNumber *payloadShutDownDisabled;
@property (copy, nonatomic) NSNumber *payloadRestartDisabled;
@property (copy, nonatomic) NSNumber *payloadSleepDisabled;
@property (copy, nonatomic) NSNumber *payloadDisableConsoleAccess;
@property (copy, nonatomic) NSString *payloadLoginwindowText;
@property (copy, nonatomic) NSNumber *payloadShutDownDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadRestartDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadPowerOffDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadLogOutDisabledWhileLoggedIn;
@property (copy, nonatomic) NSNumber *payloadDisableScreenLockImmediate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withSHOWFULLNAME:(id)a1 withHideLocalUsers:(id)a2 withIncludeNetworkUser:(id)a3 withHideAdminUsers:(id)a4 withSHOWOTHERUSERSMANAGED:(id)a5 withAdminHostInfo:(id)a6 withAllowList:(id)a7 withDenyList:(id)a8 withHideMobileAccounts:(id)a9 withShutDownDisabled:(id)a10 withRestartDisabled:(id)a11 withSleepDisabled:(id)a12 withDisableConsoleAccess:(id)a13 withLoginwindowText:(id)a14 withShutDownDisabledWhileLoggedIn:(id)a15 withRestartDisabledWhileLoggedIn:(id)a16 withPowerOffDisabledWhileLoggedIn:(id)a17 withLogOutDisabledWhileLoggedIn:(id)a18 withDisableScreenLockImmediate:(id)a19;
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
