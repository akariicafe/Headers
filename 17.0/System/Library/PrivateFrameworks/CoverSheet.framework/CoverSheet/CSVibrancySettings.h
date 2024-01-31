@interface CSVibrancySettings : PTSettings

@property (nonatomic) BOOL boostEnabled;
@property (nonatomic) double minimumLuminanceDifference;
@property (nonatomic) double naturalEffectTypeStrength;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
