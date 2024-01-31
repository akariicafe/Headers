@class NSArray, ATXTimeBucketedRateLimiter;

@interface ATXUpdatePredictionsSources : NSObject <ATXUpdatePredictionsDelegate>

@property (retain, nonatomic) NSArray *updateSources;
@property (retain, nonatomic) ATXTimeBucketedRateLimiter *rateLimiter;

- (void)forwardUpdatePredictionsDefaultIntervalWithReason:(unsigned long long)a0;
- (id)init;
- (void)forceUpdatePredictionsImmediatelyWithReason:(unsigned long long)a0;
- (void)forwardUpdatePredictionsImmediatelyWithReason:(unsigned long long)a0;
- (void)tryUpdatePredictionsDefaultIntervalWithReason:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)tryUpdatePredictionsImmediatelyWithReason:(unsigned long long)a0;
- (id)initWithUpdateSources:(id)a0 rateLimiter:(id)a1;

@end
