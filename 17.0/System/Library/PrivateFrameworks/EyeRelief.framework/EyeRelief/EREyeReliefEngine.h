@class NSUserDefaults, ERAttentionAwarenessClient;

@interface EREyeReliefEngine : NSObject

@property (retain) ERAttentionAwarenessClient *attentionAwarenessClient;
@property float tooCloseCount;
@property long long interventionType;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic) long long tooCloseDistanceThreshold;

+ (float)_countReductionForInactiveTime:(double)a0 forSamplingInterval:(double)a1;

- (BOOL)invalidateWithError:(id *)a0;
- (void)takeDistanceSampleWithCompletion:(id /* block */)a0;
- (id)init;
- (void)_sendDistanceEvent:(id)a0;
- (void)processInactivity:(double)a0 forSamplingInterval:(double)a1;
- (void).cxx_destruct;
- (void)processInterventionOutcome:(long long)a0;
- (id)_initFromUserDefaults:(BOOL)a0;
- (BOOL)cancelWithError:(id *)a0;
- (void)_processDistanceEvent:(id)a0;

@end
