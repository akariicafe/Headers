@class PARSession;

@interface SPCacheManager : NSObject {
    PARSession *_session;
}

@property (class, readonly) SPCacheManager *defaultManager;

+ (id)defaults;
+ (void)removeKey:(id)a0;
+ (void)setVersionWithValue:(long long)a0;
+ (void)setDefaultWithKey:(id)a0 value:(id)a1;
+ (long long)version;
+ (id)defaultValueWithKey:(id)a0;
+ (id)identifier;
+ (void)removeDefaults;
+ (id)defaultProperties;

- (void)updateRecentsWithBundleIdentifiers:(id)a0;
- (id)recentResultsWithOptions:(id)a0;
- (id)init;
- (id)recentResultsWithOptions:(id)a0 rankAndDeduplicate:(id /* block */)a1;
- (void)deleteLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3;
- (void)enumerateRecentResultsUsingBlock:(id /* block */)a0;
- (void)cacheLocalResult:(id)a0 identifier:(id)a1 bundleIdentifier:(id)a2 protectionClass:(id)a3 searchString:(id)a4;
- (id)_createRecentsFromEngagedResults:(id)a0 maxCount:(unsigned long long)a1;
- (void)cachePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (void)deleteAllResults;
- (void)cacheSuggestion:(id)a0 type:(int)a1 score:(id)a2 searchString:(id)a3;
- (void)deleteSuggestion:(id)a0 type:(int)a1 score:(id)a2;
- (void)deleteResult:(id)a0 title:(id)a1;
- (void)enumerateRecentCompletionsWithSearchString:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)deleteContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2;
- (void)cacheContact:(id)a0 contactIdentifier:(id)a1 score:(id)a2 searchString:(id)a3;
- (void)cacheResult:(id)a0 title:(id)a1 searchString:(id)a2;
- (void)deletePerson:(id)a0 personQueryIdentifier:(id)a1 score:(id)a2;

@end
