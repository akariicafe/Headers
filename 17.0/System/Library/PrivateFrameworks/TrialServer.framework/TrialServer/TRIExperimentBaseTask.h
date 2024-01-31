@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (unsigned long long)hash;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)tags;
- (id)initWithExperiment:(id)a0;
- (void)mergeTelemetry:(id)a0;
- (void)addMetric:(id)a0;
- (id)description;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addDimension:(id)a0;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (void)logAsRollout:(BOOL)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
