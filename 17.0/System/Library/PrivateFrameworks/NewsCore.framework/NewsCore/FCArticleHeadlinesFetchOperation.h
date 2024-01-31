@class NSArray;
@protocol FCCoreConfiguration, FCContentContext;

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) NSArray *articleIDs;
@property (retain, nonatomic) NSArray *ignoreCacheForArticleIDs;
@property (retain, nonatomic) NSArray *resultHeadlines;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property BOOL overrideArticleCachePolicy;
@property unsigned long long articleCachePolicy;
@property double articleMaximumCachedAge;
@property BOOL overrideTagCachePolicy;
@property unsigned long long tagCachePolicy;
@property double tagMaximumCachedAge;
@property (nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;
@property (copy, nonatomic) id /* block */ interestTokenHandler;

- (id)completeFetchOperation;
- (id)init;
- (id)fetchConfigWithCompletion:(id /* block */)a0;
- (id)fetchRecordsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)determineAppropriateFetchStepsWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 articleIDs:(id)a1 ignoreCacheForArticleIDs:(id)a2;

@end
