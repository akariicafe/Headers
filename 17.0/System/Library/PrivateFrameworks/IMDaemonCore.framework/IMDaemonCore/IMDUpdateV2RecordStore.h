@class NSMutableDictionary;

@interface IMDUpdateV2RecordStore : NSObject <RecordStoreProviding>

@property (retain, nonatomic) NSMutableDictionary *recordNameToMessageItemMap;

- (void)resetLocalSyncStateIfAppropriate;
- (id)batchOfRecordsToWriteWithLimit:(long long)a0 error:(id *)a1;
- (void)setSyncStatusForGUIDs:(id)a0 toStatus:(long long)a1;
- (void)recordUpdateFailedWithID:(id)a0 localGUID:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)clearLocalSyncState:(unsigned long long)a0;
- (void)recordUpdateSucceededWithRecord:(id)a0;
- (void)legacyImport:(id)a0;

@end
