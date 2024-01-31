@interface SBSystemUISceneSettings : PTSettings

@property (nonatomic) BOOL allowAnyBundleIdentifier;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
