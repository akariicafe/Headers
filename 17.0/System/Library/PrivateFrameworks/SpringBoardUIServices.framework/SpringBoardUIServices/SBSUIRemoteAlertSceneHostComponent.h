@class NSString, SBSRemoteAlertConfigurationContext, SBSRemoteAlertActivationContext, NSSet, SBUIRemoteAlertIdleTimerSettings, NSNumber;
@protocol SBSUIRemoteAlertSceneHostComponentDelegate;

@interface SBSUIRemoteAlertSceneHostComponent : FBSSceneComponent

@property (weak, nonatomic) id<SBSUIRemoteAlertSceneHostComponentDelegate> delegate;
@property (copy, nonatomic) NSString *configurationIdentifier;
@property (retain, nonatomic) SBSRemoteAlertConfigurationContext *configurationContext;
@property (copy, nonatomic) SBSRemoteAlertActivationContext *activationContext;
@property (readonly, nonatomic) BOOL shouldDisableBanners;
@property (readonly, nonatomic) BOOL shouldDisableAlertItems;
@property (readonly, nonatomic) BOOL shouldDisableControlCenter;
@property (readonly, nonatomic) BOOL shouldDisableSiri;
@property (readonly, nonatomic) BOOL shouldDisableInteractiveScreenshotGesture;
@property (readonly, nonatomic) BOOL shouldDisableReachability;
@property (readonly, nonatomic) BOOL allowsAlertStacking;
@property (readonly, nonatomic) BOOL allowsMenuButtonDismissal;
@property (readonly, nonatomic) unsigned long long desiredHardwareButtonEvents;
@property (readonly, nonatomic, getter=isContentOpaque) BOOL contentOpaque;
@property (readonly, nonatomic) long long dismissalAnimationStyle;
@property (readonly, nonatomic) long long swipeDismissalStyle;
@property (readonly, nonatomic) int preferredStatusBarVisibility;
@property (readonly, copy, nonatomic) NSSet *backgroundActivitiesToSuppress;
@property (readonly, nonatomic) double desiredAutoLockDuration;
@property (readonly, nonatomic) SBUIRemoteAlertIdleTimerSettings *desiredIdleTimerSettings;
@property (readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property (readonly, nonatomic) BOOL shouldDisableOrientationUpdates;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) NSNumber *preferredSceneDeactivationReason;
@property (readonly, nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } windowedAccessoryCutoutFrameInScreen;

- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (void).cxx_destruct;
- (void)didTransitionToAttachedToWindowedAccessory:(BOOL)a0 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleButtonActions:(id)a0;
- (void)didInvalidateForRemoteAlertServiceInvalidation;
- (void)setDefaultStatusBarHeightsForWindowScene:(id)a0;

@end
