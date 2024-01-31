@interface SBHDisplaySettings : PTSettings

@property (nonatomic) double additionalTopSafeAreaInset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
