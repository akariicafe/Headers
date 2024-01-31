@class NSString;
@protocol CNFuture;

@interface _CNAutocompleteCachingSearchProvider : NSObject <CNAutocompleteSearchProvider> {
    id<CNFuture> _localSearchFuture;
    id<CNFuture> _recentsSearchFuture;
    id<CNFuture> _stewieSearchFuture;
    id<CNFuture> _suggestionsSearchFuture;
    id<CNFuture> _predictionSearchFuture;
    id<CNFuture> _localExtensionSearchesFuture;
    id<CNFuture> _directoryServerSearchFuture;
    id<CNFuture> _calendarServerSearchFuture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)localSearch;
- (id)calendarServerSearch;
- (id)directoryServerSearch;
- (id)initWithSearchProvider:(id)a0;
- (id)localExtensionSearches;
- (id)predictionSearch;
- (id)recentsSearch;
- (id)stewieSearch;
- (id)suggestionsSearch;

@end
