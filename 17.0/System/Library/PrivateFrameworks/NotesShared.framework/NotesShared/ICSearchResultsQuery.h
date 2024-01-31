@class NSString, NSArray;

@interface ICSearchResultsQuery : ICSearchQuery {
    BOOL _modernResultsOnly;
}

@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSArray *attributes;

+ (id)queryForClassifiedImages;

- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0 rankingQueriesDefinition:(id)a1 modernResultsOnly:(BOOL)a2;
- (id)attributesToFetch;
- (id)initWithQueryString:(id)a0 externalRankingQueries:(id)a1 modernResultsOnly:(BOOL)a2;
- (id)initWithQueryString:(id)a0 externalRankingQueries:(id)a1 modernResultsOnly:(BOOL)a2 attributes:(id)a3;
- (BOOL)modernResultsOnly;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;

@end
