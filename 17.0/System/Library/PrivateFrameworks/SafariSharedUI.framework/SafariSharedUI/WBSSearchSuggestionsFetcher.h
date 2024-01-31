@class WBSOpenSearchURLTemplate;

@interface WBSSearchSuggestionsFetcher : NSObject {
    unsigned long long _numberOfPendingFetches;
    BOOL _hasConnectionToSearchHelper;
}

@property (readonly, nonatomic) WBSOpenSearchURLTemplate *suggestionsURLTemplate;
@property (readonly, nonatomic, getter=isFetching) BOOL fetching;

- (void).cxx_destruct;
- (id)_searchHelperConnection;
- (id)initWithSuggestionsURLTemplate:(id)a0;
- (void)_fetchDidFinishWithResponse:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelExistingSuggestionsRequest;
- (void)disconnectFromSearchHelperIfNecessary;
- (void)updateSuggestionsRequestWithSearchTerms:(id)a0 userAgentString:(id)a1 completionHandler:(id /* block */)a2;

@end
