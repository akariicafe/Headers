@class NSArray, PXSearchQuery, PHFetchResult, PXSearchQueryMatchInfo;

@interface PXSearchQueryResult : NSObject

@property (readonly, copy, nonatomic) PXSearchQuery *searchQuery;
@property (readonly, copy, nonatomic) NSArray *searchResults;
@property (readonly, copy, nonatomic) NSArray *searchAssetResults;
@property (readonly, copy, nonatomic) PHFetchResult *curatedAssetsFetchResult;
@property (readonly, copy, nonatomic) NSArray *searchSuggestions;
@property (readonly, copy, nonatomic) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (readonly, copy, nonatomic) NSArray *reloadItemIdentifiers;

- (void).cxx_destruct;
- (id)initEmptySearchQueryResultForQuery:(id)a0;
- (id)initWithSearchQuery:(id)a0 searchResults:(id)a1 searchAssetResults:(id)a2 curatedAssetsFetchResult:(id)a3 searchSuggestions:(id)a4 searchQueryMatchInfo:(id)a5 reloadItemIdentifiers:(id)a6;

@end
