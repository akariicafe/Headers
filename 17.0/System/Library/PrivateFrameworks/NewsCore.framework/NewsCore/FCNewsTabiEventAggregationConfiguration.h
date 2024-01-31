@class NSDictionary, FCNewsTabiEventAggregationOutputConfiguration, FCNewsTabiEventAggregationConditions;

@interface FCNewsTabiEventAggregationConfiguration : NSObject

@property (nonatomic) long long maxTopicIds;
@property (nonatomic) long long maxSessionEvents;
@property (nonatomic) BOOL readEventsOnly;
@property (retain, nonatomic) NSDictionary *eventUtilizationProbabilities;
@property (nonatomic) long long titleEmbeddingDimension;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *bundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationOutputConfiguration *nonBundleOutputConfiguration;
@property (retain, nonatomic) FCNewsTabiEventAggregationConditions *eventConditions;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMaxTopicIds:(long long)a0 maxSessionEvents:(long long)a1 readEventsOnly:(BOOL)a2 titleEmbeddingDimension:(long long)a3 fullBodyEmbeddingDimension:(long long)a4 bundleOutputConfiguration:(id)a5 nonBundleOutputConfiguration:(id)a6 eventConditions:(id)a7;

@end
