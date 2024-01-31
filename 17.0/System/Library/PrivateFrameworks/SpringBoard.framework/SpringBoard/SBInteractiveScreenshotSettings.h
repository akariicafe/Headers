@class SBCornerFingerPanGestureSettings, SBCornerPencilPanGestureSettings, SBFFluidBehaviorSettings;

@interface SBInteractiveScreenshotSettings : PTSettings

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) SBCornerPencilPanGestureSettings *pencilGestureSettings;
@property (retain, nonatomic) SBCornerFingerPanGestureSettings *fingerGestureSettings;
@property (nonatomic) BOOL shouldAsynchronouslyRender;
@property (nonatomic) BOOL shouldPreheat;
@property (nonatomic) double applicationTouchDelayHysteresis;
@property (nonatomic) double cornerRadiusVisibleProgressThreshold;
@property (nonatomic) double cropCornersVisibleProgressThreshold;
@property (nonatomic) double cropLinesVisibleProgressThreshold;
@property (nonatomic) double baseCornerTranslationDegrees;
@property (nonatomic) double projectionDecelerationRate;
@property (nonatomic) double rubberbandingRange;
@property (nonatomic) double normalizedDistanceForCommitThreshold;
@property (nonatomic) double horizontalTranslationFactor;
@property (nonatomic) double verticalTranslationFactor;
@property (nonatomic) BOOL shouldInjectVelocity;
@property (nonatomic) double maximumInjectedVelocity;
@property (nonatomic) double disabledGestureCancellationDistance;
@property (nonatomic) double disabledGestureVelocityScale;
@property (retain, nonatomic) SBFFluidBehaviorSettings *contentAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *disabledGestureContentAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cropsAnimationSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *cropLinesAlphaAnimationSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
