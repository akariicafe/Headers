@interface CloudSettingsManager : NSObject

+ (id)sharedCloudSettingsManager;

- (void)writeToCloudSettings:(id)a0 forStore:(id)a1;
- (id)currentStateDictionary;
- (BOOL)isEnabledForStore:(id)a0;
- (void)setEnabled:(BOOL)a0 forStore:(id)a1;
- (void)applySettingsToDevice:(id)a0 forStore:(id)a1;
- (void)writeSettingsDictionaryToPrefs:(id)a0;
- (id)activeXPCConnectionForStore:(id)a0;
- (void)applyCloudSettingsToDevice:(id)a0 forStore:(id)a1;
- (long long)conflictStateForStore:(id)a0;
- (id)currentConflictDictionary;
- (id)defaultSettingsDictionary;
- (id)deviceSettingsForStore:(id)a0;
- (BOOL)isServiceKnownForStore:(id)a0;
- (id)knownServiceNames;
- (void)performFirstTimeSetup:(id)a0;
- (void)setConflict:(long long)a0 forStore:(id)a1;
- (void)writeConflictsDictionaryToPrefs:(id)a0;

@end
