@interface ATXShadowMetrics : NSObject

@property (nonatomic) unsigned long long numberOfCorrectTop1CachedPrediction;
@property (nonatomic) unsigned long long numberOfCorrectTop2CachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectTop4CachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectTop8CachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectHighConfidenceCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectMediumConfidenceCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectLowConfidenceCachedPredictions;
@property (nonatomic) unsigned long long numberOfCorrectCachedPredictions;
@property (nonatomic) unsigned long long numberOfCachedPredictions;
@property (nonatomic) unsigned long long numberOfCachedHighConfidencePredictions;
@property (nonatomic) unsigned long long numberOfCachedMediumConfidencePredictions;
@property (nonatomic) unsigned long long numberOfCachedLowConfidencePredictions;
@property (nonatomic) unsigned long long numberOfShadowEventTop1CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventTop2CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventTop4CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventTop8CacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventHighConfidenceCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventMediumConfidenceCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventLowConfidenceCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEventCacheHits;
@property (nonatomic) unsigned long long numberOfShadowEvents;
@property (nonatomic) unsigned long long numberOfPredictionCacheRefreshes;
@property (nonatomic) double sumOfShadowEventCacheHitReciprocalRanks;
@property (readonly, nonatomic) double precisionAtTop1CachedPrediction;
@property (readonly, nonatomic) double precisionAtTop2CachedPredictions;
@property (readonly, nonatomic) double precisionAtTop4CachedPredictions;
@property (readonly, nonatomic) double precisionAtTop8CachedPredictions;
@property (readonly, nonatomic) double precisionOfHighConfidenceCachedPredictions;
@property (readonly, nonatomic) double precisionOfMediumConfidenceCachedPredictions;
@property (readonly, nonatomic) double precisionOfLowConfidenceCachedPredictions;
@property (readonly, nonatomic) double precisionAllCachedPredictions;
@property (readonly, nonatomic) double recallAtTop1CachedPrediction;
@property (readonly, nonatomic) double recallAtTop2CachedPredictions;
@property (readonly, nonatomic) double recallAtTop4CachedPredictions;
@property (readonly, nonatomic) double recallAtTop8CachedPredictions;
@property (readonly, nonatomic) double recallOfHighConfidenceCachedPredictions;
@property (readonly, nonatomic) double recallOfMediumConfidenceCachedPredictions;
@property (readonly, nonatomic) double recallOfLowConfidenceCachedPredictions;
@property (readonly, nonatomic) double recallAllCachedPredictions;
@property (readonly, nonatomic) double meanReciprocalRank;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)asCoreAnalyticsMessageWithModelId:(id)a0 executableType:(long long)a1;
- (BOOL)isEqualToATXShadowMetrics:(id)a0;

@end
