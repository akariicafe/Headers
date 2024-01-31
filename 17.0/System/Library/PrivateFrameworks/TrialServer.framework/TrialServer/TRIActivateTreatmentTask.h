@class TRITaskOptions, NSString, NSArray, NSDate, TRIMetric, TRITaskCapabilityModifier;
@protocol TRITaskQueueStateProviding;

@interface TRIActivateTreatmentTask : TRIActivateTreatmentBaseTask <TRIRetryableTask> {
    TRIMetric *_treatmentMetric;
    TRITaskCapabilityModifier *_capabilityModifier;
    TRITaskOptions *_taskOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL testingIgnoreDependencies;
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

+ (id)taskWithExperiment:(id)a0 treatmentId:(id)a1 taskAttributing:(id)a2 requiresTreatmentInstallation:(BOOL)a3 capabilityModifier:(id)a4 startTime:(id)a5 taskOptions:(id)a6;
+ (id)parseFromData:(id)a0;

- (id)_asPersistedTask;
- (unsigned long long)requiredCapabilities;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)a0 context:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)runTaskUsingContext:(id)a0 experiment:(id)a1;
- (id)_nextTasksForRunStatus:(int)a0;

@end
