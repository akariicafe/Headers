@class EKSpotlightSearch, NSString, NSMutableDictionary, NSArray;

@interface CUIKOccurrenceCacheSearchDataSource : CUIKOccurrenceCacheDataSource {
    EKSpotlightSearch *_narrowSearch;
    EKSpotlightSearch *_distantFutureSearch;
    EKSpotlightSearch *_distantPastSearch;
    NSString *_searchTerm;
    NSMutableDictionary *_processingCachedDays;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _resultsLock;
    NSArray *_sortedDays;
    BOOL _sortedDaysUpdated;
    int _searchSeed;
}

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)stopSearching;
- (void)searchWithTerm:(id)a0;
- (id)_createCachedDays;
- (void)_runBlock:(id /* block */)a0;
- (void)_runBlock:(id /* block */)a0 withRandomDelayUpperbound:(unsigned int)a1;
- (void)_updateCachedDaysScrollingToToday:(BOOL)a0;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void)invalidateCachedOccurrences;
- (BOOL)supportsFakeTodaySection;
- (BOOL)supportsInvitations;

@end
