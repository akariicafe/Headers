@interface _UIFocusAnimationConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double focusingDurationScaleFactorLowerBound;
@property (nonatomic) double focusingDurationScaleFactorUpperBound;
@property (nonatomic) double unfocusingDurationScaleFactorLowerBound;
@property (nonatomic) double unfocusingDurationScaleFactorUpperBound;
@property (nonatomic) double minimumFocusDuration;
@property (nonatomic) double unfocusingRepositionBaseDuration;
@property (nonatomic) double unfocusingBackgroundFadeDurationPercentage;
@property (nonatomic) double focusingDelay;
@property (nonatomic) double focusingBaseDuration;
@property (nonatomic) double unfocusingBaseDuration;

+ (id)configurationWithStyle:(long long)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)_focusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)a0;
- (double)_defaultVelocityBasedDurationScaleFactorForAnimationInContext:(id)a0;
- (double)_unfocusingRepositionVelocityBasedDurationScaleFactorForAnimationInContext:(id)a0;
- (double)_unfocusingVelocityBasedDurationScaleFactorForAnimationInContext:(id)a0;

@end
