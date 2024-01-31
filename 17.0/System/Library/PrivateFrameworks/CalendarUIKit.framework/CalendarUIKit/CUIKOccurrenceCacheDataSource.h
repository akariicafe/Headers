@class NSString, NSSet, EKEventStore, NSMutableArray;

@interface CUIKOccurrenceCacheDataSource : NSObject <CUIKOccurrenceCacheDataSourceProtocol> {
    EKEventStore *_eventStore;
    NSSet *_calendars;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchLock;
    NSMutableArray *_cachedDays;
    int _cachedDaysSeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)stopSearching;
- (long long)sectionForCachedOccurrencesOnDate:(id)a0;
- (id)dateAtDayIndex:(long long)a0;
- (void)searchWithTerm:(id)a0;
- (id)_cachedDays;
- (id)_cachedOccurrenceAtIndexPath:(id)a0;
- (id)_createCachedDays;
- (void)_fetchDaysStartingFromSection:(long long)a0 sectionsToLoadInBothDirections:(long long)a1 background:(BOOL)a2 includeGivenSection:(BOOL)a3;
- (id)_mutableDayDictionaryAtIndex:(unsigned long long)a0;
- (long long)cachedDayCount;
- (id)cachedOccurrenceAtIndexPath:(id)a0;
- (BOOL)cachedOccurrencesAreLoaded;
- (long long)countOfOccurrencesAtDayIndex:(long long)a0;
- (id)faultOccurrencesForDay:(id)a0 inOccurrencesArray:(id)a1 index:(long long)a2 limit:(long long *)a3 cacheSeed:(int)a4;
- (void)fetchDaysInBackgroundStartingFromSection:(long long)a0;
- (void)fetchDaysStartingFromSection:(long long)a0 sectionsToLoadInBothDirections:(long long)a1;
- (id)indexPathsForOccurrence:(id)a0;
- (id)initWithEventStore:(id)a0 calendars:(id)a1;
- (void)invalidateCachedOccurrences;
- (void)setCachedDays:(id)a0;
- (BOOL)supportsFakeTodaySection;
- (BOOL)supportsInvitations;

@end
