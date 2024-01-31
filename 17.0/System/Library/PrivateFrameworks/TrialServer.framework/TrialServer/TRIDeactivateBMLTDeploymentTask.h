@class _PASLock, NSString, NSArray, NSDate, TRIBMLTDeployment;
@protocol TRITaskQueueStateProviding;

@interface TRIDeactivateBMLTDeploymentTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    TRIBMLTDeployment *_bmltDeployment;
    unsigned long long _triggerEvent;
    NSString *_bmltBatchNotificationIdentifier;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromData:(id)a0;
+ (id)taskWithBMLTDeployment:(id)a0 triggerEvent:(unsigned long long)a1;
+ (id)taskWithBMLTDeployment:(id)a0 triggerEvent:(unsigned long long)a1 bmltBatchNotificationIdentifier:(id)a2;

- (id)_asPersistedTask;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)init;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (void)mergeTelemetry:(id)a0;
- (void)addMetric:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_deactivationTelemetryWithSuccess:(BOOL)a0 bmltRecord:(id)a1 deactivatedFactorPackSetId:(id)a2 serverContext:(id)a3;
- (id)initWithBMLTDeployment:(id)a0 triggerEvent:(unsigned long long)a1 bmltBatchNotificationIdentifier:(id)a2;

@end
