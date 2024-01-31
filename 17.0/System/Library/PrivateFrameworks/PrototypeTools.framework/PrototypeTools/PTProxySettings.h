@class PTProxySettingsDefinition, NSMutableDictionary;

@interface PTProxySettings : PTSettings {
    NSMutableDictionary *_values;
}

@property (readonly, nonatomic) PTProxySettingsDefinition *definition;

+ (id)new;
+ (id)settingsFromArchiveDictionary:(id)a0;
+ (id)proxyWithDefinition:(id)a0;
+ (id)settingsOrProxyWithDefinition:(id)a0;

- (id)init;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)_initWithDefinition:(id)a0;
- (void)restoreDefaultValues;
- (void).cxx_destruct;
- (id)module;
- (id)valueForKey:(id)a0;
- (id)initWithDefaultValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)restoreFromArchiveDictionary:(id)a0;
- (id)_createChildForKey:(id)a0;

@end
