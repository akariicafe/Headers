@class BSMutableIntegerMap, NSMutableSet;

@interface BSKeyedSettings : BSSettings {
    NSMutableSet *_keys;
    BSMutableIntegerMap *_keyMap;
}

+ (BOOL)supportsSecureCoding;
+ (Class)_mutableClass;
+ (Class)_baseClass;

- (long long)flagForKey:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)allKeys;
- (void)_applyToSettings:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_keyDescriptionForSetting:(unsigned long long)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)enumerateKeyedFlagsWithBlock:(id /* block */)a0;
- (void)_removeAllSettings;
- (id)_sortedSettingsForDescription;
- (void).cxx_destruct;
- (id)keyForSetting:(unsigned long long)a0;
- (id)initWithSettings:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateKeyedObjectsWithBlock:(id /* block */)a0;
- (BOOL)isKeyedSettings;

@end
