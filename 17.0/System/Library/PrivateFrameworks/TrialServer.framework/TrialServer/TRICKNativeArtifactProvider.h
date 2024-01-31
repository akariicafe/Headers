@class NSString, TRICKQueryLog, CKRecordZoneID, CKContainer;
@protocol TRINamespaceDescriptorProviding, TRIDateProviding;

@interface TRICKNativeArtifactProvider : NSObject <TRIArtifactProvider>

@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSString *teamId;
@property (readonly, nonatomic) id<TRIDateProviding> dateProvider;
@property (readonly, nonatomic) id<TRINamespaceDescriptorProviding> namespaceDescriptorProvider;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) TRICKQueryLog *queryLog;

+ (id)containerForIdentifier:(id)a0 serverContext:(id)a1;
+ (id)providerForContainer:(int)a0 teamId:(id)a1 bundleId:(id)a2 dateProvider:(id)a3 namespaceDescriptorProvider:(id)a4 serverContext:(id)a5;
+ (id)fetchRetryDateFromErrorAndOptions:(id)a0 options:(id)a1;
+ (id)mockSQLiteContainerWithIdentifier:(id)a0 serverContext:(id)a1 failureInjectionDelegate:(id)a2;
+ (int)containerFromCkContainer:(id)a0;
+ (id)cloudkitIdentifierForContainer:(int)a0;
+ (id)recordZoneForContainerIdentifier:(id)a0 teamId:(id)a1;
+ (BOOL)isActivityDeferralError:(id)a0;

- (void)fetchBMLTNotificationsWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)fetchRolloutNotificationWithLatestDeploymentForRolloutId:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)queryOperationWithCursor:(id)a0 desiredKeys:(id)a1 options:(id)a2 recordMatchedBlock:(id /* block */)a3 queryCompletionBlock:(id /* block */)a4;
- (void)fetchRolloutNotificationWithDeployment:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)fetchExperimentWithLatestDeploymentForExperimentId:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)fetchRolloutNotificationsDateAscendingWithOptions:(id)a0 lastFetchDateOverride:(id)a1 namespaceNames:(id)a2 completion:(id /* block */)a3;
- (void)_fetchExperimentsWithCursor:(id)a0 withNamespaceNames:(id)a1 sinceDate:(id)a2 fetchRollbacksOnly:(BOOL)a3 options:(id)a4 resultsHandler:(id /* block */)a5;
- (id)initWithCloudKitContainer:(id)a0 zoneId:(id)a1 teamId:(id)a2 bundleId:(id)a3 dateProvider:(id)a4 namespaceDescriptorProvider:(id)a5;
- (void)fetchExperimentWithExperimentDeployment:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)fetchBMLTNotificationWithDeployment:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)queryOperationForRecordType:(id)a0 predicate:(id)a1 desiredKeys:(id)a2 options:(id)a3 recordMatchedBlock:(id /* block */)a4 queryCompletionBlock:(id /* block */)a5;
- (void)_fetchRolloutNotificationWithRolloutId:(id)a0 deploymentId:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)fetchRolloutNotificationsDateDescendingWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)_fetchRecordIdsForAssetsWithIds:(id)a0 options:(id)a1 cursor:(id)a2 cancelableOp:(id)a3 resultBuffer:(id)a4 completion:(id /* block */)a5;
- (id)fetchAssetsWithIndexes:(id)a0 fromTreatmentWithRecordId:(id)a1 options:(id)a2 progress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)fetchFactorPackSetWithId:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)fetchAssetsWithRecordIds:(id)a0 options:(id)a1 perRecordProgress:(id /* block */)a2 perRecordCompletionBlockOnSuccess:(id /* block */)a3 perRecordCompletionBlockOnError:(id /* block */)a4 completion:(id /* block */)a5;
- (void)_fetchExperimentWithExperimentId:(id)a0 deploymentId:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)fetchExperimentNotificationsForLimitedCarryExperimentWithManager:(id)a0 options:(id)a1 rollbacksOnly:(BOOL)a2 completion:(id /* block */)a3;
- (id)fetchDiffSourceRecordIdsWithTargetAssetIds:(id)a0 isAcceptableSourceAssetId:(id /* block */)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)fetchTreatmentWithId:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)configurationFromOptions:(id)a0;
- (void)fetchExperimentNotificationsWithNamespaceNames:(id)a0 rollbacksOnly:(BOOL)a1 lastFetchDateOverride:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)_fetchBMLTNotificationsWithCursor:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_fetchNotificationsWithQueryType:(unsigned long long)a0 withCursor:(id)a1 withNamespaceNames:(id)a2 sinceDate:(id)a3 options:(id)a4 resultsHandler:(id /* block */)a5;
- (id)queryOperationForRecordType:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 desiredKeys:(id)a3 options:(id)a4 recordMatchedBlock:(id /* block */)a5 queryCompletionBlock:(id /* block */)a6;
- (void)fetchBMLTCatalogNotificationWithOptions:(id)a0 completion:(id /* block */)a1;
- (void)_fetchRolloutNotificationsWithCursor:(id)a0 options:(id)a1 sinceDate:(id)a2 namespaceNames:(id)a3 resultsHandler:(id /* block */)a4;
- (void)_fetchRolloutNotificationsWithCursor:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)fetchRecordIdsForAssetsWithIds:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)fetchDiffsWithRecordIds:(id)a0 options:(id)a1 perRecordProgress:(id /* block */)a2 perRecordCompletionBlockOnSuccess:(id /* block */)a3 perRecordCompletionBlockOnError:(id /* block */)a4 completion:(id /* block */)a5;

@end
