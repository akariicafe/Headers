@class NSString, NSArray, NSSet, NSDate, NSMutableArray;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    NSMutableArray *_metrics;
    NSMutableArray *_dimensions;
    NSMutableArray *_nextTasks;
    NSDate *_startingFetchDateOverride;
    BOOL _rollbacksOnly;
    BOOL _limitedCarryOnly;
    id<TRITaskAttributing> _taskAttributing;
    NSSet *_namespaceNames;
}

@property (class, readonly) BOOL supportsSecureCoding;

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

+ (id)parseFromData:(id)a0;
+ (id)taskWithStartingFetchDateOverride:(id)a0 namespaceNames:(id)a1 taskAttributing:(id)a2 rollbacksOnly:(BOOL)a3 limitedCarryOnly:(BOOL)a4;

- (id)_asPersistedTask;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (long long)nextTaskCount;
- (id)serialize;
- (void)_addDimension:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_addNextTask:(id)a0;
- (void)_addMetric:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_checkIfAnyTreatmentPresent:(id)a0 usingContext:(id)a1;
- (id)_getNextTaskForExperiment:(id)a0 database:(id)a1 taskQueue:(id)a2;
- (id)_nameForNotificationType:(int)a0;
- (BOOL)_processExperiment:(id)a0 experimentDatabase:(id)a1 namespaceDatabase:(id)a2 taskQueue:(id)a3 paths:(id)a4;
- (id)initWithStartingFetchDateOverride:(id)a0 container:(int)a1 team:(id)a2 rollbacksOnly:(BOOL)a3 withNamespaceNames:(id)a4;
- (id)initWithStartingFetchDateOverride:(id)a0 namespaceNames:(id)a1 taskAttributing:(id)a2 rollbacksOnly:(BOOL)a3 limitedCarryOnly:(BOOL)a4;
- (void)updateStatusForNamespacesWithContext:(id)a0;

@end
