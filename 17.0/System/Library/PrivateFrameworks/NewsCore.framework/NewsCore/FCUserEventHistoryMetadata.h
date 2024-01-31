@interface FCUserEventHistoryMetadata : NSObject

@property (nonatomic) long long aggregateStoreGenerationTime;
@property (nonatomic) long long aggregateTotalCount;
@property (nonatomic) double meanCountOfEvents;
@property (nonatomic) long long sessionsOnDiskSize;
@property (nonatomic) double standardDeviationOfEvents;
@property (nonatomic) long long totalEventsCount;
@property (nonatomic) long long headlineEventCount;
@property (nonatomic) long long headlinesWithValidTitleEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithInvalidTitleEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithValidBodyEmbeddingsEventCount;
@property (nonatomic) long long headlinesWithInvalidBodyEmbeddingsEventCount;

+ (id)emptyWithSessionsOnDiskSize:(long long)a0;

- (id)initWithAggregateStoreGenerationTime:(long long)a0 aggregateTotalCount:(long long)a1 meanCountOfEvents:(double)a2 sessionsOnDiskSize:(long long)a3 standardDeviationOfEvents:(double)a4 totalEventsCount:(long long)a5 headlineEventCount:(long long)a6 headlinesWithValidTitleEmbeddingsEventCount:(long long)a7 headlinesWithInvalidTitleEmbeddingsEventCount:(long long)a8 headlinesWithValidBodyEmbeddingsEventCount:(long long)a9 headlinesWithInvalidBodyEmbeddingsEventCount:(long long)a10;
- (id)description;

@end
