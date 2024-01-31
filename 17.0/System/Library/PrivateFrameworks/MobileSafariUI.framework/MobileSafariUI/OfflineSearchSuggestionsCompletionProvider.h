@class NSString, WBSOfflineSearchSuggestionsFetcher;

@interface OfflineSearchSuggestionsCompletionProvider : CompletionProvider <WBSOfflineSearchSuggestionsFetcherDelegate> {
    WBSOfflineSearchSuggestionsFetcher *_offlineSearchSuggestionsFetcher;
    BOOL _forPrivateBrowsing;
}

@property (readonly, nonatomic, getter=areOfflineSearchSuggestionsAvailable) BOOL offlineSearchSuggestionsAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)offlineSearchSuggestionsFetcher:(id)a0 didFindSuggestions:(id)a1 forQuery:(id)a2;
- (id)initWithMaximumNumberOfSuggestions:(unsigned long long)a0 forPrivateBrowsing:(BOOL)a1;
- (void)setQueryToComplete:(id)a0;
- (void)updateOfflineSearchSuggestionAvailability;

@end
