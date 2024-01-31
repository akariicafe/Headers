@class NSMutableDictionary;

@interface PLDefaults : NSObject

@property (retain) NSMutableDictionary *managedPrefsCache;
@property (retain) NSMutableDictionary *instancePrefsCache;
@property (retain) NSMutableDictionary *userPrefsCache;
@property BOOL enableRestartAtEPL;
@property BOOL debugEnabled;
@property BOOL eplEnabled;

+ (id)sharedDefaults;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1;
+ (double)doubleForKey:(id)a0 ifNotSet:(double)a1;
+ (BOOL)isTaskFullEPLMode;
+ (BOOL)isClassDebugEnabled:(Class)a0 forKey:(id)a1;
+ (long long)mode;
+ (BOOL)debugEnabled;
+ (BOOL)boolForKey:(id)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0;
+ (int)liveModeQuery;
+ (void)setObject:(id)a0 forKey:(id)a1;
+ (BOOL)oldFullMode;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1;
+ (BOOL)taskMode;
+ (BOOL)boolForKey:(id)a0 ifNotSet:(BOOL)a1;
+ (id)applicationID;
+ (BOOL)isModelTrigger;
+ (id)objectForKey:(id)a0 ifNotSet:(id)a1;
+ (BOOL)objectExistsForKey:(id)a0;
+ (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
+ (long long)longForKey:(id)a0 ifNotSet:(long long)a1;
+ (BOOL)eplEnabled;
+ (id)objectForKey:(id)a0 synchronize:(BOOL)a1;
+ (void)setClassName:(id)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (void)setClass:(Class)a0 debugEnabled:(BOOL)a1 forKey:(id)a2;
+ (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
+ (double)doubleForKey:(id)a0;
+ (BOOL)liteMode;
+ (BOOL)fullModeForClass:(Class)a0;
+ (void)setObject:(id)a0 forKey:(id)a1 saveToDisk:(BOOL)a2;
+ (BOOL)fullMode;
+ (long long)longForKey:(id)a0;
+ (BOOL)isClassDebugEnabled:(Class)a0;
+ (BOOL)isClassNameDebugEnabled:(id)a0 forKey:(id)a1;
+ (BOOL)isDevBoard;
+ (BOOL)isModelingDebugEnabled;
+ (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
+ (void)enableRestartAtEPL;
+ (void)registerEPLNotificationWithQueue:(id)a0;
+ (void)resetUserDefaultCacheForKey:(id)a0;
+ (id)objectForKey:(id)a0;
+ (id)allDefaultsEnabled;
+ (BOOL)fullPLLog;

- (id)init;
- (id)objectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)resetUserDefaultCacheForKey:(id)a0 forApplicationID:(id)a1;
- (void).cxx_destruct;
- (id)instancePrefsObjectForKey:(id)a0;
- (id)userDefaultsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;
- (void)setObject:(id)a0 forKey:(id)a1 forApplicationID:(id)a2 saveToDisk:(BOOL)a3;
- (id)managedPrefsObjectForKey:(id)a0 forApplicationID:(id)a1 synchronize:(BOOL)a2;

@end
