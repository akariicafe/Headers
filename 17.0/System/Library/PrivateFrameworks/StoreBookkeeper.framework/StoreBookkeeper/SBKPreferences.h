@interface SBKPreferences : NSObject

+ (id)storeBookkeeperPreferences;

- (id)init;
- (void)dealloc;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_preferencesDidChange;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 withDefaultValue:(id)a1;
- (void)registerDefaultsIfKeyNotSet:(id)a0 registrationBlock:(id /* block */)a1;

@end
