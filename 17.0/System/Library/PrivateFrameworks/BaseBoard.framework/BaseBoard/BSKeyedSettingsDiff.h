@interface BSKeyedSettingsDiff : BSSettingsDiff

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)diffFromSettings:(id)a0 toSettings:(id)a1;
+ (Class)_removalClass;

- (id)allSettings;
- (BOOL)_isKeyed;
- (id)allKeys;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (void)inspectKeyedChangesWithBlock:(id /* block */)a0;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)a0;
- (void)applyToSettings:(id)a0;
- (unsigned long long)_diffTypesForKey:(id)a0;

@end
