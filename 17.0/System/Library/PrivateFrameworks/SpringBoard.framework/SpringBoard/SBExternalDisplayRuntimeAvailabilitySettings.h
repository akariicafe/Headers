@interface SBExternalDisplayRuntimeAvailabilitySettings : PTSettings

@property (nonatomic) BOOL requirePointer;
@property (nonatomic) BOOL requireHardwareKeyboard;
@property (readonly, nonatomic) long long extendedDisplayRequirements;

+ (id)_moduleWithSectionTitle:(id)a0;
+ (id)settingsControllerModule;
+ (BOOL)ignoresKey:(id)a0;

- (void)setDefaultValues;

@end
