@interface IMDMessagesSyncCoordinator : NSObject

+ (void)initiateSync:(id)a0 forceRunNow:(BOOL)a1 reply:(id /* block */)a2;
+ (id)configureWithDelegate:(id)a0;
+ (void)registerBackupController:(id)a0;
+ (void)registerErrorAnalyzer:(id)a0;
+ (void)registerPreReqsVerifier:(id)a0;
+ (void)registerStore:(id)a0 asType:(long long)a1;
+ (void)registerSyncStateManager:(id)a0;
+ (void)registerSyncTokenStore:(id)a0;
+ (id)scheduleBackfillSyncWithDelegate:(id)a0;
+ (id)startInitialSyncWithDelegate:(id)a0;
+ (id)startUserInitiatedSyncWithDelegate:(id)a0;
+ (id)scheduleBackupSyncWithDelegate:(id)a0;
+ (void)clearSyncStoreWhenSafe;
+ (id)fetchServerCounts;
+ (void)fetchSyncStoreCountsWithCompletion:(id /* block */)a0;
+ (void)registerNotifier:(id)a0;
+ (id)scheduleAttachmentAssetDownloadWithDelegate:(id)a0;
+ (id)schedulePeriodicSyncWithDelegate:(id)a0;

@end
