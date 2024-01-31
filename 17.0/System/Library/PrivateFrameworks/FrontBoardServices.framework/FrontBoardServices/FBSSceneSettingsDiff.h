@interface FBSSceneSettingsDiff : FBSSettingsDiff

+ (Class)_settingsClass;
+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;

- (id)settingsByApplyingToMutableCopyOfSettings:(id)a0;

@end
