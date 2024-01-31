@class SBFFluidBehaviorSettings;

@interface SBEntityRemovalMedusaDefaultAnimationSettings : PTSettings

@property (nonatomic) double toBeRemovedFinalScale;
@property (nonatomic) double toBeRemovedFinalAlpha;
@property (nonatomic) double toBeRemovedFinalBlurRadius;
@property (nonatomic) double toBeMadeFullscreenFrameAnimationDelay;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeMadeFullscreenFrameAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedScaleAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *toBeRemovedAlphaAnimationSettings;

+ (id)settingsControllerModule;
+ (id)_settingsModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
