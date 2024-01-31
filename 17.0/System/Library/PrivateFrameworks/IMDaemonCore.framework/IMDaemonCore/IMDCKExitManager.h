@class IMDCKDatabaseManager, CKRecordID, NSDate, NSError, IMDRecordZoneManager, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKExitManager : IMDCKAbstractSyncController

@property (retain, nonatomic) CKRecordID *exitRecordID;
@property (retain, nonatomic) NSNumber *saltZoneCreatedOverride;
@property (retain, nonatomic) NSNumber *subscriptionCreatedOverride;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) IMDCKDatabaseManager *databaseManager;
@property (retain, nonatomic) NSDate *exitRecordDate;
@property (retain, nonatomic) NSError *errorFetchingExitDate;
@property (nonatomic) BOOL fetchedExitDateOnLaunch;

+ (id)sharedInstance;

- (id)init;
- (void)handleNotificationForSubscriptionID:(id)a0;
- (BOOL)_analyticZoneCreated;
- (id)syncCompleteRecordID;
- (void)submitCloudKitMetricWithOperationGroupName:(id)a0;
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)a0 analyticDictionary:(id)a1;
- (void)_scheduleOperation:(id)a0;
- (long long)derivedQualityOfService;
- (void)_evalToggleiCloudSettingsSwitch;
- (BOOL)_subscriptionCreated;
- (void)submitCloudKitMetricWithData:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (void)_submitCloudKitMetricWithOperationGroupName:(id)a0 record:(id)a1 ignoreZoneNotFoundError:(BOOL)a2 completion:(id /* block */)a3;
- (void)_fetchExitRecordDateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_scheduleMetricOperation:(id)a0;
- (id)_sharedCKUtilities;
- (BOOL)_canSubmitCloudKitMetric;
- (void)writeSyncCompletedRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (id)analyticZoneRecordID;
- (void)submitCloudKitAnalyticWithDictionary:(id)a0 operationGroupName:(id)a1 completion:(id /* block */)a2;
- (void)deleteExitRecordWithCompletion:(id /* block */)a0;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;
- (void)writeInitialSyncCompletedRecordIfNeeded;
- (id)initRecordZoneManager:(id)a0 databaseManager:(id)a1;
- (void)writeExitRecordWithDate:(id)a0 completion:(id /* block */)a1;
- (BOOL)_canSubmitCloudKitAnalytic;
- (void)_setUpSubscription;
- (BOOL)_saltZoneCreated;
- (id)_modifiedOpGroupName:(id)a0;
- (void)exitRecordDateWithCompletion:(id /* block */)a0;
- (id)exitConfiguration;

@end
