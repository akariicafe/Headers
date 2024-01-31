@class NSArray, _PASLock;
@protocol NSObject;

@interface SGFoundInSuggestionPresenter : SGSuggestionPresenter {
    id /* block */ _filterBlock;
    NSArray *_searchableItems;
    unsigned long long _contentOptions;
    id<NSObject> _contactStoreObserverToken;
    BOOL _loadScheduled;
    NSArray *_existingSuggestions;
    _PASLock *_lock;
}

@property (copy) NSArray *realtimeSuggestions;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addSuggestionsFromSearchableItems:(id)a0 options:(unsigned long long)a1 filter:(id /* block */)a2;
- (void)reloadSuggestionsFromSearchableItems;
- (void)_loadSuggestions;
- (void)_loadedRealtimeSuggestions:(id)a0 fromHostApp:(long long)a1;
- (void)_reloadSuggestionsForNotification:(id)a0;
- (void)_setNeedsToReloadSuggestionsAfter:(double)a0;
- (void)addSuggestionsFromSearchableItems:(id)a0 existingSuggestions:(id)a1 mailService:(id)a2 messageService:(id)a3 options:(unsigned long long)a4 filter:(id /* block */)a5;
- (void)addSuggestionsFromSearchableItems:(id)a0 existingSuggestions:(id)a1 options:(unsigned long long)a2 filter:(id /* block */)a3;
- (id)formatMixedCategoriesTitle:(id)a0;
- (void)setMailService:(id)a0 messageService:(id)a1;
- (void)setRealtimeSuggestions:(id)a0 fromHostApp:(long long)a1;

@end
