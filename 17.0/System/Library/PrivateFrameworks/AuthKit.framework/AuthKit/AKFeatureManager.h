@interface AKFeatureManager : NSObject {
    BOOL _cachedIsLisbonAvailable;
    BOOL _cachedIsAppleIDPasskeyFeatureEnabled;
    BOOL _cachedIsFamilyAccountEnabled;
    BOOL _cachedIsHawksbillEnabled;
    BOOL _cachedIsChildPasscodeEnabled;
    BOOL _cachedIsForgotPasswordNativeTakeoverEnabled;
    BOOL _cachedIsDeviceListCacheEnabled;
}

@property (readonly, nonatomic, getter=isLisbonAvailable) BOOL lisbonAvailable;
@property (readonly, nonatomic, getter=isAppleIDPasskeyFeatureEnabled) BOOL appleIDPasskeyFeatureEnabled;
@property (readonly, nonatomic, getter=isFamilyAccountEnabled) BOOL enableFamilyAccount;
@property (readonly, nonatomic, getter=isHawksbillEnabled) BOOL enableHawksbill;
@property (readonly, nonatomic, getter=isChildPasscodeEnabled) BOOL childPasscodeEnabled;
@property (readonly, nonatomic, getter=isForgotPasswordNativeTakeoverEnabled) BOOL forgotPasswordNativeTakeoverEnabled;
@property (readonly, nonatomic, getter=isAppleIDSessionTelemetryEnabled) BOOL appleIDSessionTelemetryEnabled;
@property (readonly, nonatomic, getter=isDeviceListCacheEnabled) BOOL deviceListCacheEnabled;

+ (BOOL)isYorktownEnabled;
+ (id)sharedManager;
+ (BOOL)isEasyDependentSignInEnabled;
+ (BOOL)isEnforceMDMPolicyEnabled;
+ (BOOL)isProxAuthEnabled;
+ (BOOL)isProxForAuthkitEnabled;
+ (BOOL)overrideAidProxAdvertismentEnabled;

- (id)init;

@end
