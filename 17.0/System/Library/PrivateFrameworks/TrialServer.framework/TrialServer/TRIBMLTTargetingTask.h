@class TRIBMLTTaskSupport, NSString, NSArray, NSDate, TRIBMLTDeployment;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIBMLTTargetingTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    TRIBMLTTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> _taskAttribution;
    unsigned long long _triggerEvent;
    TRIBMLTDeployment *_deployment;
    NSString *_bmltBatchNotificationIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIBMLTDeployment *bmltDeployment;
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
+ (id)taskWithBMLTDeployment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3;
+ (id)taskWithBMLTDeployment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3 bmltBatchNotificationIdentifier:(id)a4;

- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)dimensions;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)trialSystemTelemetry;
- (id)serialize;
- (void)encodeWithCoder:(id)a0;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_allocationTelemetryWithEvent:(unsigned char)a0 factorPackSetId:(id)a1 bmltRecord:(id)a2 context:(id)a3;
- (BOOL)_targetBMLTDeployment:(id)a0 appendingTelemetryToSupport:(id)a1 backgroundMLTaskDatabase:(id)a2 backgroundMLTaskHistoryDatabase:(id)a3 targeter:(id)a4 reportTelemetryToServer:(BOOL *)a5 factorPackSetIdToActivate:(id *)a6 wasEnrolled:(BOOL *)a7 shouldDisenroll:(BOOL *)a8 error:(id *)a9;
- (id)_taskResultWithStatus:(int)a0 wasEnrolled:(BOOL)a1 reportResults:(BOOL)a2 nextTasks:(id)a3 bmltHistoryDatabase:(id)a4;
- (id)initWithBMLTDeployment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3 bmltBatchNotificationIdentifier:(id)a4;

@end
