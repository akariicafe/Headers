@class SBFFluidBehaviorSettings;

@interface SBSystemApertureTransitionSettings : PTSettings

@property (retain, nonatomic) SBFFluidBehaviorSettings *defaultBehaviorSettings;

+ (id)_moduleWithSectionTitle:(id)a0;
+ (id)settingsControllerModule;
+ (id)_childSettingsKeyPathsToTitles;
+ (id)_rowForKeyPath:(id)a0 title:(id)a1;

- (void)setDefaultValues;
- (void).cxx_destruct;
- (id)_childSettings;
- (void)_setDefaultValuesForBehaviorSettings:(id)a0;
- (void)setChildBehaviorSettingsNamePrefix:(id)a0;

@end
