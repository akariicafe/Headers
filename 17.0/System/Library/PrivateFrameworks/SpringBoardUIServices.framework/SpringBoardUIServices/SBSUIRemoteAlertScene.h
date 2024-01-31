@class NSString, SBSRemoteAlertConfigurationContext, SBSRemoteAlertActivationContext;
@protocol SBSUIRemoteAlertSceneDelegate;

@interface SBSUIRemoteAlertScene : UIWindowScene

@property (retain, nonatomic) id<SBSUIRemoteAlertSceneDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *configurationIdentifier;
@property (readonly, nonatomic) SBSRemoteAlertConfigurationContext *configurationContext;
@property (readonly, nonatomic) SBSRemoteAlertActivationContext *activationContext;

- (void)setIdleTimerDisabled:(BOOL)a0 forReason:(id)a1;
- (void)invalidate;
- (void)setWhitePointAdaptivityStyle:(long long)a0;
- (void)deactivate;
- (void)setContentOpaque:(BOOL)a0;
- (void)setDesiredHardwareButtonEvents:(unsigned long long)a0;
- (void)setAllowsAlertStacking:(BOOL)a0;
- (void)setDesiredAutoLockDuration:(double)a0;
- (void)setDismissalAnimationStyle:(long long)a0;
- (void)setSwipeDismissalStyle:(long long)a0;
- (void)setAllowsMenuButtonDismissal:(BOOL)a0;
- (void)setBackgroundActivitiesToSuppress:(id)a0 animationSettings:(id)a1;
- (void)setContentOverlaysStatusBar:(BOOL)a0 animationSettings:(id)a1;
- (void)setDesiredIdleTimerSettings:(id)a0;
- (void)setDisablesAlertItems:(BOOL)a0;
- (void)setDisablesBanners:(BOOL)a0;
- (void)setDisablesControlCenter:(BOOL)a0;
- (void)setDisablesSiri:(BOOL)a0;
- (void)setInteractiveScreenshotGestureDisabled:(BOOL)a0;
- (void)setOrientationChangedEventsDisabled:(BOOL)a0;
- (void)setReachabilityDisabled:(BOOL)a0;
- (void)setSceneDeactivationReason:(id)a0;
- (void)setWallpaperStyle:(long long)a0 animationSettings:(id)a1;

@end
