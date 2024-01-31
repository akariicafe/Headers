@class NTTodayResults, NSDictionary, NTPBTodayResultOperationFetchInfo;

@interface NTParsecTodayResultOperation : NTTodayResultOperation

@property (copy, nonatomic) NTTodayResults *resultTodayResults;
@property (copy, nonatomic) NSDictionary *resultAssetHandlesByAssetID;
@property (copy, nonatomic) NTPBTodayResultOperationFetchInfo *resultFetchInfo;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)_aggregateSectionsWithSectionDescriptor:(id)a0 headlines:(id)a1;
- (void)_fetchThumbnailsForTodayResults:(id)a0 withSearchResultsByHeadline:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchTodayResultsWithCompletionHandler:(id /* block */)a0;
- (id)_todayResultsWithSectionDescriptor:(id)a0 aggregationResult:(id)a1 searchResultsByHeadline:(id)a2 ZKWNewsOperation:(id)a3;
- (void)_updateUseParsecEnabledWithCompletionHandler:(id /* block */)a0;

@end
