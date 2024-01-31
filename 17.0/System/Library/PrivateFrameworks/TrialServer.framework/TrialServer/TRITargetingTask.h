@class TRIExperimentTaskSupport, NSString, NSArray, TRIExperimentDeployment, NSDate;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRITargetingTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask> {
    TRIExperimentTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> _taskAttributing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;
@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
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

+ (id)taskWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;
+ (id)taskWithExperiment:(id)a0 taskAttribution:(id)a1;
+ (id)parseFromData:(id)a0;

- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)dimensions;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)trialSystemTelemetry;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)systemCovariatesWithPaths:(id)a0;
- (BOOL)validateSystemCovariates:(id)a0 experiment:(id)a1 error:(id *)a2;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)_isRolloutV1For1PWithExperimentRecord:(id)a0 context:(id)a1;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 isServerSideExperiment:(BOOL)a2 paths:(id)a3 error:(id *)a4;
- (BOOL)getTreatment:(id *)a0 forExperiment:(id)a1 isServerSideExperiment:(BOOL)a2 systemCovariates:(id)a3 userCovariates:(id)a4 error:(id *)a5;
- (id)initWithExperiment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)runTaskUsingContext:(id)a0 withTaskQueue:(id)a1 systemCovariates:(id)a2 userCovariates:(id)a3 error:(id *)a4;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1 details:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)_targetingErrorWithExperiment:(id)a0 errorType:(id)a1;

@end
