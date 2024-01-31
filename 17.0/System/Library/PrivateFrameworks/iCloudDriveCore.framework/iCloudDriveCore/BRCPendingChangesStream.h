@class BRCServerZone, CKServerChangeToken, NSString, NSURL, NSError, BRCClientZone, BRCSafeDBHolder;

@interface BRCPendingChangesStream : NSObject {
    NSURL *_databaseURL;
    NSError *_error;
    BRCSafeDBHolder *_dbSafeHolder;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
    BRCServerZone *_serverZone;
    NSString *_label;
    BOOL _hasBeenCreated;
    BOOL _dbHasOpened;
}

- (id)lastError;
- (void).cxx_destruct;
- (void)_openDB;
- (void)destroyDatabase;
- (void)_closeChangeStream;
- (void)_createSchemaIfNecessary;
- (void)_dbBecameCorrupted:(id)a0 withDescription:(id)a1;
- (BOOL)_dropExistingTablesWithDB:(id)a0;
- (BOOL)_finishedFetchingRecordMetadata:(id)a0 withDB:(id)a1;
- (id)_getChangesStreamSafeDBHolder;
- (id)_initDeltaSyncWithChangeToken:(id)a0 serverZone:(id)a1;
- (long long)_recordTypeFromRecordID:(id)a0 isShare:(BOOL)a1 isDelete:(BOOL)a2;
- (BOOL)_saveSubResourceRecord:(id)a0 withDB:(id)a1;
- (void)_wasClosed;
- (long long)copyBlockingSaveRecordsToNeedingFetchIgnoringRecords:(id)a0;
- (BOOL)dumpTablesToContext:(id)a0 includeAllItems:(BOOL)a1 error:(id *)a2;
- (BOOL)enumerateRecordsNeedingMetadataFetchWithBlock:(id /* block */)a0;
- (BOOL)enumerateRecordsNeedingXattrFetchWithBlock:(id /* block */)a0;
- (BOOL)enumerateRecordsOfType:(long long)a0 block:(id /* block */)a1;
- (void)fetchQueryCursor:(id /* block */)a0;
- (void)fetchTokenState:(id /* block */)a0;
- (void)finishedFetchingXattrSignatures:(id)a0;
- (BOOL)hasBeenCreated;
- (BOOL)hasFetchRecordByID:(id)a0;
- (BOOL)hasRecordDeletes;
- (BOOL)hasRecordIDBlockedOnSubResources:(id)a0;
- (BOOL)hasRecordIDsToDeserialize;
- (BOOL)hasSubResourceRecords;
- (BOOL)hasXattrsToFetch;
- (id)initForListingWithParent:(id)a0 serverZone:(id)a1;
- (id)initWithServerZone:(id)a0;
- (BOOL)saveEditedRecords:(id)a0 deletedRecordIDs:(id)a1 deletedShareIDs:(id)a2 subResourceEditedRecords:(id)a3 serverChangeToken:(id)a4 clientChangeToken:(long long)a5;
- (BOOL)saveEditedRecords:(id)a0 subResourceEditedRecords:(id)a1 queryCursor:(id)a2;
- (BOOL)saveSubResourceRecords:(id)a0 afterSavingMainTableItems:(id)a1 queryCursor:(id)a2;
- (BOOL)unblockRecord:(id)a0 waitingOnRecord:(id)a1;
- (void)unblockRecordSavesWaitingOnRecordID:(id)a0;

@end
