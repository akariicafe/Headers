@interface EMServerConfiguration : NSObject

+ (id)getValueForKey:(id)a0;
+ (void)clearCache;
+ (BOOL)refresh;
+ (id)_userDefaults;
+ (id)_dateFormatter;
+ (id)_userDefaultsKey;
+ (id)getValueForKey:(id)a0 refreshIfNeeded:(BOOL)a1;
+ (void)_assertNotMainThread;
+ (double)_cacheValidityInterval;
+ (id)_cachedPropertyList;
+ (id)_configurationLocation;
+ (void)_savePropertyList:(id)a0 withDate:(id)a1;
+ (id)cachedPropertyList;
+ (BOOL)isCacheRecent;
+ (BOOL)isCacheRecentLastRefreshDate:(id *)a0;
+ (void)overrideWithPropertyList:(id)a0;
+ (void)refreshAsync;

@end
