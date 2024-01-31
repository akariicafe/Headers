@class NSString;

@interface SMSuggestionsStore : RTStore <RTEnumerableStore, SMSuggestionsStoreProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestForSuggestionEnumerationOptions:(id)a0 error:(id *)a1;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)_clearSuggestionsWithHandler:(id /* block */)a0;
- (void)_deleteSuggestionsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_fetchSuggestionsCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchSuggestionsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_storeSuggestions:(id)a0 handler:(id /* block */)a1;
- (void)clearSuggestionsWithHandler:(id /* block */)a0;
- (void)deleteSuggestionsPredating:(id)a0 handler:(id /* block */)a1;
- (void)fetchSuggestionsCountWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchSuggestionsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)storeSuggestions:(id)a0 handler:(id /* block */)a1;

@end
