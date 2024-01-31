@class WBSCloudHistoryConfiguration, CKRecordZone, NSOperationQueue, CKRecordZoneID, NSObject, CKDatabase;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore> {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSOperationQueue *_cloudKitOperationQueue;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordZone *_recordZone;
    WBSCloudHistoryConfiguration *_configuration;
}

@property (readonly, nonatomic) BOOL useManateeContainer;

- (void)saveCloudHistoryVisits:(id)a0 tombstones:(id)a1 longLivedOperationPersistenceCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(id /* block */)a0;
- (void)_configureFetchChangesOperation:(id)a0;
- (void)_fetchAllRecordsWithQueryOperation:(id)a0 enumerationBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (id)_recordWithCloudHistoryVisits:(id)a0 profileServerIdentifier:(id)a1;
- (id)_recordsWithCloudHistoryVisits:(id)a0;
- (void)fetchRecordsWithServerChangeTokenData:(id)a0 completion:(id /* block */)a1;
- (void)_scheduleOperation:(id)a0;
- (void)_fetchRecordsWithServerChangeToken:(id)a0 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned long long)a1 result:(id)a2 completion:(id /* block */)a3;
- (void)_prepareRecordZoneWithCompletion:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 useManateeContainer:(BOOL)a1;
- (BOOL)_shouldTryToResetRecordZoneForError:(id)a0;
- (void)replayPersistedLongLivedSaveOperationWithID:(id)a0 completion:(id /* block */)a1;
- (void)_resetRecordZone;
- (void).cxx_destruct;
- (void)initializePushNotifications:(id /* block */)a0;
- (void)_batchSaveRecords:(id)a0 useLongLivedOperation:(BOOL)a1 longLivedOperationPersistenceCompletion:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchRecordsForProfileServerIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_recordWithHistoryTombstones:(id)a0 version:(unsigned long long)a1;
- (id)_recordDataForDictionary:(id)a0;
- (void)deleteHistoryZoneWithCompletion:(id /* block */)a0;
- (id)_recordWithType:(id)a0 version:(unsigned long long)a1 dataDictionary:(id)a2;
- (void)_saveRecords:(id)a0 withCompletion:(id /* block */)a1;
- (id)_prepareRecordZoneWithoutCachingWithError:(id *)a0;
- (void)_saveCloudHistoryVisits:(id)a0 tombstones:(id)a1 longLivedOperationPersistenceCompletion:(id /* block */)a2 completion:(id /* block */)a3;

@end
