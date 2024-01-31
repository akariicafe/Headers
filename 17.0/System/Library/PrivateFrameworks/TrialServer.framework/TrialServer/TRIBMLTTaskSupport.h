@class _PASLock, TRIBMLTDeployment;

@interface TRIBMLTTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)tags;
- (void)mergeTelemetry:(id)a0;
- (void)addMetric:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (void)addDimension:(id)a0;
- (id)initWithBMLTDeployment:(id)a0;

@end
