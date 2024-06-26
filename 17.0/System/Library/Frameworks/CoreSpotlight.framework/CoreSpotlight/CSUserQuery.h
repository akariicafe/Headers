@class _CSMultiQuery, NSString, NSArray, CSSearchQueryContext, NSDictionary, _CSContactSearch, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface CSUserQuery : CSSearchQuery {
    CSSearchQueryContext *_clientContext;
    NSDictionary *_parserOptions;
    NSString *_searchString;
    NSMutableArray *_nlpSuggestions;
    NSMutableArray *_templateSuggestions;
    NSMutableArray *_suggestions;
    NSMutableArray *_completions;
    NSMutableArray *_instantAnswers;
    _CSContactSearch *_contactSearch;
    _CSMultiQuery *_contactCountingQuerySearchFrom;
    _CSMultiQuery *_contactCountingQuerySearchTo;
    long long _foundSuggestionCount;
    long long _tokenCount;
    BOOL _queryRewritten;
    BOOL _queryIsTopHit;
    BOOL _didProcessTopHits;
    long long _currentTokenKind;
    long long _currentTokenScope;
}

@property (copy) id /* block */ foundInstantAnswersHandler;
@property (copy) id /* block */ foundInstantAnswersHandlerOld;
@property (copy, nonatomic) NSArray *contactSearchResults;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *contactSearchSemaphore;
@property (readonly, nonatomic) unsigned long long contactSearchSemaphoreWaitTime;
@property (readonly) long long foundSuggestionCount;
@property (copy) id /* block */ foundSuggestionsHandler;

+ (id)parseSearchString:(id)a0 parseOptions:(id)a1 queryContext:(id)a2;
+ (id)dedupSuggestions:(id)a0 seenContactInfoToSuggestion:(id)a1;
+ (id)generateFilterQueriesBasedOnPreviousSuggestions:(id)a0;
+ (void)filteredTemplateSuggestions:(id)a0 nlpSuggestions:(id)a1;
+ (id)trimSuggestions:(id)a0 options:(id)a1 peopleSelectedScope:(long long)a2 isShortQuery:(BOOL)a3;
+ (id)advancedComponentsWithSearchString:(id)a0 parseResult:(id)a1 parseOptions:(id)a2 queryContext:(id)a3;
+ (id)dedupedDateSuggestions:(id)a0;
+ (void)sortSearchableItemsByL2:(id)a0;
+ (void)updateWithTemplateSuggestions:(id)a0 searchString:(id)a1 currentSuggestion:(id)a2;
+ (id)dedupedSuggestions:(id)a0 options:(id)a1;
+ (id)collectUnigrams:(id)a0 locale:(id)a1;
+ (double)computeScoreForNameUnigrams:(id)a0 queryUnigrams:(id)a1 queryString:(id)a2 locale:(id)a3 isContactsSuggestion:(BOOL)a4;
+ (double)computeTopicalityScoreForName:(id)a0 inputName:(id)a1 numTokensInName:(unsigned long long)a2 isContactsSuggestion:(BOOL)a3 queryUnigrams:(id)a4 isFirstName:(BOOL)a5 locale:(id)a6;
+ (void)computeRankingScoreForSuggestions:(id)a0 queryString:(id)a1 locale:(id)a2;
+ (id)dedupedNextTokenSuggestions:(id)a0 context:(id)a1;
+ (id)computeRankingScoreForSuggestion:(id)a0 queryString:(id)a1 locale:(id)a2;
+ (id)emailSpecialChars;
+ (id)normalizeAndTrimContacts:(id)a0 maxCount:(long long)a1;
+ (id)orderedSuggestions:(id)a0 options:(id)a1;
+ (id)suggestionsByDetectingEmailIntentForPeopleSuggestions:(id)a0;
+ (id)computeEmailAddressTopicalityScore:(id)a0 inputEmailAddress:(id)a1 queryUnigrams:(id)a2 locale:(id)a3;
+ (id)queryContextWithUserQueryString:(id)a0 searchString:(id)a1 clientContext:(id)a2;
+ (id)orderedSuggestionsForPhotos:(id)a0 options:(id)a1;
+ (id)flattenCSFieldSpecifications:(id)a0;
+ (id)parseResultWithSearchString:(id)a0 parseOptions:(id)a1 queryContext:(id)a2 isZKW:(BOOL)a3;

- (void)handleFoundItems:(id)a0;
- (void)prepareSearch;
- (void)handleFoundTemplateSuggestions:(id)a0;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2;
- (void)userEngagedWithSuggestion:(id)a0 visibleSuggestions:(id)a1 interactionType:(int)a2;
- (void)start;
- (void)userEngagedWithResult:(id)a0 visibleResults:(id)a1 interactionType:(int)a2;
- (id)foundNLPSuggestions;
- (void)handleFoundInstantAnswers:(id)a0;
- (void)startContactSearchWithUserQuery:(id)a0 maxCount:(long long)a1;
- (id)initWithQueryString:(id)a0 queryContext:(id)a1;
- (id)initWithUserQueryString:(id)a0 userQueryContext:(id)a1;
- (void)handleFoundSuggestions:(id)a0;
- (void)handleFoundCompletions:(id)a0;
- (void)processInstantAnswersWithFoundItems:(id)a0;
- (id)clientContext;
- (id)initWithUserString:(id)a0 queryContext:(id)a1;
- (id)foundCompletions;
- (id)processToContacts:(id)a0 resultsToMultiQuery:(id)a1 contactsTo:(id)a2 processedContacts:(id)a3;
- (id)peopleSuggestionsWithContactSearchResults:(id)a0;
- (void)updateRecentSuggestions:(id)a0;
- (void)handleQueryRewritten;
- (id)queryContext;
- (void)handleFoundInstantAnswer:(id)a0;
- (void)handleInstantAnswers;
- (id)foundInstantAnswers;
- (id)processFromContacts:(id)a0 resultsFromMultiQuery:(id)a1 contactsFrom:(id)a2 processedContacts:(id)a3;
- (void)handleCompletion:(id)a0;
- (BOOL)queryRewritten;
- (void)setFilterQueries:(id)a0;
- (void).cxx_destruct;
- (void)handleFoundNLPSuggestions:(id)a0;
- (void)cancel;
- (void)willStartQuery;
- (id)keyboardLanguage;
- (id)queryStringWithQueryContext:(id)a0 searchString:(id)a1 options:(id)a2;
- (id)initWithUserQueryString:(id)a0 queryContext:(id)a1;
- (void)handleSuggestions;
- (void)startContactSearchIfNeededWithSearchQuery:(id)a0;
- (void)handleFirstBatch:(id)a0;
- (id)initWithQueryString:(id)a0 context:(id)a1;
- (void)filterContactPeopleSuggestions:(id)a0 cachedSuggestionsEmailToScope:(id)a1 completionHandler:(id /* block */)a2;
- (id)filterQueries;
- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (id)foundSuggestions;
- (id)foundTemplateSuggestions;

@end
