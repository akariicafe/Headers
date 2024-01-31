@class NSString, NSArray, NSDate, NSObject, _PASLock;
@protocol OS_dispatch_queue, TRITaskQueueStateProviding;

@interface TRIMaintenanceTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding> {
    NSObject<OS_dispatch_queue> *_channelCleanupQueue;
    _PASLock *_lock;
    BOOL _isFlatbufferReadEnabled;
    BOOL _isFlatbufferWriteEnabled;
    BOOL _isFlatbufferTreatmentReadEnabled;
    BOOL _isFlatbufferTreatmentWriteEnabled;
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

+ (id)task;
+ (id)parseFromData:(id)a0;

- (id)_asPersistedTask;
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
- (id)initWithCoder:(id)a0;
- (void)addDimension:(id)a0;
- (BOOL)_cleanupLocalTempStorageWithPaths:(id)a0;
- (BOOL)_cleanupTreatmentWithTreatmentId:(id)a0 paths:(id)a1;
- (BOOL)_cleanupUnusedContentWithContext:(id)a0 nextTasks:(id)a1;
- (void)_handleExpiredBMLTsWithBMLTDatabase:(id)a0 nextTasks:(id)a1;
- (void)_handleExpiredExperimentsWithExperimentDatabase:(id)a0 nextTasks:(id)a1;
- (void)_handleOrphanedNamespacesWithNamespaceDatabase:(id)a0 nextTasks:(id)a1;
- (void)_reportStorageUsageUsingContext:(id)a0;
- (id)_roundNumber:(id)a0;
- (void)_synchronizePushService:(id)a0 usingRolloutDatabase:(id)a1 experimentDatabase:(id)a2;

@end
