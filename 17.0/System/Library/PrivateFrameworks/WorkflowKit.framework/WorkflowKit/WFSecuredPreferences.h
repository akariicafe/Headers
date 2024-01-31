@class NSUserDefaults;

@interface WFSecuredPreferences : NSObject

@property (class, readonly, nonatomic) WFSecuredPreferences *standardPreferences;

@property (copy, nonatomic) NSUserDefaults *userDefaults;

- (id)init;
- (void)registerDefaults:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)userDefaultsDidChange:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)savePreferences;

@end
