@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject {
    NSMutableArray *_recentSearchEntries;
}

+ (id)_defaultsKey;
+ (unsigned long long)_maximumNumberOfSearchesToTrack;
+ (BOOL)_shouldTrackSearches;

- (void).cxx_destruct;
- (void)_removeLegacyRecentSearchesData;
- (void)_addLegacySearch:(id)a0;
- (void)_migrateLegacyData;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)a0;
- (void)_saveRecentSearchDictionaries:(id)a0 toUserDefaultsUsingKey:(id)a1;
- (void)_addRecentSearchEntry:(id)a0;
- (void)_loadRecentSearchesIfNeeded;
- (id)_recentSearchesDictionaries;
- (void)_saveRecentSearches;
- (void)addRecentSearch:(id)a0;
- (void)clearRecentSearches;
- (void)clearRecentSearchesAddedAfterDate:(id)a0;
- (id)recentSearches;
- (id)recentSearchesMatchingPrefix:(id)a0;

@end
