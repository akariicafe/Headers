@class STUIItemSettings, STUIVisualProviderSettings;

@interface STUIStatusBarSettings : PTSettings

@property (nonatomic) BOOL alwaysAutomaticStyle;
@property (nonatomic) long long forcedMode;
@property (retain, nonatomic) STUIVisualProviderSettings *visualProviderSettings;
@property (retain, nonatomic) STUIItemSettings *itemSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
