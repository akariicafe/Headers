@class FCMapTable, NSArray, FCFeedItemHeadlinesOperationProperties, NSDictionary;
@protocol FCContentContext, FCFeedPersonalizing, FCCoreConfiguration;

@interface FCFeedItemHeadlinesOperation : FCOperation

@property (retain, nonatomic) NSArray *resultHeadlines;
@property (retain, nonatomic) FCFeedItemHeadlinesOperationProperties *properties;
@property (copy, nonatomic) id<FCCoreConfiguration> configuration;
@property (retain, nonatomic) id<FCContentContext> context;
@property (copy, nonatomic) NSArray *feedItems;
@property (retain, nonatomic) id<FCFeedPersonalizing> personalizer;
@property (copy, nonatomic) FCMapTable *feedItemScoreProfiles;
@property (nonatomic) long long feedPersonalizationConfigurationSet;
@property (nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ rapidUpdateRefreshTest;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;
@property (copy, nonatomic) id /* block */ headlinesMapCompletionHandler;

- (id)init;
- (void)_fetchUnadornedHeadlinesWithCompletionHandler:(id /* block */)a0;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void).cxx_destruct;

@end
