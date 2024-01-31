@class NSString, BRCAccountSessionFPFS;

@interface BRCSideCarSyncUpOperation : _BRCOperation <BRCOperationSubclass> {
    BRCAccountSessionFPFS *_session;
    BOOL _shouldPerformAnotherBatch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)createActivity;
- (id)_itemsNeedingSyncUpEnumerator;
- (void)_markItemsFailedSync;
- (void)_syncUpRecordBatchWithModifiedRecords:(id)a0 deletedRecordIDs:(id)a1 recordIDToZoneMap:(id)a2 requestID:(unsigned long long)a3;
- (void)fakeSyncForItem:(id)a0 itemRank:(unsigned long long)a1;
- (BOOL)shouldPerformAnotherBatch;

@end
