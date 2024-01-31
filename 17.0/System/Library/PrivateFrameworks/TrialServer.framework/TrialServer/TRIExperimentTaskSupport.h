@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)tags;
- (void)mergeTelemetry:(id)a0;
- (void)addMetric:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (void)setIdentifyTelemetryAsV1Rollout:(BOOL)a0;
- (id)initWithExperimentDeployment:(id)a0;
- (void)addDimension:(id)a0;

@end
