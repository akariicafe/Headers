@protocol WBSOfflineSearchSuggestionsFetcherDelegate;

@interface WBSOfflineSearchSuggestionsFetcher : NSObject {
    unsigned long long _offlineSuggestionsStatus;
}

@property (weak, nonatomic) id<WBSOfflineSearchSuggestionsFetcherDelegate> delegate;
@property (readonly, nonatomic, getter=areOfflineSearchSuggestionsAvailable) BOOL offlineSuggestionsAvailable;

- (void)updateAvailability;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setCurrentQuery:(id)a0;
- (void)_checkForRemoteDisablement:(id /* block */)a0;
- (void)_logOfflineSuggestionStatus;
- (id)_searchHelperProxy;
- (id)initWithMaximumSuggestionsToFetch:(unsigned long long)a0;

@end
