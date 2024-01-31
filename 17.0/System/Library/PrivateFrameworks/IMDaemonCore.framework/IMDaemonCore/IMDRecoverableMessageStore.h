@interface IMDRecoverableMessageStore : NSObject <RecordStoreProviding, RecordStoreDeleting> {
    void /* unknown type, empty encoding */ metadataByRecordNameMap;
}

- (void)resetLocalSyncStateIfAppropriate;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)a0 error:(id *)a1;
- (id)init;
- (void)clearTombstonesForRecordIDs:(id)a0;
- (id)batchOfRecordsToWriteWithLimit:(long long)a0 error:(id *)a1;
- (void)setSyncStatusForGUIDs:(id)a0 toStatus:(long long)a1;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void)legacyImport:(id)a0;

@end
