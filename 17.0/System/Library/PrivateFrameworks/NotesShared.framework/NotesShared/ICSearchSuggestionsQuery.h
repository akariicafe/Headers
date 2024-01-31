@class NSString, NSArray, NSMutableArray;
@protocol ICSearchSuggestionsResponder;

@interface ICSearchSuggestionsQuery : ICSearchQuery {
    BOOL _modernResultsOnly;
}

@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) NSArray *searchTokens;
@property (retain, nonatomic) NSArray *additionalQueries;
@property (retain, nonatomic) NSArray *topHits;
@property (retain, nonatomic) NSMutableArray *foundSuggestions;
@property (retain, nonatomic) id<ICSearchSuggestionsResponder> suggestionsResponder;

- (void).cxx_destruct;
- (id)initWithSearchString:(id)a0 searchTokens:(id)a1 additionalQueries:(id)a2 rankingQueriesDefinition:(id)a3 modernResultsOnly:(BOOL)a4 suggestionsResponder:(id)a5;
- (BOOL)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;
- (void)queryFinishedRunningWithError:(id)a0;
- (id)queryResultsToAddFromBatch:(id)a0;

@end
