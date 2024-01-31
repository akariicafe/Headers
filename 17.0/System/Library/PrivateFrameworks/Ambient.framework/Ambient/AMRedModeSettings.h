@interface AMRedModeSettings : PTSettings

@property (nonatomic) double onLuxThreshold;
@property (nonatomic) double offLuxThreshold;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
