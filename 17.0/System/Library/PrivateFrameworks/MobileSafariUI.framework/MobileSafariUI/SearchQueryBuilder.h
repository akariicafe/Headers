@class NSString, _SFSearchEngineInfo;

@interface SearchQueryBuilder : NSObject {
    NSString *queryString;
    _SFSearchEngineInfo *engineInfo;
}

+ (id)searchQueryBuilderWithQuery:(id)a0 forPrivateBrowsing:(BOOL)a1;
+ (id)searchQueryBuilderWithXWebSearchURL:(id)a0 forPrivateBrowsing:(BOOL)a1;

- (id)queryString;
- (void).cxx_destruct;
- (id)searchURL;
- (id)initWithQueryString:(id)a0 forPrivateBrowsing:(BOOL)a1;
- (id)initWithSearchEngineInfo:(id)a0 queryString:(id)a1;
- (id)initWithXWebSearchURL:(id)a0 forPrivateBrowsing:(BOOL)a1;
- (id)searchEngineInfo;

@end
