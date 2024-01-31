@class FCCloudContext, FCDateRange, NSArray;
@protocol FCCoreConfiguration;

@interface FCLatestStoriesOperation : FCOperation

@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) id<FCCoreConfiguration> configuration;
@property (readonly, nonatomic) FCDateRange *dateRange;
@property (readonly, nonatomic) unsigned long long totalLimit;
@property (readonly, nonatomic) unsigned long long perFeedLimit;
@property (copy, nonatomic) NSArray *resultHeadlines;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (void)prepareOperation;
- (id)_constructFeedRequestsFromTags:(id)a0;
- (void)_fetchTagsForQueryingWithCompletionHandler:(id /* block */)a0;
- (id)initWithContext:(id)a0 dateRange:(id)a1 totalLimit:(unsigned long long)a2 perFeedLimit:(unsigned long long)a3;

@end
