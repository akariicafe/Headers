@class CKServerChangeToken, IMDRecordZoneManager, NSObject, IMDCKMessageSyncCKOperationFactory;
@protocol OS_dispatch_queue, SyncTokenStoreProviding;

@interface IMDCKRecoverableMessageSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) id<SyncTokenStoreProviding> syncTokenStore;
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (retain, nonatomic) IMDCKMessageSyncCKOperationFactory *CKOperationFactory;

+ (id)sharedInstance;
+ (id)_fetchOperationFactory:(id)a0 token:(id)a1 batchSize:(unsigned long long)a2 activity:(id)a3;
+ (id)_fetchRecoverableMessagesCKConfiguration:(id)a0;
+ (id)_zoneChangesOptionsDictionaryUsingToken:(id)a0 zoneID:(id)a1 resultsLimit:(unsigned long long)a2;

- (id)init;
- (long long)syncControllerRecordType;
- (void)_scheduleOperation:(id)a0;
- (void)deleteRecoverableMessageZone;
- (void).cxx_destruct;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (BOOL)_zoneCreated;
- (id)_syncTokenStore;
- (id)_constructRecoverableMessageRecordIDUsingTombStoneDictionary:(id)a0;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)a0;
- (unsigned long long)_deleteBatchSize;
- (void)_deleteRecoverableMessagesWithRecordIDs:(id)a0 completion:(id /* block */)a1;
- (id)_fetchRecordsOperationWithActivity:(id)a0;
- (void)_onChangeTokenUpdated:(id)a0 token:(id)a1 data:(id)a2;
- (void)_onReadComplete:(long long)a0 error:(id)a1 activity:(id)a2 completion:(id /* block */)a3;
- (void)_onRecordDeleted:(id)a0 type:(id)a1;
- (void)_onRecordRead:(id)a0;
- (void)_onRecordWrite:(id)a0 error:(id)a1 recordNameToPartIndexAndRowID:(id)a2;
- (void)_onRecordZoneFetchComplete:(id)a0 token:(id)a1 tokenData:(id)a2 moreComing:(BOOL)a3 error:(id)a4;
- (void)_onRecoverableMessagePartRecordReadWithDeleteDate:(id)a0 messageGUID:(id)a1 partBody:(id)a2;
- (void)_onWriteComplete:(long long)a0 error:(id)a1 shouldWriteMore:(BOOL)a2 activity:(id)a3 completion:(id /* block */)a4;
- (void)_processRecordDeletionCompletion:(id)a0 error:(id)a1 completionBlock:(id /* block */)a2;
- (void)_readRecordsWithType:(long long)a0 attemptCount:(unsigned long long)a1 activity:(id)a2 completion:(id /* block */)a3;
- (id)_saveRecordsOperationWithMap:(id)a0 activity:(id)a1;
- (id)_saveRecoverableMessagesOperationFactory:(id)a0 token:(id)a1 batchSize:(unsigned long long)a2 recordNameToPartIndexAndRowID:(id)a3 activity:(id)a4;
- (id)_syncTokenKey;
- (void)_writeRecordsWithType:(long long)a0 activity:(id)a1 completion:(id /* block */)a2;
- (id)_writeRecoverableMessagesCKConfiguration:(id)a0;
- (id)createCKRecordforRecoverableMessageMetadata:(id)a0 zoneID:(id)a1 recordNameToPartIndexAndRowID:(id)a2;
- (id)initWithSyncTokenStore:(id)a0;
- (id)recoverableGUIDFromMessageGUID:(id)a0 chatGUID:(id)a1 partIndex:(long long)a2;
- (void)syncRemovedRecoverableMessagesToCloudKitWithCompletion:(id /* block */)a0;
- (void)syncWithType:(long long)a0 withActivity:(id)a1 withCompletion:(id /* block */)a2;

@end
