@class _PASLock, NSString, NSArray, NSDate, NSMutableArray, TRIBMLTDeployment;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIFetchBMLTNotificationsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    NSMutableArray *_nextTasks;
    id<TRITaskAttributing> _taskAttribution;
    TRIBMLTDeployment *_deployment;
    _PASLock *_lock;
    NSString *_bmltBatchNotificationIdentifier;
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

+ (id)taskWithTaskAttribution:(id)a0;
+ (id)parseFromData:(id)a0;
+ (id)categoricalValueForBMLTNotificationEvent:(unsigned long long)a0;
+ (id)taskWithDeployment:(id)a0 taskAttribution:(id)a1 bmltBatchNotificationIdentifier:(id)a2;

- (id)_asPersistedTask;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)initWithTaskAttribution:(id)a0;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)serialize;
- (void)_addDimension:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_addMetric:(id)a0;
- (id)metrics;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_mlruntimeNotifiedTelemetryWithRecords:(BOOL)a0 serverContext:(id)a1;
- (BOOL)_processBMLTArtifact:(id)a0 bmltsProcessed:(id)a1 deactivatedBMLTs:(id)a2 targeter:(id)a3 context:(id)a4 taskQueue:(id)a5;
- (unsigned long long)_processBMLTCatalogArtifact:(id)a0 deactivatedBMLTs:(id)a1 context:(id)a2;
- (id)fetchSingleDeploymentWithContext:(id)a0;
- (id)initWithDeployment:(id)a0 taskAttribution:(id)a1 bmltBatchNotificationIdentifier:(id)a2;

@end
