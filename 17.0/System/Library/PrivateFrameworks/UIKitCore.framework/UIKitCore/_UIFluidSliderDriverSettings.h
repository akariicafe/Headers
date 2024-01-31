@class _UISpringAnimationPrototypeSettings;

@interface _UIFluidSliderDriverSettings : PTSettings

@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *update;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *acceleratedUpdate;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
