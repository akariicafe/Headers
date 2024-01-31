@interface ARKitUserDefaults : NSObject

+ (long long)integerForKey:(id)a0 useCache:(BOOL)a1;
+ (id)cachedObjectForKey:(id)a0;
+ (void)setValue:(id)a0 forKey:(id)a1;
+ (id)objectForKey:(id)a0 useCache:(BOOL)a1;
+ (id)defaultValues;
+ (BOOL)boolForKey:(id)a0;
+ (id)resolutionDictionaryForKey:(id)a0;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (float)floatForKey:(id)a0;
+ (float)floatForKey:(id)a0 useCache:(BOOL)a1;
+ (id)keysApprovedForProcessEnvironmentOverride;
+ (void)removeObjectForKey:(id)a0;
+ (void)removeCachedObjectForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (id)numberForKey:(id)a0 useCache:(BOOL)a1;
+ (id)userDefaultsCache;
+ (void)removeAllKeys;
+ (void)setBool:(BOOL)a0 forKey:(id)a1;
+ (BOOL)boolForKey:(id)a0 useCache:(BOOL)a1;
+ (double)doubleForKey:(id)a0;
+ (id)_numberForObject:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (id)listForKey:(id)a0;
+ (void)synchronize;
+ (id)objectForKeySlow:(id)a0;
+ (void)clearUserDefaultsCache;
+ (id)valueForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (void)cacheObject:(id)a0 forKey:(id)a1;
+ (BOOL)shouldUseCache;
+ (double)doubleForKey:(id)a0 useCache:(BOOL)a1;

@end
