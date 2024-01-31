@class WebBookmarkCollection, WBTabCollection, NSMutableArray;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {
    WebBookmarkCollection *_bookmarkCollection;
    BOOL _bookmarksNeedToSave;
    NSMutableArray *_cachedFrequentlyVisitedBookmarks;
    WBTabCollection *_tabCollection;
}

@property (class, readonly, nonatomic) FrequentlyVisitedSitesController *sharedController;

- (id)frequentlyVisitedSites;
- (void)dealloc;
- (id)initWithBookmarkCollection:(id)a0 history:(id)a1 bannedURLStore:(id)a2 tabCollection:(id)a3 profileIdentifier:(id)a4;
- (id)_frequentlyVisitedSitesURLStringSet;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)banFrequentlyVisitedSite:(id)a0 inMemoryBookmarkChangeTrackingAvailable:(BOOL)a1;
- (void)_clearFrequentlyVisitedSitesInBookmarksDB;
- (void)clearFrequentlyVisitedSites;
- (void).cxx_destruct;
- (BOOL)bookmarkIsFrequentlyVistedSite:(id)a0;
- (void)_deleteFrequentlyVisistedSiteInCurrentPofile:(id)a0;
- (void)_saveFrequentlyVisitedSites:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveFrequentlyVisitedSitesToBookmarksDBWithCompletion:(id /* block */)a0;
- (void)promoteFrequentlyVisitedSite:(id)a0 toFavoriteAtIndex:(unsigned long long)a1;

@end
