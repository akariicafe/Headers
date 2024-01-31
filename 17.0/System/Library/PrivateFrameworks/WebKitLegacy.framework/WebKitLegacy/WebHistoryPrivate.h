@interface WebHistoryPrivate : NSObject {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _entriesByURL;
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> { struct __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>> *, std::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>>>> { void *__value_; } __ptr_; } _entriesByDate;
    struct RetainPtr<NSMutableArray> { void *m_ptr; } _orderedLastVisitedDays;
    BOOL itemLimitSet;
    int itemLimit;
    BOOL ageInDaysLimitSet;
    int ageInDaysLimit;
}

+ (void)initialize;

- (id)allItems;
- (id)init;
- (BOOL)removeItems:(id)a0;
- (BOOL)removeItem:(id)a0;
- (BOOL)removeAllItems;
- (void)addItems:(id)a0;
- (id).cxx_construct;
- (id)data;
- (void).cxx_destruct;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (BOOL)containsURL:(id)a0;
- (id)itemForURL:(id)a0;
- (id)itemForURLString:(id)a0;
- (BOOL)findKey:(long long *)a0 forDay:(double)a1;
- (BOOL)addItem:(id)a0 discardDuplicate:(BOOL)a1;
- (void)addItemToDateCaches:(id)a0;
- (void)addVisitedLinksToVisitedLinkStore:(void *)a0;
- (id)ageLimitDate;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (void)insertItem:(id)a0 forDateKey:(long long)a1;
- (BOOL)loadFromURL:(id)a0 collectDiscardedItemsInto:(id)a1 error:(id *)a2;
- (BOOL)loadHistoryGutsFromURL:(id)a0 savedItemsCount:(int *)a1 collectDiscardedItemsInto:(id)a2 error:(id *)a3;
- (id)orderedItemsLastVisitedOnDay:(id)a0;
- (id)orderedLastVisitedDays;
- (void)rebuildHistoryByDayIfNeeded:(id)a0;
- (BOOL)removeItemForURLString:(id)a0;
- (BOOL)removeItemFromDateCaches:(id)a0;
- (void)setHistoryAgeInDaysLimit:(int)a0;
- (void)setHistoryItemLimit:(int)a0;
- (id)visitedURL:(id)a0 withTitle:(id)a1;

@end
