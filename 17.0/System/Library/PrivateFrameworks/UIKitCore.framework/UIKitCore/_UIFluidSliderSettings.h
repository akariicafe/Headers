@class _UIFluidSliderElasticPanDriverSettings, _UISpringAnimationPrototypeSettings, _UIFluidSliderDiscreteButtonDriverSettings;

@interface _UIFluidSliderSettings : PTSettings

@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *programmaticUpdate;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *pressScale;
@property (nonatomic) double sliderDriftFactor;
@property (nonatomic) double sliderStepCount;
@property (nonatomic) double defaultStretchAmount;
@property (retain, nonatomic) _UIFluidSliderElasticPanDriverSettings *elasticPanDriverSettings;
@property (retain, nonatomic) _UIFluidSliderDiscreteButtonDriverSettings *discreteButtonDriverSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
