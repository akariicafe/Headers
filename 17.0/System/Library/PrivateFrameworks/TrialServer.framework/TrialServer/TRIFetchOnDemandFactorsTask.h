@class NSDate, NSString, NSArray, TRIRolloutDeployment, NSSet, _PASLock, NSDictionary, TRITaskCapabilityModifier, TRITrialSystemTelemetry, NSMutableArray, NSMutableDictionary;
@protocol TRIArtifactProvider, TRITaskAttributing, TRITaskQueueStateProviding;

@interface TRIFetchOnDemandFactorsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding, TRICancellableTask> {
    NSDictionary *_assetIndexesByTreatment;
    NSDictionary *_assetIdsByFactorPack;
    NSSet *_rolloutFactorNames;
    NSString *_namespaceName;
    id<TRITaskAttributing> _taskAttributing;
    int _retryCount;
    NSString *_notificationKey;
    TRITaskCapabilityModifier *_capabilityModifier;
    _Atomic BOOL _isCurrentlyExecuting;
    TRITrialSystemTelemetry *_trialSystemTelemetry;
    NSMutableArray *_metrics;
    NSMutableArray *_dimensions;
    id<TRIArtifactProvider> _artifactProvider;
    _PASLock *_lock;
    NSMutableDictionary *_factorNameByAssetId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) id<TRITaskAttributing> taskAttribution;
@property (readonly, nonatomic) BOOL isCurrentlyExecuting;
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
+ (id)taskWithAssetIndexesByTreatment:(id)a0 experimentId:(id)a1 assetIdsByFactorPack:(id)a2 rolloutFactorNames:(id)a3 rolloutDeployment:(id)a4 namespaceName:(id)a5 taskAttributing:(id)a6 notificationKey:(id)a7 capabilityModifier:(id)a8;

- (id)_asPersistedTask;
- (unsigned long long)requiredCapabilities;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (id)initWithAssetIndexesByTreatment:(id)a0 experimentId:(id)a1 assetIdsByFactorPack:(id)a2 rolloutFactorNames:(id)a3 rolloutDeployment:(id)a4 namespaceName:(id)a5 taskAttributing:(id)a6 notificationKey:(id)a7 capabilityModifier:(id)a8;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)_assetIdsFromKeysInDictionary:(id)a0;
- (void)_addMetricForFetchOnDemandFactorsTaskError:(int)a0;
- (void)_asyncFetchCKAssetsFromAssetRecordsWithContext:(id)a0 plan:(id)a1 aggregateProgress:(id)a2 downloadSize:(unsigned long long *)a3 options:(id)a4 group:(id)a5;
- (void)willBeCancelledByTaskQueue:(id)a0 withContext:(id)a1;
- (id)serialize;
- (void)_addDimension:(id)a0;
- (struct { unsigned char x0; })_saveIndexedAssetURLs:(id)a0 withTreatmentId:(id)a1 usingAssetMetadata:(id)a2 downloadOptions:(id)a3 paths:(id)a4 downloadSize:(unsigned long long *)a5 error:(id *)a6;
- (id)_planForFetchingAssetDiffsWithContext:(id)a0 downloadOptions:(id)a1 updatingAggregateProgress:(id)a2 nonDiffableAssetIds:(id *)a3 unlinkedMAAssetsOnDisk:(id *)a4;
- (void)encodeWithCoder:(id)a0;
- (void)_logOnDemandFactor:(id)a0 metricName:(id)a1 namespaceName:(id)a2 client:(id)a3 error:(id)a4;
- (struct { unsigned char x0; })_saveNamedAssetURLs:(id)a0 usingAssetMetadata:(id)a1 downloadOptions:(id)a2 downloadSize:(unsigned long long *)a3 paths:(id)a4 error:(id *)a5;
- (void)_addMetric:(id)a0;
- (id)_fetchDiffsFromAssetDiffRecordsWithContext:(id)a0 plan:(id)a1 aggregateProgress:(id)a2 downloadSize:(unsigned long long *)a3 options:(id)a4;
- (id)_fetchOptionsWithDownloadOptions:(id)a0 paths:(id)a1;
- (void)removeDownloadableFactorNames:(id)a0;
- (void)_asyncFetchMAAssetsFromFactorPacksWithContext:(id)a0 plan:(id)a1 aggregateProgress:(id)a2 downloadSize:(unsigned long long *)a3 options:(id)a4 group:(id)a5;
- (unsigned long long)_requiredDiskSpaceForPlan:(id)a0;
- (id)metrics;
- (BOOL)_updateFactorPacksByMergingAssets:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void)_asyncFetchAssetsFromTreatmentRecordsWithContext:(id)a0 plan:(id)a1 aggregateProgress:(id)a2 downloadSize:(unsigned long long *)a3 downloadOptions:(id)a4 group:(id)a5;
- (id)_telemetryForFactorPackIds:(id)a0 rolloutDeployment:(id)a1 treatmentIds:(id)a2 experimentId:(id)a3 namespaceName:(id)a4 taskAttributing:(id)a5;
- (id)_planForFetchingAssetsFromFactorPacksWithContext:(id)a0 assetDiffFetchPlan:(id)a1 requiredAssetIds:(id)a2 downloadOptions:(id)a3 updatingAggregateProgress:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)_planForFetchingAssetsFromTreatmentRecordsWithContext:(id)a0 downloadOptions:(id)a1 updatingAggregateProgress:(id)a2;
- (void)_completeTaskWithStatus:(int)a0 earliestRetryDate:(id)a1 error:(id)a2 aggregateProgress:(id)a3 context:(id)a4;
- (id)_currentTaskStatus;
- (id)initWithCoder:(id)a0;

@end
