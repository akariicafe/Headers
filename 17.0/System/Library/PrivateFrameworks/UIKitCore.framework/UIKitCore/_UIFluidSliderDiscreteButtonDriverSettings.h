@class _UISpringAnimationPrototypeSettings;

@interface _UIFluidSliderDiscreteButtonDriverSettings : _UIFluidSliderDriverSettings

@property (nonatomic) double repeatDelay;
@property (nonatomic) double repeatCadence;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double verticalVolumeDownScale;
@property (nonatomic) double verticalVolumeUpScale;
@property (nonatomic) double horizontalVolumeDownScale;
@property (nonatomic) double horizontalVolumeUpScale;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *settle;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
