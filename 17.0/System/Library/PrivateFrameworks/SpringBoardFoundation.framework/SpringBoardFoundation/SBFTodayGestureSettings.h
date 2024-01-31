@class SBFFluidBehaviorSettings;

@interface SBFTodayGestureSettings : PTSettings

@property (nonatomic) double sideSpringTension;
@property (nonatomic) double sideSpringFriction;
@property (nonatomic) double interactiveSideSpringTension;
@property (nonatomic) double interactiveSideSpringFriction;
@property (retain, nonatomic) SBFFluidBehaviorSettings *overlayPositionSettings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *overlayBackdropSettings;
@property (nonatomic) BOOL scaleAnimationSettingsWithGestureVelocity;
@property (nonatomic) double minimumVelocity;
@property (nonatomic) double maximumVelocity;
@property (nonatomic) double dampingRatioAtMinimumVelocity;
@property (nonatomic) double dampingRatioAtMaximumVelocity;
@property (nonatomic) double responseAtMinimumVelocity;
@property (nonatomic) double responseAtMaximumVelocity;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
