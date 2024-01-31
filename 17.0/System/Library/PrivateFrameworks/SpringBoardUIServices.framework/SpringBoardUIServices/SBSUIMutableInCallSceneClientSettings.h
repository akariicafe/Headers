@class NSSet;

@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) unsigned long long preferredStatusBarStyleOverridesToSuppress;
@property (copy, nonatomic) NSSet *preferredBackgroundActivitiesToSuppress;
@property (nonatomic) BOOL supportsDeviceLockActions;
@property (nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden;
@property (nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic, getter=isCallConnected) BOOL callConnected;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } expanseHUDDodgingInsets;
@property (nonatomic) BOOL prefersBannersHiddenFromClonedDisplay;
@property (nonatomic) BOOL prefersHiddenWhenDismissed;
@property (nonatomic) BOOL shouldNeverBeShownWhenLaunchingFaceTime;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (BOOL)homeIndicatorAutoHidden;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHomeIndicatorAutoHidden:(BOOL)a0;

@end
