@class NSArray, NSDictionary, FCCloudContext, FCFeedItemFeature, FCDateRange;

@interface FCMyArticlesSearchOperation : FCOperation

@property (retain, nonatomic) NSArray *resultFeedItems;
@property (copy) NSDictionary *resultFeedContextByFeedID;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCFeedItemFeature *feature;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (nonatomic) BOOL channelsOnly;
@property (nonatomic) BOOL cachedOnly;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) unsigned long long maxFeedItems;
@property (copy, nonatomic) id /* block */ searchCompletionHandler;

- (id)init;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;
- (id)_cappedFeedItemsFromResponses:(id)a0 allFeedItems:(id)a1;
- (void)_generateFeedRequestsForFeedRange:(id)a0 completionHandler:(id /* block */)a1;

@end
