@interface IMDMessagesSyncCoordinatorInternal : NSObject

+ (void)clearSyncStoreWhenSafeWithCompletionHandler:(void (^)(void))a0;
+ (BOOL)configureWith:(id)a0 error:(id *)a1;
+ (id)fetchServerCounts;
+ (void)fetchSyncStoreCountsWithCompletion:(id /* block */)a0;
+ (id)initiateSyncFor:(id)a0 delegate:(id)a1 forceRunNow:(BOOL)a2 error:(id *)a3;
+ (void)registerWithBackupController:(id)a0;
+ (void)registerWithErrorAnalyzer:(id)a0;
+ (void)registerWithNotifier:(id)a0;
+ (void)registerWithPreReqsVerifier:(id)a0;
+ (void)registerWithStore:(id)a0 asType:(long long)a1;
+ (void)registerWithSyncStateManager:(id)a0;
+ (void)registerWithSyncTokenStore:(id)a0;
+ (BOOL)scheduleAttachmentAssetDownloadSyncWithDelegate:(id)a0 error:(id *)a1;
+ (BOOL)scheduleBackfillSyncWithDelegate:(id)a0 error:(id *)a1;
+ (BOOL)scheduleBackupSyncWithDelegate:(id)a0 error:(id *)a1;
+ (BOOL)schedulePeriodicSyncWithDelegate:(id)a0 error:(id *)a1;
+ (BOOL)startInitialSyncWithDelegate:(id)a0 error:(id *)a1;
+ (BOOL)startUserInitiatedSyncWithDelegate:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;

@end
