@class NSString, CKQueryCursor, NSDate, CKRecordZoneID;

@interface PFCloudKitCKQueryBackedImportWorkItem : PFCloudKitImportRecordsWorkItem {
    NSString *_recordType;
    NSDate *_maxModificationDate;
    CKQueryCursor *_queryCursor;
    CKRecordZoneID *_zoneIDToQuery;
}

- (void)dealloc;
- (id)description;
- (void)executeImportOperationsAndAccumulateRecordsWithManagedObjectContext:(id)a0 completion:(id /* block */)a1;
- (BOOL)commitMetadataChangesWithContext:(id)a0 forStore:(id)a1 error:(id *)a2;
- (BOOL)updateMetadataForAccumulatedChangesInContext:(id)a0 inStore:(id)a1 error:(id *)a2;
- (void)addUpdatedRecord:(id)a0;
- (BOOL)applyAccumulatedChangesToStore:(id)a0 inManagedObjectContext:(id)a1 withStoreMonitor:(id)a2 madeChanges:(BOOL *)a3 error:(id *)a4;
- (id)initForRecordType:(id)a0 withOptions:(id)a1 request:(id)a2;

@end
