@class NSDictionary;

@interface PXPhotosViewUIInteractionAuthentication : NSObject

@property (readonly, nonatomic) BOOL isLockdownMode;
@property (readonly, nonatomic) BOOL isDeveloperMode;
@property (readonly, nonatomic) BOOL isInternal;
@property (retain, nonatomic) NSDictionary *serverConfiguration;
@property (nonatomic) BOOL hasAlreadyPromptedUserAlert;
@property (readonly, nonatomic) BOOL shouldEnableForInternalApps;

+ (id)sharedAuthentication;

- (id)init;
- (void).cxx_destruct;
- (void)checkAndUpdateIsDisabledTouchAuthentication;
- (void)collectAnalyticsWithGestureType:(long long)a0 isSingleRowCompactMode:(BOOL)a1 canIgnoreTouches:(BOOL)a2 pickerClientBundleIdentifier:(id)a3 isInternalClient:(BOOL)a4 hasAuthenticationRecord:(BOOL)a5 touchIsAuthentic:(BOOL)a6 couldLeadToSensitiveDataTransmission:(BOOL)a7 shouldIgnoreTouch:(BOOL)a8;
- (BOOL)isDisabledForPickerClientBundleIdentifier:(id)a0;
- (BOOL)promptUserAlertIfNeededForPickerClientBundleIdentifier:(id)a0;
- (BOOL)requiresTouchAuthenticationForPickerClientBundleIdentifier:(id)a0;

@end
