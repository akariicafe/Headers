@class NSString;

@interface ICLinkSuggestionQuery : ICSearchQuery

@property (copy, nonatomic) NSString *queryString;
@property (nonatomic) BOOL includeNotes;
@property (nonatomic) BOOL includeWebsites;

- (void).cxx_destruct;
- (id)initWithQueryString:(id)a0;
- (id)initWithQueryString:(id)a0 includeNotes:(BOOL)a1 includeWebsites:(BOOL)a2;
- (id)attributesToFetch;
- (id)newSearchQueryContext;
- (id)newSearchQueryWithContext:(id)a0;

@end
