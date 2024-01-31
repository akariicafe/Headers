@class NSString, SBIdleTimerPolicyAggregator, NSMutableDictionary;
@protocol BSInvalidatable;

@interface SBUserAgent : NSObject <SBUIUserAgent_Internal> {
    NSMutableDictionary *_idleTimerDisableAssertions;
    id<BSInvalidatable> _bannerSuppressionAssertion;
}

@property (retain, nonatomic, setter=_setIdleTimerPolicyAggregator:) SBIdleTimerPolicyAggregator *_idleTimerPolicyAggregator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isScreenOn;
- (BOOL)isInternalInstall;
- (id)folderNameForDisplayID:(id)a0;
- (long long)activeInterfaceOrientation;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (void)setIdleText:(id)a0;
- (id)init;
- (BOOL)springBoardIsActive;
- (void)undimScreen;
- (struct __CFRunLoop { } *)wifiRunLoopRef;
- (void)setIdleTimerDisabled:(BOOL)a0 forReason:(id)a1;
- (void)addActiveInterfaceOrientationObserver:(id)a0;
- (BOOL)deviceIsBlocked;
- (BOOL)openURL:(id)a0 allowUnlock:(BOOL)a1 animated:(BOOL)a2;
- (void)activateRemoteAlertService:(id)a0 options:(id)a1;
- (BOOL)deviceIsTethered;
- (BOOL)isApplicationRestrictedOrHidden:(id)a0;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)a0 andDimScreen:(BOOL)a1;
- (id)localizedDisplayNameForDisplayID:(id)a0;
- (void)lockAndDimDevice;
- (BOOL)canLaunchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2;
- (void)removeActiveInterfaceOrientationObserver:(id)a0;
- (BOOL)lockScreenIsShowing;
- (void)_cleanupFromBannerLaunch;
- (void)setBadgeNumberOrString:(id)a0 forApplicationWithID:(id)a1;
- (void)disableLockScreenBundleNamed:(id)a0 deactivationContext:(id)a1;
- (void)updateInterfaceOrientationIfNecessary;
- (int)networkUsageTypeForAppWithDisplayID:(id)a0;
- (BOOL)launchApplicationFromSource:(int)a0 withURL:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (BOOL)isIdleTimerDisabledForReason:(id)a0;
- (BOOL)deviceIsPasscodeLocked;
- (void)setMinimumBacklightLevel:(float)a0 animated:(BOOL)a1;
- (BOOL)isApplicationForegroundObscured:(id)a0;
- (void)enableLockScreenBundleNamed:(id)a0 activationContext:(id)a1;
- (BOOL)_openApplication:(id)a0 withURL:(id)a1 fromSource:(int)a2 animated:(BOOL)a3 options:(id)a4;
- (BOOL)launchApplicationFromSource:(int)a0 withDisplayID:(id)a1 options:(id)a2;
- (BOOL)isNamedRemoteAlertServiceActive:(id)a0 controllerClassName:(id)a1;
- (id)_safeValue:(id)a0 forKey:(id)a1 ofType:(Class)a2;
- (BOOL)_launchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2 allowUnlock:(BOOL)a3 animate:(BOOL)a4;
- (BOOL)launchFromSource:(int)a0 withURL:(id)a1 bundleID:(id)a2 allowUnlock:(BOOL)a3;
- (id)topSuspendedEventsOnlyDisplayID;
- (BOOL)applicationInstalledForDisplayID:(id)a0;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)a0;
- (id)foregroundApplicationDisplayID;
- (BOOL)deviceIsLocked;
- (void)activateModalBulletinAlert:(id)a0;

@end
