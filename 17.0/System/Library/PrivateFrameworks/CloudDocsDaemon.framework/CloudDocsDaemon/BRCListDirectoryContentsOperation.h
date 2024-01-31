@class BRCItemID, CKRecordID, NSHashTable, CKQueryOperation, BRCServerZone, NSMutableArray;

@interface BRCListDirectoryContentsOperation : BRCAutoCancelOperation {
    BRCServerZone *_serverZone;
    CKRecordID *_recordID;
    unsigned int _batchSize;
    unsigned long long _recordsFetched;
    unsigned long long _recordsFetchedTotalMetadataSize;
    unsigned long long _xattrsFetchedTotalSize;
    NSMutableArray *_listCompletionBlocks;
    NSMutableArray *_preFlushListCompletionBlocks;
    NSHashTable *_delegates;
    BOOL _hasNilDelegate;
    CKQueryOperation *_queryOp;
}

@property (readonly, nonatomic) BRCItemID *folderToList;
@property (nonatomic) BOOL rescheduleApply;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_cursorWasUpdated:(id)a0 subResourcesOp:(id)a1;
- (void)_scheduleQueryOp;
- (void)_waitForFlushAndRescheduleApplyIfNecessaryWithError:(id)a0;
- (void)addDirectoryListCompletionBlock:(id /* block */)a0;
- (void)addPreFlushDirectoryListCompletionBlock:(id /* block */)a0;
- (void)beginObservingChangesWithDelegate:(id)a0;
- (void)cancelToBeReplacedByOperation:(id)a0;
- (void)endObservingChangesWithDelegate:(id)a0;
- (id)initWithItemID:(id)a0 zone:(id)a1 isUserWaiting:(BOOL)a2;

@end
